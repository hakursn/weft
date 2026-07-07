// weft_rr_arbiter.sv — parameterized round-robin arbiter.
// Grants at most one requester per cycle; the priority pointer advances past the
// last granted index only on an accepted handshake (valid_o & ready_i), giving fair
// round-robin service. Combinational grant, single registered pointer: FPGA-lean.

`default_nettype none
module weft_rr_arbiter #(
  parameter int unsigned NumReq = 2
) (
  input  wire                                       clk_i,
  input  wire                                       rst_ni,
  input  wire  [NumReq-1:0]                          req_i,
  input  wire                                        ready_i,   // consumer accepts grant
  output logic [NumReq-1:0]                          grant_o,
  output logic [((NumReq>1)?$clog2(NumReq):1)-1:0]   sel_o,
  output logic                                       valid_o
);
  localparam int unsigned SelW = (NumReq > 1) ? $clog2(NumReq) : 1;
 
  generate if (NumReq == 1) begin : g_single
    assign grant_o = req_i;
    assign sel_o   = '0;
    assign valid_o = req_i[0];
  end else begin : g_rr
    logic [SelW-1:0]   ptr_q;
    logic [NumReq-1:0] mask, req_masked, gnt_masked, gnt_unmasked, gnt;
 
    assign mask         = {NumReq{1'b1}} << ptr_q;             // indices >= ptr
    assign req_masked   = req_i & mask;
    assign gnt_masked   = req_masked & (~req_masked + 1'b1);   // lowest set bit >= ptr
    assign gnt_unmasked = req_i      & (~req_i      + 1'b1);   // lowest set bit (wrap)
    assign gnt          = (|req_masked) ? gnt_masked : gnt_unmasked;
 
    assign grant_o = gnt;
    assign valid_o = |req_i;
 
    always_comb begin
      sel_o = '0;
      for (int i = 0; i < NumReq; i++) if (gnt[i]) sel_o = SelW'(i);
    end
 
    always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni)                    ptr_q <= '0;
      else if (valid_o && ready_i)    ptr_q <= (sel_o == SelW'(NumReq-1)) ? '0
                                                                          : (sel_o + 1'b1);
    end
  end endgenerate
endmodule
`default_nettype wire