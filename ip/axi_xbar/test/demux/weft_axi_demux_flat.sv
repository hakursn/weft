// Flat-port harness for weft_axi_demux: two address regions -> two master ports.
// Address decoders derive the AW/AR selects; cocotbext-axi drives s_axi and two
// AxiRams sit on m0_axi / m1_axi.
`include "weft_axi_typedef.svh"
`default_nettype none
module weft_axi_demux_flat #(
  parameter int AW=32, parameter int DW=32, parameter int IW=4
) (
  input  wire clk_i, rst_ni,
  // s_axi subordinate side (AxiMaster)
  input  wire [IW-1:0] s_axi_awid, input wire [AW-1:0] s_axi_awaddr, input wire [7:0] s_axi_awlen,
  input  wire [2:0] s_axi_awsize, input wire [1:0] s_axi_awburst, input wire s_axi_awlock,
  input  wire [3:0] s_axi_awcache, input wire [2:0] s_axi_awprot, input wire s_axi_awvalid, output wire s_axi_awready,
  input  wire [DW-1:0] s_axi_wdata, input wire [DW/8-1:0] s_axi_wstrb, input wire s_axi_wlast, input wire s_axi_wvalid, output wire s_axi_wready,
  output wire [IW-1:0] s_axi_bid, output wire [1:0] s_axi_bresp, output wire s_axi_bvalid, input wire s_axi_bready,
  input  wire [IW-1:0] s_axi_arid, input wire [AW-1:0] s_axi_araddr, input wire [7:0] s_axi_arlen,
  input  wire [2:0] s_axi_arsize, input wire [1:0] s_axi_arburst, input wire s_axi_arlock,
  input  wire [3:0] s_axi_arcache, input wire [2:0] s_axi_arprot, input wire s_axi_arvalid, output wire s_axi_arready,
  output wire [IW-1:0] s_axi_rid, output wire [DW-1:0] s_axi_rdata, output wire [1:0] s_axi_rresp, output wire s_axi_rlast, output wire s_axi_rvalid, input wire s_axi_rready,
  // m0_axi / m1_axi manager sides (AxiRam)
  output wire [IW-1:0] m0_axi_awid, output wire [AW-1:0] m0_axi_awaddr, output wire [7:0] m0_axi_awlen, output wire [2:0] m0_axi_awsize, output wire [1:0] m0_axi_awburst, output wire m0_axi_awlock, output wire [3:0] m0_axi_awcache, output wire [2:0] m0_axi_awprot, output wire m0_axi_awvalid, input wire m0_axi_awready,
  output wire [DW-1:0] m0_axi_wdata, output wire [DW/8-1:0] m0_axi_wstrb, output wire m0_axi_wlast, output wire m0_axi_wvalid, input wire m0_axi_wready,
  input  wire [IW-1:0] m0_axi_bid, input wire [1:0] m0_axi_bresp, input wire m0_axi_bvalid, output wire m0_axi_bready,
  output wire [IW-1:0] m0_axi_arid, output wire [AW-1:0] m0_axi_araddr, output wire [7:0] m0_axi_arlen, output wire [2:0] m0_axi_arsize, output wire [1:0] m0_axi_arburst, output wire m0_axi_arlock, output wire [3:0] m0_axi_arcache, output wire [2:0] m0_axi_arprot, output wire m0_axi_arvalid, input wire m0_axi_arready,
  input  wire [IW-1:0] m0_axi_rid, input wire [DW-1:0] m0_axi_rdata, input wire [1:0] m0_axi_rresp, input wire m0_axi_rlast, input wire m0_axi_rvalid, output wire m0_axi_rready,
  output wire [IW-1:0] m1_axi_awid, output wire [AW-1:0] m1_axi_awaddr, output wire [7:0] m1_axi_awlen, output wire [2:0] m1_axi_awsize, output wire [1:0] m1_axi_awburst, output wire m1_axi_awlock, output wire [3:0] m1_axi_awcache, output wire [2:0] m1_axi_awprot, output wire m1_axi_awvalid, input wire m1_axi_awready,
  output wire [DW-1:0] m1_axi_wdata, output wire [DW/8-1:0] m1_axi_wstrb, output wire m1_axi_wlast, output wire m1_axi_wvalid, input wire m1_axi_wready,
  input  wire [IW-1:0] m1_axi_bid, input wire [1:0] m1_axi_bresp, input wire m1_axi_bvalid, output wire m1_axi_bready,
  output wire [IW-1:0] m1_axi_arid, output wire [AW-1:0] m1_axi_araddr, output wire [7:0] m1_axi_arlen, output wire [2:0] m1_axi_arsize, output wire [1:0] m1_axi_arburst, output wire m1_axi_arlock, output wire [3:0] m1_axi_arcache, output wire [2:0] m1_axi_arprot, output wire m1_axi_arvalid, input wire m1_axi_arready,
  input  wire [IW-1:0] m1_axi_rid, input wire [DW-1:0] m1_axi_rdata, input wire [1:0] m1_axi_rresp, input wire m1_axi_rlast, input wire m1_axi_rvalid, output wire m1_axi_rready
);
  import weft_axi_pkg::*;
  localparam int N=2;
  typedef logic [AW-1:0] addr_t; typedef logic [IW-1:0] id_t;
  typedef logic [DW-1:0] data_t; typedef logic [DW/8-1:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(axi, addr_t, id_t, data_t, strb_t, user_t)

  axi_req_t slv_req; axi_rsp_t slv_rsp;
  axi_req_t mreq [N]; axi_rsp_t mrsp [N];

  // address map: [0x0000,0x1000)->port0, [0x1000,0x2000)->port1
  xbar_rule_t [1:0] rules;
  assign rules[0] = {32'd0, 64'h0000_0000, 64'h0000_1000};
  assign rules[1] = {32'd1, 64'h0000_1000, 64'h0000_2000};
  logic aw_sel, ar_sel; logic aw_v, ar_v, aw_e, ar_e;
  weft_addr_decode #(.NoIndices(N),.NoRules(2),.addr_t(addr_t),.rule_t(xbar_rule_t)) i_awdec (
    .addr_i(slv_req.aw.addr), .rules_i(rules), .idx_o(aw_sel), .dec_valid_o(aw_v), .dec_error_o(aw_e));
  weft_addr_decode #(.NoIndices(N),.NoRules(2),.addr_t(addr_t),.rule_t(xbar_rule_t)) i_ardec (
    .addr_i(slv_req.ar.addr), .rules_i(rules), .idx_o(ar_sel), .dec_valid_o(ar_v), .dec_error_o(ar_e));

  weft_axi_demux #(.NoMstPorts(N), .MaxTxns(8), .req_t(axi_req_t), .rsp_t(axi_rsp_t)) i_demux (
    .clk_i(clk_i), .rst_ni(rst_ni), .slv_aw_select_i(aw_sel), .slv_ar_select_i(ar_sel),
    .slv_req_i(slv_req), .slv_rsp_o(slv_rsp), .mst_reqs_o(mreq), .mst_rsps_i(mrsp));

  // pack s_axi -> slv_req
  always_comb begin
    slv_req = '0;
    slv_req.aw.id=s_axi_awid; slv_req.aw.addr=s_axi_awaddr; slv_req.aw.len=s_axi_awlen; slv_req.aw.size=s_axi_awsize;
    slv_req.aw.burst=s_axi_awburst; slv_req.aw.lock=s_axi_awlock; slv_req.aw.cache=s_axi_awcache; slv_req.aw.prot=s_axi_awprot; slv_req.aw_valid=s_axi_awvalid;
    slv_req.w.data=s_axi_wdata; slv_req.w.strb=s_axi_wstrb; slv_req.w.last=s_axi_wlast; slv_req.w_valid=s_axi_wvalid;
    slv_req.b_ready=s_axi_bready;
    slv_req.ar.id=s_axi_arid; slv_req.ar.addr=s_axi_araddr; slv_req.ar.len=s_axi_arlen; slv_req.ar.size=s_axi_arsize;
    slv_req.ar.burst=s_axi_arburst; slv_req.ar.lock=s_axi_arlock; slv_req.ar.cache=s_axi_arcache; slv_req.ar.prot=s_axi_arprot; slv_req.ar_valid=s_axi_arvalid;
    slv_req.r_ready=s_axi_rready;
  end
  assign s_axi_awready=slv_rsp.aw_ready; assign s_axi_wready=slv_rsp.w_ready;
  assign s_axi_bid=slv_rsp.b.id; assign s_axi_bresp=slv_rsp.b.resp; assign s_axi_bvalid=slv_rsp.b_valid;
  assign s_axi_arready=slv_rsp.ar_ready;
  assign s_axi_rid=slv_rsp.r.id; assign s_axi_rdata=slv_rsp.r.data; assign s_axi_rresp=slv_rsp.r.resp; assign s_axi_rlast=slv_rsp.r.last; assign s_axi_rvalid=slv_rsp.r_valid;

  // mreq[0] -> m0_axi, mrsp[0] <- m0_axi
  assign m0_axi_awid=mreq[0].aw.id; assign m0_axi_awaddr=mreq[0].aw.addr; assign m0_axi_awlen=mreq[0].aw.len; assign m0_axi_awsize=mreq[0].aw.size; assign m0_axi_awburst=mreq[0].aw.burst; assign m0_axi_awlock=mreq[0].aw.lock; assign m0_axi_awcache=mreq[0].aw.cache; assign m0_axi_awprot=mreq[0].aw.prot; assign m0_axi_awvalid=mreq[0].aw_valid;
  assign m0_axi_wdata=mreq[0].w.data; assign m0_axi_wstrb=mreq[0].w.strb; assign m0_axi_wlast=mreq[0].w.last; assign m0_axi_wvalid=mreq[0].w_valid;
  assign m0_axi_bready=mreq[0].b_ready;
  assign m0_axi_arid=mreq[0].ar.id; assign m0_axi_araddr=mreq[0].ar.addr; assign m0_axi_arlen=mreq[0].ar.len; assign m0_axi_arsize=mreq[0].ar.size; assign m0_axi_arburst=mreq[0].ar.burst; assign m0_axi_arlock=mreq[0].ar.lock; assign m0_axi_arcache=mreq[0].ar.cache; assign m0_axi_arprot=mreq[0].ar.prot; assign m0_axi_arvalid=mreq[0].ar_valid;
  assign m0_axi_rready=mreq[0].r_ready;
  always_comb begin
    mrsp[0]='0;
    mrsp[0].aw_ready=m0_axi_awready; mrsp[0].w_ready=m0_axi_wready;
    mrsp[0].b.id=m0_axi_bid; mrsp[0].b.resp=m0_axi_bresp; mrsp[0].b_valid=m0_axi_bvalid;
    mrsp[0].ar_ready=m0_axi_arready;
    mrsp[0].r.id=m0_axi_rid; mrsp[0].r.data=m0_axi_rdata; mrsp[0].r.resp=m0_axi_rresp; mrsp[0].r.last=m0_axi_rlast; mrsp[0].r_valid=m0_axi_rvalid;
  end
  // mreq[1] -> m1_axi, mrsp[1] <- m1_axi
  assign m1_axi_awid=mreq[1].aw.id; assign m1_axi_awaddr=mreq[1].aw.addr; assign m1_axi_awlen=mreq[1].aw.len; assign m1_axi_awsize=mreq[1].aw.size; assign m1_axi_awburst=mreq[1].aw.burst; assign m1_axi_awlock=mreq[1].aw.lock; assign m1_axi_awcache=mreq[1].aw.cache; assign m1_axi_awprot=mreq[1].aw.prot; assign m1_axi_awvalid=mreq[1].aw_valid;
  assign m1_axi_wdata=mreq[1].w.data; assign m1_axi_wstrb=mreq[1].w.strb; assign m1_axi_wlast=mreq[1].w.last; assign m1_axi_wvalid=mreq[1].w_valid;
  assign m1_axi_bready=mreq[1].b_ready;
  assign m1_axi_arid=mreq[1].ar.id; assign m1_axi_araddr=mreq[1].ar.addr; assign m1_axi_arlen=mreq[1].ar.len; assign m1_axi_arsize=mreq[1].ar.size; assign m1_axi_arburst=mreq[1].ar.burst; assign m1_axi_arlock=mreq[1].ar.lock; assign m1_axi_arcache=mreq[1].ar.cache; assign m1_axi_arprot=mreq[1].ar.prot; assign m1_axi_arvalid=mreq[1].ar_valid;
  assign m1_axi_rready=mreq[1].r_ready;
  always_comb begin
    mrsp[1]='0;
    mrsp[1].aw_ready=m1_axi_awready; mrsp[1].w_ready=m1_axi_wready;
    mrsp[1].b.id=m1_axi_bid; mrsp[1].b.resp=m1_axi_bresp; mrsp[1].b_valid=m1_axi_bvalid;
    mrsp[1].ar_ready=m1_axi_arready;
    mrsp[1].r.id=m1_axi_rid; mrsp[1].r.data=m1_axi_rdata; mrsp[1].r.resp=m1_axi_rresp; mrsp[1].r.last=m1_axi_rlast; mrsp[1].r_valid=m1_axi_rvalid;
  end
endmodule
`default_nettype wire