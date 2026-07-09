// warp_regfile.sv — 32x32 register file. x0 hardwired to 0.
// Two asynchronous read ports + one synchronous write -> maps to LUT/distributed RAM.
`default_nettype none
module warp_regfile #(parameter int unsigned W = 32) (
  input  wire         clk_i,
  input  wire         we_i,
  input  wire [4:0]   waddr_i,
  input  wire [W-1:0] wdata_i,
  input  wire [4:0]   raddr1_i,
  output wire [W-1:0] rdata1_o,
  input  wire [4:0]   raddr2_i,
  output wire [W-1:0] rdata2_o
);
  logic [W-1:0] regs [1:31];
  assign rdata1_o = (raddr1_i == 5'd0) ? '0 : regs[raddr1_i];
  assign rdata2_o = (raddr2_i == 5'd0) ? '0 : regs[raddr2_i];
  always_ff @(posedge clk_i)
    if (we_i && waddr_i != 5'd0) regs[waddr_i] <= wdata_i;
endmodule
`default_nettype wire