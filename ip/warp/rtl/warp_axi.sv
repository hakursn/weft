// warp_axi.sv — Warp core with its two AXI masters (instruction + data).
// i_*_o/i are the fetch read master; d_*_o/i are the load/store read/write master.
// Each becomes a manager port on weft_axi_xbar.
`default_nettype none
module warp_axi import warp_pkg::*; #(
  parameter type         req_t      = logic,
  parameter type         rsp_t      = logic,
  parameter logic [31:0] RESET_ADDR = RESET_VECTOR
) (
  input  wire  clk_i,
  input  wire  rst_ni,
  output req_t i_req_o,  input  rsp_t i_rsp_i,
  output req_t d_req_o,  input  rsp_t d_rsp_i,
  // retire trace passthrough
  output logic        retire_valid_o,
  output logic [31:0] retire_pc_o, retire_instr_o,
  output logic [4:0]  retire_rd_o,
  output logic [31:0] retire_rd_wdata_o,
  output logic        retire_mem_valid_o,
  output logic [31:0] retire_mem_addr_o,
  output logic [3:0]  retire_mem_wstrb_o,
  output logic [31:0] retire_mem_wdata_o
);
  logic        f_req, f_rvalid; logic [31:0] f_pc, f_instr;
  logic        c_req, c_we, c_rvalid; logic [31:0] c_addr, c_wdata, c_rdata; logic [3:0] c_wstrb;

  warp_core #(.RESET_ADDR(RESET_ADDR)) u_core (
    .clk_i, .rst_ni,
    .f_req_o(f_req), .f_pc_o(f_pc), .f_rvalid_i(f_rvalid), .f_instr_i(f_instr),
    .d_req_o(c_req), .d_we_o(c_we), .d_addr_o(c_addr), .d_wdata_o(c_wdata),
    .d_wstrb_o(c_wstrb), .d_rvalid_i(c_rvalid), .d_rdata_i(c_rdata),
    .retire_valid_o, .retire_pc_o, .retire_instr_o, .retire_rd_o, .retire_rd_wdata_o,
    .retire_mem_valid_o, .retire_mem_addr_o, .retire_mem_wstrb_o, .retire_mem_wdata_o);

  warp_axi_ifetch #(.req_t(req_t), .rsp_t(rsp_t)) u_if (
    .clk_i, .rst_ni, .f_req_i(f_req), .f_pc_i(f_pc),
    .f_rvalid_o(f_rvalid), .f_instr_o(f_instr), .mst_req_o(i_req_o), .mst_rsp_i(i_rsp_i));

  warp_axi_lsu #(.req_t(req_t), .rsp_t(rsp_t)) u_ls (
    .clk_i, .rst_ni, .d_req_i(c_req), .d_we_i(c_we), .d_addr_i(c_addr),
    .d_wdata_i(c_wdata), .d_wstrb_i(c_wstrb), .d_rvalid_o(c_rvalid), .d_rdata_o(c_rdata),
    .mst_req_o(d_req_o), .mst_rsp_i(d_rsp_i));
endmodule
`default_nettype wire