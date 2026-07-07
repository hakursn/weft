// weft_addr_decode.sv — combinational address -> subordinate-index decoder.
// Walks a set of address-range rules (start <= addr < end); first match wins.
// No match asserts dec_error_o so the crossbar can route to an error slave.
// Fully parameterized by address type, rule type, index/rule counts.


`default_nettype none
module weft_addr_decode #(
  parameter int unsigned NoIndices = 2,
  parameter int unsigned NoRules   = 2,
  parameter type         addr_t    = logic [31:0],
  parameter type         rule_t    /* required: struct with .idx/.start_addr/.end_addr */
) (
  input  addr_t                                          addr_i,
  input  rule_t [NoRules-1:0]                            rules_i,
  output logic  [((NoIndices>1)?$clog2(NoIndices):1)-1:0] idx_o,
  output logic                                           dec_valid_o,  // a rule matched
  output logic                                           dec_error_o   // no rule matched
);
  localparam int unsigned IdxW = (NoIndices > 1) ? $clog2(NoIndices) : 1;

  logic [63:0] addr64;
  assign addr64 = 64'(addr_i);

  always_comb begin
    idx_o       = '0;
    dec_valid_o = 1'b0;
    dec_error_o = 1'b1;
    for (int r = 0; r < NoRules; r++) begin
      if (!dec_valid_o &&
          (addr64 >= rules_i[r].start_addr) &&
          (addr64 <  rules_i[r].end_addr)) begin
        idx_o       = IdxW'(rules_i[r].idx);
        dec_valid_o = 1'b1;
        dec_error_o = 1'b0;
      end
    end
  end
endmodule
`default_nettype wire