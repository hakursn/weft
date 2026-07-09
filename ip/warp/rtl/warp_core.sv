// warp_core.sv — clean-room RV32I core (sequential, correctness-first).
//
// Two-state machine over a single-outstanding bus: S_FETCH issues the fetch and
// waits for f_rvalid; S_EXEC decodes, reads regs, executes, and for loads/stores
// drives the data interface and waits for d_rvalid, then writes back and advances.
// No forwarding / load-use hazards (never two instructions in flight). Exposes an
// RVFI-lite retire trace for lock-step cosim against the golden ISS.
`default_nettype none
module warp_core import warp_pkg::*; #(
  parameter logic [31:0] RESET_ADDR = RESET_VECTOR
) (
  input  wire         clk_i,
  input  wire         rst_ni,
  // fetch interface
  output logic        f_req_o,
  output logic [31:0] f_pc_o,
  input  wire         f_rvalid_i,
  input  wire [31:0]  f_instr_i,
  // data interface
  output logic        d_req_o,
  output logic        d_we_o,
  output logic [31:0] d_addr_o,
  output logic [31:0] d_wdata_o,
  output logic [3:0]  d_wstrb_o,
  input  wire         d_rvalid_i,
  input  wire [31:0]  d_rdata_i,
  // retire trace (RVFI-lite)
  output logic        retire_valid_o,
  output logic [31:0] retire_pc_o,
  output logic [31:0] retire_instr_o,
  output logic [4:0]  retire_rd_o,
  output logic [31:0] retire_rd_wdata_o,
  output logic        retire_mem_valid_o,
  output logic [31:0] retire_mem_addr_o,
  output logic [3:0]  retire_mem_wstrb_o,
  output logic [31:0] retire_mem_wdata_o
);
  typedef enum logic {S_FETCH, S_EXEC} state_e;
  state_e      st_q;
  logic [31:0] pc_q, instr_q;

  decoded_t d;
  warp_decoder u_dec(.instr_i(instr_q), .d_o(d));

  logic        rf_we; logic [31:0] rf_wd; logic [31:0] rs1_v, rs2_v;
  warp_regfile u_rf(.clk_i(clk_i), .we_i(rf_we), .waddr_i(d.rd), .wdata_i(rf_wd),
    .raddr1_i(d.rs1), .rdata1_o(rs1_v), .raddr2_i(d.rs2), .rdata2_o(rs2_v));

  // ALU operands + result
  logic [31:0] opa, opb, alu_res;
  always_comb begin
    unique case (d.opa_sel)
      A_RS1:  opa = rs1_v;
      A_PC:   opa = pc_q;
      A_ZERO: opa = 32'd0;
      default:opa = rs1_v;
    endcase
    opb = (d.opb_sel == B_IMM) ? d.imm : rs2_v;
  end
  warp_alu    u_alu(.op_i(d.alu_op), .a_i(opa), .b_i(opb), .result_o(alu_res));
  logic br_taken;
  warp_branch u_br (.op_i(d.br_op), .a_i(rs1_v), .b_i(rs2_v), .taken_o(br_taken));

  // effective address + store/load alignment
  wire [31:0] eaddr = rs1_v + d.imm;
  wire [1:0]  eoff  = eaddr[1:0];
  logic [31:0] st_wdata; logic [3:0] st_wstrb;
  always_comb unique case (d.mem_funct3[1:0])
    2'b00:  begin st_wstrb = 4'b0001 << eoff; st_wdata = {4{rs2_v[7:0]}};  end // SB
    2'b01:  begin st_wstrb = 4'b0011 << eoff; st_wdata = {2{rs2_v[15:0]}}; end // SH
    default:begin st_wstrb = 4'b1111;         st_wdata = rs2_v;            end // SW
  endcase
  wire [7:0]  ld_byte = d_rdata_i[eoff*8 +: 8];
  wire [15:0] ld_half = eoff[1] ? d_rdata_i[31:16] : d_rdata_i[15:0];
  logic [31:0] ld_data;
  always_comb unique case (d.mem_funct3)
    3'b000:  ld_data = {{24{ld_byte[7]}},  ld_byte};   // LB
    3'b001:  ld_data = {{16{ld_half[15]}}, ld_half};   // LH
    3'b010:  ld_data = d_rdata_i;                       // LW
    3'b100:  ld_data = {24'd0, ld_byte};               // LBU
    3'b101:  ld_data = {16'd0, ld_half};               // LHU
    default: ld_data = d_rdata_i;
  endcase

  // writeback + next pc
  always_comb unique case (d.wb_sel)
    WB_ALU:  rf_wd = alu_res;
    WB_PC4:  rf_wd = pc_q + 32'd4;
    WB_MEM:  rf_wd = ld_data;
    default: rf_wd = alu_res;
  endcase
  logic [31:0] npc;
  always_comb begin
    npc = pc_q + 32'd4;
    if      (d.is_branch && br_taken) npc = pc_q + d.imm;
    else if (d.is_jal)                npc = pc_q + d.imm;
    else if (d.is_jalr)               npc = (rs1_v + d.imm) & ~32'd1;
  end

  wire is_mem       = d.is_load | d.is_store;
  wire exec_advance = (st_q == S_EXEC) && (!is_mem || d_rvalid_i);

  // bus outputs
  assign f_req_o   = (st_q == S_FETCH);
  assign f_pc_o    = pc_q;
  assign d_req_o   = (st_q == S_EXEC) && is_mem;
  assign d_we_o    = d.is_store;
  assign d_addr_o  = eaddr & ~32'd3;
  assign d_wdata_o = st_wdata;
  assign d_wstrb_o = st_wstrb;

  assign rf_we = exec_advance && d.reg_write && (d.rd != 5'd0);

  // retire trace
  assign retire_valid_o     = exec_advance;
  assign retire_pc_o        = pc_q;
  assign retire_instr_o     = instr_q;
  assign retire_rd_o        = (d.reg_write && d.rd != 5'd0) ? d.rd : 5'd0;
  assign retire_rd_wdata_o  = (d.reg_write && d.rd != 5'd0) ? rf_wd : 32'd0;
  assign retire_mem_valid_o = exec_advance && d.is_store;
  assign retire_mem_addr_o  = eaddr & ~32'd3;
  assign retire_mem_wstrb_o = st_wstrb;
  assign retire_mem_wdata_o = st_wdata;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      st_q <= S_FETCH; pc_q <= RESET_ADDR; instr_q <= '0;
    end else unique case (st_q)
      S_FETCH: if (f_rvalid_i) begin instr_q <= f_instr_i; st_q <= S_EXEC; end
      S_EXEC:  if (exec_advance) begin pc_q <= npc; st_q <= S_FETCH; end
    endcase
  end
endmodule
`default_nettype wire