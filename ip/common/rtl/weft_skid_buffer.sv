// weft skid buffer - fully registered ready/valid register slice (a.k.a skid buffer/
// spill register). Breaks both the valid and the ready timing paths at a cost of two storage slots,
// so long AXI channels can be pipelined on an fpga without creating a combinational path from a 
// downstream ready to an upstream one.

`default_nettype none
module weft_skid_buffer #(
  parameter type data_t = logic,      // payload type (any packed type / struct)
  parameter bit  Bypass = 1'b0        // 1 = combinational pass-through (no slice)
) (
  input  wire   clk_i,
  input  wire   rst_ni,
  // upstream (producer) side
  input  data_t in_data_i,
  input  wire   in_valid_i,
  output logic  in_ready_o,
  // downstream (consumer) side
  output data_t out_data_o,
  output logic  out_valid_o,
  input  wire   out_ready_i
);
  generate if (Bypass) begin : g_bypass
    assign out_data_o  = in_data_i;
    assign out_valid_o = in_valid_i;
    assign in_ready_o  = out_ready_i;
  end else begin : g_slice
    logic  skid_valid_q;   // skid (overflow) slot occupied
    data_t skid_data_q;
 
    // We can accept a new beat whenever the skid slot is free.
    assign in_ready_o = ~skid_valid_q;
 
    // Skid slot: fill it when a beat arrives while the output is stalled.
    always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni)                                                   skid_valid_q <= 1'b0;
      else if (in_valid_i && in_ready_o && out_valid_o && !out_ready_i) skid_valid_q <= 1'b1;
      else if (out_ready_i)                                          skid_valid_q <= 1'b0;
    end
    always_ff @(posedge clk_i) begin
      if (in_valid_i && in_ready_o) skid_data_q <= in_data_i;
    end
 
    // Output register: advances when empty or when the consumer takes a beat.
    always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni)                          out_valid_o <= 1'b0;
      else if (!out_valid_o || out_ready_i) out_valid_o <= in_valid_i || skid_valid_q;
    end
    always_ff @(posedge clk_i) begin
      if (!out_valid_o || out_ready_i) out_data_o <= skid_valid_q ? skid_data_q : in_data_i;
    end
  end endgenerate
endmodule
`default_nettype wire