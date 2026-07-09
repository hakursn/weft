// weft_axi_bram.sv — AXI4 subordinate wrapping an on-chip word memory.
//
// Handles INCR bursts of any length, byte-strobed writes, and returns OKAY.
// One outstanding transaction per direction (write and read channels are
// independent). The word index is addr[AddrLsb +: IdxW]; higher address bits
// are ignored, so map a region of MemWords*(DataW/8) bytes to this port.
//
// v1 uses a combinational read (functionally correct; on FPGA this infers
// LUT/distributed RAM). A registered-read variant for block-RAM inference is a
// later FPGA-optimization step.
`default_nettype none
module weft_axi_bram import weft_axi_pkg::*; #(
  parameter type         req_t    = logic,
  parameter type         rsp_t    = logic,
  parameter int unsigned MemWords = 1024
) (
  input  wire  clk_i,
  input  wire  rst_ni,
  input  req_t slv_req_i,
  output rsp_t slv_rsp_o
);
  localparam int unsigned DataW   = $bits(slv_req_i.w.data);
  localparam int unsigned StrbW   = DataW/8;
  localparam int unsigned AddrLsb = (StrbW > 1) ? $clog2(StrbW) : 0;
  localparam int unsigned IdxW    = (MemWords > 1) ? $clog2(MemWords) : 1;

  logic [DataW-1:0] mem [MemWords];

  typedef enum logic [1:0] {W_IDLE, W_DATA, W_RESP} w_e; w_e w_q;
  logic [IdxW-1:0]                    waddr_q;
  logic [$bits(slv_req_i.aw.id)-1:0]  wid_q;

  typedef enum logic {R_IDLE, R_DATA} r_e; r_e r_q;
  logic [IdxW-1:0]                    raddr_q;
  logic [$bits(slv_req_i.ar.id)-1:0]  rid_q;
  logic [7:0]                         rlen_q, rcnt_q;

  function automatic logic [IdxW-1:0] word_idx(input logic [$bits(slv_req_i.aw.addr)-1:0] a);
    return a[AddrLsb +: IdxW];
  endfunction

  always_comb begin
    slv_rsp_o          = '0;
    slv_rsp_o.aw_ready = (w_q == W_IDLE);
    slv_rsp_o.w_ready  = (w_q == W_DATA);
    slv_rsp_o.b_valid  = (w_q == W_RESP);
    slv_rsp_o.b.id     = wid_q;
    slv_rsp_o.b.resp   = RESP_OKAY;
    slv_rsp_o.ar_ready = (r_q == R_IDLE);
    slv_rsp_o.r_valid  = (r_q == R_DATA);
    slv_rsp_o.r.id     = rid_q;
    slv_rsp_o.r.data   = mem[raddr_q];
    slv_rsp_o.r.resp   = RESP_OKAY;
    slv_rsp_o.r.last   = (rcnt_q == rlen_q);
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      w_q <= W_IDLE; r_q <= R_IDLE; rcnt_q <= '0;
    end else begin
      unique case (w_q)
        W_IDLE: if (slv_req_i.aw_valid) begin
                  wid_q   <= slv_req_i.aw.id;
                  waddr_q <= word_idx(slv_req_i.aw.addr);
                  w_q     <= W_DATA;
                end
        W_DATA: if (slv_req_i.w_valid) begin
                  for (int b = 0; b < StrbW; b++)
                    if (slv_req_i.w.strb[b]) mem[waddr_q][b*8 +: 8] <= slv_req_i.w.data[b*8 +: 8];
                  waddr_q <= waddr_q + 1'b1;
                  if (slv_req_i.w.last) w_q <= W_RESP;
                end
        W_RESP: if (slv_req_i.b_ready) w_q <= W_IDLE;
        default: w_q <= W_IDLE;
      endcase
      unique case (r_q)
        R_IDLE: if (slv_req_i.ar_valid) begin
                  rid_q   <= slv_req_i.ar.id;
                  raddr_q <= word_idx(slv_req_i.ar.addr);
                  rlen_q  <= slv_req_i.ar.len;
                  rcnt_q  <= '0;
                  r_q     <= R_DATA;
                end
        R_DATA: if (slv_req_i.r_ready) begin
                  if (rcnt_q == rlen_q) r_q <= R_IDLE;
                  else begin rcnt_q <= rcnt_q + 8'd1; raddr_q <= raddr_q + 1'b1; end
                end
        default: r_q <= R_IDLE;
      endcase
    end
  end
endmodule
`default_nettype wire