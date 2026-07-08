// weft_axi_xbar.sv — full AXI crossbar: NoSlvPorts managers x NoMstPorts subordinates.
//
// Structure (all built from Weft-owned blocks):
//   per manager  : address decode (AW & AR) -> demux (NoMstPorts+1 targets) ->
//                  a private error slave on the extra target
//   per subordinate: an N-way mux that merges the matching demux output of every manager
//
// The mux prepends the source-manager index onto the AXI id, so subordinate-side
// id width MUST be SlvIdWidth + clog2(NoSlvPorts). Decode misses are routed to a
// per-manager error slave that returns DECERR. v1 demux policy (one active target
// per direction) applies; see weft_axi_demux.
`default_nettype none
module weft_axi_xbar import weft_axi_pkg::*; #(
  parameter int unsigned NoSlvPorts = 2,   // managers  (xbar slave  ports)
  parameter int unsigned NoMstPorts = 2,   // subordinates (xbar master ports)
  parameter int unsigned SlvIdWidth = 4,   // manager-side AXI id width
  parameter int unsigned NoRules    = NoMstPorts,
  parameter int unsigned MaxTxns    = 8,
  parameter type         rule_t     = weft_axi_pkg::xbar_rule_t,
  parameter rule_t [NoRules-1:0] AddrMap = '0,
  parameter type         slv_req_t  = logic,  // manager side (id = SlvIdWidth)
  parameter type         slv_rsp_t  = logic,
  parameter type         mst_req_t  = logic,  // subordinate side (id = SlvIdWidth + clog2(NoSlvPorts))
  parameter type         mst_rsp_t  = logic
) (
  input  wire      clk_i,
  input  wire      rst_ni,
  input  slv_req_t slv_reqs_i [NoSlvPorts],
  output slv_rsp_t slv_rsps_o [NoSlvPorts],
  output mst_req_t mst_reqs_o [NoMstPorts],
  input  mst_rsp_t mst_rsps_i [NoMstPorts]
);
  localparam int unsigned NoDemuxPorts = NoMstPorts + 1;         // + private err target
  localparam int unsigned ErrIdx       = NoMstPorts;             // index of the err target
  localparam int unsigned DSelW        = (NoDemuxPorts>1)?$clog2(NoDemuxPorts):1;
  localparam int unsigned DecIdxW      = (NoMstPorts>1)?$clog2(NoMstPorts):1;

  // inner fabric: demux_req[m][t] = manager m's stream steered to target t (t<NoMstPorts
  // is a subordinate, t==ErrIdx is the error slave). Manager-side id width throughout.
  slv_req_t demux_req [NoSlvPorts][NoDemuxPorts];
  slv_rsp_t demux_rsp [NoSlvPorts][NoDemuxPorts];

  // ---- per manager: decode -> demux -> private error slave ----
  for (genvar m = 0; m < NoSlvPorts; m++) begin : g_slv
    logic [DecIdxW-1:0] aw_idx, ar_idx;
    logic               aw_err, ar_err;
    logic [DSelW-1:0]   aw_sel, ar_sel;

    weft_addr_decode #(.NoIndices(NoMstPorts), .NoRules(NoRules),
                       .addr_t(logic [63:0]), .rule_t(rule_t)) i_aw_dec (
      .addr_i(64'(slv_reqs_i[m].aw.addr)), .rules_i(AddrMap),
      .idx_o(aw_idx), .dec_valid_o(), .dec_error_o(aw_err));
    weft_addr_decode #(.NoIndices(NoMstPorts), .NoRules(NoRules),
                       .addr_t(logic [63:0]), .rule_t(rule_t)) i_ar_dec (
      .addr_i(64'(slv_reqs_i[m].ar.addr)), .rules_i(AddrMap),
      .idx_o(ar_idx), .dec_valid_o(), .dec_error_o(ar_err));

    assign aw_sel = aw_err ? DSelW'(ErrIdx) : DSelW'(aw_idx);
    assign ar_sel = ar_err ? DSelW'(ErrIdx) : DSelW'(ar_idx);

    weft_axi_demux #(.NoMstPorts(NoDemuxPorts), .MaxTxns(MaxTxns),
                     .req_t(slv_req_t), .rsp_t(slv_rsp_t)) i_demux (
      .clk_i(clk_i), .rst_ni(rst_ni),
      .slv_aw_select_i(aw_sel), .slv_ar_select_i(ar_sel),
      .slv_req_i(slv_reqs_i[m]), .slv_rsp_o(slv_rsps_o[m]),
      .mst_reqs_o(demux_req[m]), .mst_rsps_i(demux_rsp[m]));

    weft_axi_err_slv #(.req_t(slv_req_t), .rsp_t(slv_rsp_t), .Resp(RESP_DECERR)) i_err (
      .clk_i(clk_i), .rst_ni(rst_ni),
      .slv_req_i(demux_req[m][ErrIdx]), .slv_rsp_o(demux_rsp[m][ErrIdx]));
  end

  // ---- per subordinate: gather every manager's stream for this target, then mux ----
  for (genvar s = 0; s < NoMstPorts; s++) begin : g_mst
    slv_req_t mux_req [NoSlvPorts];
    slv_rsp_t mux_rsp [NoSlvPorts];
    for (genvar m = 0; m < NoSlvPorts; m++) begin : g_gather
      assign mux_req[m]          = demux_req[m][s];
      assign demux_rsp[m][s]     = mux_rsp[m];
    end
    weft_axi_mux #(.NoSlvPorts(NoSlvPorts), .SlvIdWidth(SlvIdWidth), .MaxWTxns(MaxTxns),
                   .slv_req_t(slv_req_t), .slv_rsp_t(slv_rsp_t),
                   .mst_req_t(mst_req_t), .mst_rsp_t(mst_rsp_t)) i_mux (
      .clk_i(clk_i), .rst_ni(rst_ni),
      .slv_reqs_i(mux_req), .slv_rsps_o(mux_rsp),
      .mst_req_o(mst_reqs_o[s]), .mst_rsp_i(mst_rsps_i[s]));
  end
endmodule
`default_nettype wire