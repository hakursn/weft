// weft_axi_demux.sv — AXI demux (v1): one manager -> NoMstPorts subordinates,
// steered by per-transaction select inputs (driven by an address decoder).
//
// v1 policy: one active master port per direction. Outstanding writes/reads are
// counted; the manager may only switch to a different subordinate (in that
// direction) once the current one's outstanding count drains to zero. This is
// AXI-correct (no read interleaving; same-ID order preserved) and simple.
// Full concurrency (W-follow FIFO + per-ID reorder tables) is a later upgrade.
`default_nettype none
module weft_axi_demux #(
  parameter int unsigned NoMstPorts = 2,
  parameter int unsigned MaxTxns    = 8,
  parameter type         req_t      = logic,
  parameter type         rsp_t      = logic
) (
  input  wire                                            clk_i,
  input  wire                                            rst_ni,
  input  wire [((NoMstPorts>1)?$clog2(NoMstPorts):1)-1:0] slv_aw_select_i,
  input  wire [((NoMstPorts>1)?$clog2(NoMstPorts):1)-1:0] slv_ar_select_i,
  input  req_t                                           slv_req_i,
  output rsp_t                                           slv_rsp_o,
  output req_t                                           mst_reqs_o [NoMstPorts],
  input  rsp_t                                           mst_rsps_i [NoMstPorts]
);
  localparam int unsigned SelW = (NoMstPorts > 1) ? $clog2(NoMstPorts) : 1;
  localparam int unsigned CntW = $clog2(MaxTxns+1);

  logic [SelW-1:0] w_port_q, r_port_q;
  logic [CntW-1:0] w_cnt_q,  r_cnt_q;

  // acceptance gates: accept to a new port only when idle, else same port under limit
  logic aw_allowed, ar_allowed;
  assign aw_allowed = (w_cnt_q == '0) ||
                      ((slv_aw_select_i == w_port_q) && (w_cnt_q < CntW'(MaxTxns)));
  assign ar_allowed = (r_cnt_q == '0) ||
                      ((slv_ar_select_i == r_port_q) && (r_cnt_q < CntW'(MaxTxns)));

  // ---- forward requests to the selected / active master ports ----
  always_comb begin
    for (int unsigned m = 0; m < NoMstPorts; m++) begin
      mst_reqs_o[m]          = '0;
      mst_reqs_o[m].aw       = slv_req_i.aw;
      mst_reqs_o[m].aw_valid = slv_req_i.aw_valid && (SelW'(m) == slv_aw_select_i) && aw_allowed;
      mst_reqs_o[m].w        = slv_req_i.w;
      mst_reqs_o[m].w_valid  = slv_req_i.w_valid && (SelW'(m) == w_port_q) && (w_cnt_q != '0);
      mst_reqs_o[m].b_ready  = slv_req_i.b_ready && (SelW'(m) == w_port_q) && (w_cnt_q != '0);
      mst_reqs_o[m].ar       = slv_req_i.ar;
      mst_reqs_o[m].ar_valid = slv_req_i.ar_valid && (SelW'(m) == slv_ar_select_i) && ar_allowed;
      mst_reqs_o[m].r_ready  = slv_req_i.r_ready && (SelW'(m) == r_port_q) && (r_cnt_q != '0);
    end
  end

  // ---- responses back to the manager from the active ports ----
  always_comb begin
    slv_rsp_o          = '0;
    slv_rsp_o.aw_ready = aw_allowed && mst_rsps_i[slv_aw_select_i].aw_ready;
    slv_rsp_o.w_ready  = (w_cnt_q != '0) && mst_rsps_i[w_port_q].w_ready;
    slv_rsp_o.b        = mst_rsps_i[w_port_q].b;
    slv_rsp_o.b_valid  = (w_cnt_q != '0) && mst_rsps_i[w_port_q].b_valid;
    slv_rsp_o.ar_ready = ar_allowed && mst_rsps_i[slv_ar_select_i].ar_ready;
    slv_rsp_o.r        = mst_rsps_i[r_port_q].r;
    slv_rsp_o.r_valid  = (r_cnt_q != '0) && mst_rsps_i[r_port_q].r_valid;
  end

  // ---- handshakes and outstanding counters ----
  wire aw_hs     = slv_req_i.aw_valid && slv_rsp_o.aw_ready;
  wire b_hs      = slv_rsp_o.b_valid  && slv_req_i.b_ready;
  wire ar_hs     = slv_req_i.ar_valid && slv_rsp_o.ar_ready;
  wire r_hs      = slv_rsp_o.r_valid  && slv_req_i.r_ready;
  wire r_last_hs = r_hs && slv_rsp_o.r.last;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      w_port_q <= '0; r_port_q <= '0; w_cnt_q <= '0; r_cnt_q <= '0;
    end else begin
      if (aw_hs && (w_cnt_q == '0)) w_port_q <= slv_aw_select_i;
      if (ar_hs && (r_cnt_q == '0)) r_port_q <= slv_ar_select_i;
      w_cnt_q <= w_cnt_q + (aw_hs ? CntW'(1) : '0) - (b_hs      ? CntW'(1) : '0);
      r_cnt_q <= r_cnt_q + (ar_hs ? CntW'(1) : '0) - (r_last_hs ? CntW'(1) : '0);
    end
  end
endmodule
`default_nettype wire