`default_nettype none
module weft_addr_decode_tb #(parameter int NR=3, parameter int NI=3) (
  input  wire [31:0] addr_i,
  output wire [$clog2(NI)-1:0] idx_o,
  output wire        dec_valid_o,
  output wire        dec_error_o
);
  import weft_axi_pkg::*;
  xbar_rule_t [NR-1:0] rules;
  assign rules[0] = {32'd0, 64'h0000_0000, 64'h0000_1000};
  assign rules[1] = {32'd1, 64'h0000_1000, 64'h0000_2000};
  assign rules[2] = {32'd2, 64'h0000_2000, 64'h0000_3000};
  weft_addr_decode #(.NoIndices(NI), .NoRules(NR), .addr_t(logic [31:0]), .rule_t(xbar_rule_t)) u_dut (
    .addr_i(addr_i), .rules_i(rules), .idx_o(idx_o),
    .dec_valid_o(dec_valid_o), .dec_error_o(dec_error_o));
endmodule
`default_nettype wire