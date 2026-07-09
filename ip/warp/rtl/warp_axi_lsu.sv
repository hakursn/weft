// warp_axi_lsu.sv — Warp load/store interface -> AXI4 read/write master.
//
// The core presents one word-aligned access on the data interface and holds d_req_i
// until d_rvalid_o. A read (d_we_i=0) issues AR->R and returns the word on d_rdata_o;
// a write (d_we_i=1) issues AW+W (byte strobes on d_wstrb_i) and completes on B.
// Single outstanding; every access is one full-word beat (size=2, len=0).
`default_nettype none
module warp_axi_lsu import weft_axi_pkg::*; #(
  parameter type req_t = logic,
  parameter type rsp_t = logic
) (
  input  wire         clk_i,
  input  wire         rst_ni,
  // core data interface
  input  wire         d_req_i,
  input  wire         d_we_i,      // 1 = store, 0 = load
  input  wire [31:0]  d_addr_i,    // word-aligned
  input  wire [31:0]  d_wdata_i,
  input  wire [3:0]   d_wstrb_i,
  output logic        d_rvalid_o,  // access complete (load data valid / store accepted)
  output logic [31:0] d_rdata_o,
  // AXI read/write master
  output req_t        mst_req_o,
  input  rsp_t        mst_rsp_i
);
  typedef enum logic [1:0] {S_REQ, S_R, S_B} state_e;
  state_e state_q;
  logic   aw_ok_q, w_ok_q;         // per-channel handshake latches for a store

  always_comb begin
    mst_req_o          = '0;
    // read address
    mst_req_o.ar.id    = '0;
    mst_req_o.ar.addr  = d_addr_i;
    mst_req_o.ar.len   = '0;
    mst_req_o.ar.size  = 3'd2;
    mst_req_o.ar.burst = BURST_INCR;
    mst_req_o.ar_valid = (state_q == S_REQ) && d_req_i && !d_we_i;
    mst_req_o.r_ready  = (state_q == S_R);
    // write address + data
    mst_req_o.aw.id    = '0;
    mst_req_o.aw.addr  = d_addr_i;
    mst_req_o.aw.len   = '0;
    mst_req_o.aw.size  = 3'd2;
    mst_req_o.aw.burst = BURST_INCR;
    mst_req_o.aw_valid = (state_q == S_REQ) && d_req_i && d_we_i && !aw_ok_q;
    mst_req_o.w.data   = d_wdata_i;
    mst_req_o.w.strb   = d_wstrb_i;
    mst_req_o.w.last   = 1'b1;
    mst_req_o.w_valid  = (state_q == S_REQ) && d_req_i && d_we_i && !w_ok_q;
    mst_req_o.b_ready  = (state_q == S_B);
    // completion
    d_rdata_o  = mst_rsp_i.r.data;
    d_rvalid_o = ((state_q == S_R) && mst_rsp_i.r_valid)
              || ((state_q == S_B) && mst_rsp_i.b_valid);
  end

  wire ar_hs = mst_req_o.ar_valid && mst_rsp_i.ar_ready;
  wire aw_hs = mst_req_o.aw_valid && mst_rsp_i.aw_ready;
  wire w_hs  = mst_req_o.w_valid  && mst_rsp_i.w_ready;
  wire r_hs  = mst_req_o.r_ready  && mst_rsp_i.r_valid;
  wire b_hs  = mst_req_o.b_ready  && mst_rsp_i.b_valid;
  wire aw_done = aw_ok_q || aw_hs;
  wire w_done  = w_ok_q  || w_hs;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q <= S_REQ; aw_ok_q <= 1'b0; w_ok_q <= 1'b0;
    end else unique case (state_q)
      S_REQ: if (d_req_i && !d_we_i) begin
               if (ar_hs) state_q <= S_R;
             end else if (d_req_i && d_we_i) begin
               if (aw_hs) aw_ok_q <= 1'b1;
               if (w_hs)  w_ok_q  <= 1'b1;
               if (aw_done && w_done) begin
                 state_q <= S_B; aw_ok_q <= 1'b0; w_ok_q <= 1'b0;
               end
             end
      S_R:   if (r_hs) state_q <= S_REQ;
      S_B:   if (b_hs) state_q <= S_REQ;
    endcase
  end
endmodule
`default_nettype wire