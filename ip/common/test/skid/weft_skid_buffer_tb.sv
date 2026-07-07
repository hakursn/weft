// Thin fixed-width top so cocotb can bind to flat, named ports.
`default_nettype none
module weft_skid_buffer_tb #(parameter int W = 8) (
  input  wire         clk_i,
  input  wire         rst_ni,
  input  wire [W-1:0] in_data_i,
  input  wire         in_valid_i,
  output wire         in_ready_o,
  output wire [W-1:0] out_data_o,
  output wire         out_valid_o,
  input  wire         out_ready_i
);
  weft_skid_buffer #(.data_t(logic [W-1:0])) u_dut (.*);
endmodule
`default_nettype wire