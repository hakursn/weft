// weft_sync_fifo.sv — parameterized synchronous FIFO.
// Circular buffer + usage counter. Small depths infer LUT/distributed RAM on
// FPGA; the read is combinational off the storage array. Optional fall-through
// (a push into an empty FIFO is visible on rdata the same cycle).

`default_nettype none
module weft_sync_fifo #(
  parameter type         data_t      = logic,
  parameter int unsigned Depth       = 8,      // entries, >= 1
  parameter bit          FallThrough = 1'b0
) (
  input  wire                     clk_i,
  input  wire                     rst_ni,
  input  wire                     flush_i,     // synchronous clear
  input  data_t                   wdata_i,
  input  wire                     push_i,
  output logic                    full_o,
  output data_t                   rdata_o,
  input  wire                     pop_i,
  output logic                    empty_o,
  output logic [$clog2(Depth+1)-1:0] usage_o
);
  localparam int unsigned PtrW = (Depth > 1) ? $clog2(Depth) : 1;
  localparam int unsigned UsgW = $clog2(Depth+1);

  data_t              mem [Depth];
  logic [PtrW-1:0]    rd_ptr_q, wr_ptr_q;
  logic [UsgW-1:0]    usage_q;

  wire do_push = push_i && !full_o;
  wire do_pop  = pop_i  && !empty_o;

  assign full_o  = (usage_q == UsgW'(Depth));
  assign empty_o = (usage_q == '0);
  assign usage_o = usage_q;
  assign rdata_o = (FallThrough && empty_o && push_i) ? wdata_i : mem[rd_ptr_q];

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      rd_ptr_q <= '0; wr_ptr_q <= '0; usage_q <= '0;
    end else if (flush_i) begin
      rd_ptr_q <= '0; wr_ptr_q <= '0; usage_q <= '0;
    end else begin
      if (do_push) wr_ptr_q <= (wr_ptr_q == PtrW'(Depth-1)) ? '0 : (wr_ptr_q + 1'b1);
      if (do_pop)  rd_ptr_q <= (rd_ptr_q == PtrW'(Depth-1)) ? '0 : (rd_ptr_q + 1'b1);
      usage_q <= usage_q + UsgW'(do_push) - UsgW'(do_pop);
    end
  end

  always_ff @(posedge clk_i) begin
    if (do_push) mem[wr_ptr_q] <= wdata_i;
  end
endmodule
`default_nettype wire