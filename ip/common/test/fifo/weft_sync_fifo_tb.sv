`default_nettype none
module weft_sync_fifo_tb #(parameter int W=8, parameter int D=6) (
  input  wire         clk_i, rst_ni, flush_i,
  input  wire [W-1:0] wdata_i,
  input  wire         push_i,
  output wire         full_o,
  output wire [W-1:0] rdata_o,
  input  wire         pop_i,
  output wire         empty_o,
  output wire [$clog2(D+1)-1:0] usage_o
);
  weft_sync_fifo #(.data_t(logic [W-1:0]), .Depth(D)) u_dut (.*);
endmodule
`default_nettype wire