// weft_axi_mux.sv — AXI mux: NoSlvPorts managers -> 1 subordinate.
//
// AW/AR are arbitrated round-robin (weft_rr_arbiter). The winning source index is
// prepended onto the AXI ID (id is the MSB field, so widening == concatenation),
// making IDs unique at the subordinate; B/R are routed back by stripping that
// prefix. W beats follow AW order via a small select-FIFO (weft_sync_fifo): each
// granted AW pushes its source index; W is forwarded from the FIFO front until
// wlast, then popped. Master-side ID width must be SlvIdWidth + clog2(NoSlvPorts).
`default_nettype none
module weft_axi_mux #(
  parameter int unsigned NoSlvPorts = 2,
  parameter int unsigned SlvIdWidth = 4,
  parameter int unsigned MaxWTxns   = 8,
  parameter type         slv_req_t  = logic,
  parameter type         slv_rsp_t  = logic,
  parameter type         mst_req_t  = logic,
  parameter type         mst_rsp_t  = logic
) (
  input  wire      clk_i,
  input  wire      rst_ni,
  input  slv_req_t slv_reqs_i [NoSlvPorts],
  output slv_rsp_t slv_rsps_o [NoSlvPorts],
  output mst_req_t mst_req_o,
  input  mst_rsp_t mst_rsp_i
);
  localparam int unsigned SelW = (NoSlvPorts > 1) ? $clog2(NoSlvPorts) : 1;

  // ---- request valid vectors ----
  logic [NoSlvPorts-1:0] aw_req, ar_req;
  always_comb begin
    for (int unsigned i = 0; i < NoSlvPorts; i++) begin
      aw_req[i] = slv_reqs_i[i].aw_valid;
      ar_req[i] = slv_reqs_i[i].ar_valid;
    end
  end

  // ---- AW / AR arbitration ----
  logic [NoSlvPorts-1:0] aw_grant, ar_grant;
  logic [SelW-1:0]       aw_sel, ar_sel;
  logic                  aw_arb_valid, ar_arb_valid;
  logic                  aw_hs, ar_hs;

  weft_rr_arbiter #(.NumReq(NoSlvPorts)) i_aw_arb (
    .clk_i(clk_i), .rst_ni(rst_ni), .req_i(aw_req), .ready_i(aw_hs),
    .grant_o(aw_grant), .sel_o(aw_sel), .valid_o(aw_arb_valid));
  weft_rr_arbiter #(.NumReq(NoSlvPorts)) i_ar_arb (
    .clk_i(clk_i), .rst_ni(rst_ni), .req_i(ar_req), .ready_i(ar_hs),
    .grant_o(ar_grant), .sel_o(ar_sel), .valid_o(ar_arb_valid));

  // ---- W select FIFO (source index per outstanding AW) ----
  logic [SelW-1:0] w_sel;
  logic            w_full, w_empty, w_pop, w_hs;
  weft_sync_fifo #(.data_t(logic [SelW-1:0]), .Depth(MaxWTxns), .FallThrough(1'b0)) i_wfifo (
    .clk_i(clk_i), .rst_ni(rst_ni), .flush_i(1'b0),
    .wdata_i(aw_sel), .push_i(aw_hs), .full_o(w_full),
    .rdata_o(w_sel), .pop_i(w_pop), .empty_o(w_empty), .usage_o());

  // ---- response routing selects (from prepended id) ----
  wire [SelW-1:0] b_sel = mst_rsp_i.b.id[SlvIdWidth +: SelW];
  wire [SelW-1:0] r_sel = mst_rsp_i.r.id[SlvIdWidth +: SelW];

  // ---- master request assembly ----
  wire [$bits(slv_reqs_i[0].aw)-1:0] sel_aw_bits = slv_reqs_i[aw_sel].aw;
  wire [$bits(slv_reqs_i[0].ar)-1:0] sel_ar_bits = slv_reqs_i[ar_sel].ar;

  always_comb begin
    mst_req_o          = '0;
    mst_req_o.aw       = {aw_sel, sel_aw_bits};                 // prepend src idx onto id
    mst_req_o.aw_valid = aw_arb_valid && !w_full;
    mst_req_o.w        = slv_reqs_i[w_sel].w;                   // w has no id -> direct
    mst_req_o.w_valid  = !w_empty && slv_reqs_i[w_sel].w_valid;
    mst_req_o.b_ready  = slv_reqs_i[b_sel].b_ready;
    mst_req_o.ar       = {ar_sel, sel_ar_bits};
    mst_req_o.ar_valid = ar_arb_valid;
    mst_req_o.r_ready  = slv_reqs_i[r_sel].r_ready;
  end

  assign aw_hs = mst_req_o.aw_valid && mst_rsp_i.aw_ready;
  assign ar_hs = mst_req_o.ar_valid && mst_rsp_i.ar_ready;
  assign w_hs  = mst_req_o.w_valid  && mst_rsp_i.w_ready;
  assign w_pop = w_hs && mst_req_o.w.last;

  // ---- responses back to each manager (strip prepended id) ----
  wire [$bits(mst_rsp_i.b)-1:0] b_bits = mst_rsp_i.b;
  wire [$bits(mst_rsp_i.r)-1:0] r_bits = mst_rsp_i.r;
  always_comb begin
    for (int unsigned i = 0; i < NoSlvPorts; i++) begin
      slv_rsps_o[i]          = '0;
      slv_rsps_o[i].aw_ready = aw_grant[i] && mst_rsp_i.aw_ready && !w_full;
      slv_rsps_o[i].w_ready  = (!w_empty && (SelW'(i) == w_sel)) && mst_rsp_i.w_ready;
      slv_rsps_o[i].ar_ready = ar_grant[i] && mst_rsp_i.ar_ready;
      slv_rsps_o[i].b        = b_bits[$bits(slv_rsps_o[i].b)-1:0];
      slv_rsps_o[i].b_valid  = mst_rsp_i.b_valid && (SelW'(i) == b_sel);
      slv_rsps_o[i].r        = r_bits[$bits(slv_rsps_o[i].r)-1:0];
      slv_rsps_o[i].r_valid  = mst_rsp_i.r_valid && (SelW'(i) == r_sel);
    end
  end
endmodule
`default_nettype wire