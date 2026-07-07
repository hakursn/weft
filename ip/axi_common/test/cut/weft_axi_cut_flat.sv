// Flat-port wrapper around weft_axi_cut so cocotbext-axi can bind standard AXI
// signal names. s_axi_* = subordinate side (AxiMaster drives); m_axi_* = manager
// side (AxiRam responds). Packs/unpacks the flat signals to/from the req/rsp structs.
`include "weft_axi_typedef.svh"
`default_nettype none
module weft_axi_cut_flat #(
  parameter int AW = 32, parameter int DW = 32, parameter int IW = 4
) (
  input  wire                 clk_i,
  input  wire                 rst_ni,
  // ---- s_axi : subordinate side (driven by AxiMaster) ----
  input  wire [IW-1:0]        s_axi_awid,  input wire [AW-1:0] s_axi_awaddr, input wire [7:0] s_axi_awlen,
  input  wire [2:0]           s_axi_awsize, input wire [1:0] s_axi_awburst, input wire s_axi_awlock,
  input  wire [3:0]           s_axi_awcache, input wire [2:0] s_axi_awprot, input wire s_axi_awvalid,
  output wire                 s_axi_awready,
  input  wire [DW-1:0]        s_axi_wdata, input wire [DW/8-1:0] s_axi_wstrb, input wire s_axi_wlast,
  input  wire                 s_axi_wvalid, output wire s_axi_wready,
  output wire [IW-1:0]        s_axi_bid,   output wire [1:0] s_axi_bresp, output wire s_axi_bvalid,
  input  wire                 s_axi_bready,
  input  wire [IW-1:0]        s_axi_arid,  input wire [AW-1:0] s_axi_araddr, input wire [7:0] s_axi_arlen,
  input  wire [2:0]           s_axi_arsize, input wire [1:0] s_axi_arburst, input wire s_axi_arlock,
  input  wire [3:0]           s_axi_arcache, input wire [2:0] s_axi_arprot, input wire s_axi_arvalid,
  output wire                 s_axi_arready,
  output wire [IW-1:0]        s_axi_rid,   output wire [DW-1:0] s_axi_rdata, output wire [1:0] s_axi_rresp,
  output wire                 s_axi_rlast, output wire s_axi_rvalid, input wire s_axi_rready,
  // ---- m_axi : manager side (connected to AxiRam) ----
  output wire [IW-1:0]        m_axi_awid,  output wire [AW-1:0] m_axi_awaddr, output wire [7:0] m_axi_awlen,
  output wire [2:0]           m_axi_awsize, output wire [1:0] m_axi_awburst, output wire m_axi_awlock,
  output wire [3:0]           m_axi_awcache, output wire [2:0] m_axi_awprot, output wire m_axi_awvalid,
  input  wire                 m_axi_awready,
  output wire [DW-1:0]        m_axi_wdata, output wire [DW/8-1:0] m_axi_wstrb, output wire m_axi_wlast,
  output wire                 m_axi_wvalid, input wire m_axi_wready,
  input  wire [IW-1:0]        m_axi_bid,   input wire [1:0] m_axi_bresp, input wire m_axi_bvalid,
  output wire                 m_axi_bready,
  output wire [IW-1:0]        m_axi_arid,  output wire [AW-1:0] m_axi_araddr, output wire [7:0] m_axi_arlen,
  output wire [2:0]           m_axi_arsize, output wire [1:0] m_axi_arburst, output wire m_axi_arlock,
  output wire [3:0]           m_axi_arcache, output wire [2:0] m_axi_arprot, output wire m_axi_arvalid,
  input  wire                 m_axi_arready,
  input  wire [IW-1:0]        m_axi_rid,   input wire [DW-1:0] m_axi_rdata, input wire [1:0] m_axi_rresp,
  input  wire                 m_axi_rlast, input wire m_axi_rvalid, output wire m_axi_rready
);
  import weft_axi_pkg::*;
  typedef logic [AW-1:0]   addr_t; typedef logic [IW-1:0]   id_t;
  typedef logic [DW-1:0]   data_t; typedef logic [DW/8-1:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(axi, addr_t, id_t, data_t, strb_t, user_t)

  axi_req_t slv_req, mst_req; axi_rsp_t slv_rsp, mst_rsp;

  // pack s_axi inputs -> slv_req
  always_comb begin
    slv_req = '0;
    slv_req.aw.id=s_axi_awid; slv_req.aw.addr=s_axi_awaddr; slv_req.aw.len=s_axi_awlen;
    slv_req.aw.size=s_axi_awsize; slv_req.aw.burst=s_axi_awburst; slv_req.aw.lock=s_axi_awlock;
    slv_req.aw.cache=s_axi_awcache; slv_req.aw.prot=s_axi_awprot; slv_req.aw_valid=s_axi_awvalid;
    slv_req.w.data=s_axi_wdata; slv_req.w.strb=s_axi_wstrb; slv_req.w.last=s_axi_wlast; slv_req.w_valid=s_axi_wvalid;
    slv_req.b_ready=s_axi_bready;
    slv_req.ar.id=s_axi_arid; slv_req.ar.addr=s_axi_araddr; slv_req.ar.len=s_axi_arlen;
    slv_req.ar.size=s_axi_arsize; slv_req.ar.burst=s_axi_arburst; slv_req.ar.lock=s_axi_arlock;
    slv_req.ar.cache=s_axi_arcache; slv_req.ar.prot=s_axi_arprot; slv_req.ar_valid=s_axi_arvalid;
    slv_req.r_ready=s_axi_rready;
  end
  // slv_rsp -> s_axi outputs
  assign s_axi_awready=slv_rsp.aw_ready; assign s_axi_wready=slv_rsp.w_ready;
  assign s_axi_bid=slv_rsp.b.id; assign s_axi_bresp=slv_rsp.b.resp; assign s_axi_bvalid=slv_rsp.b_valid;
  assign s_axi_arready=slv_rsp.ar_ready;
  assign s_axi_rid=slv_rsp.r.id; assign s_axi_rdata=slv_rsp.r.data; assign s_axi_rresp=slv_rsp.r.resp;
  assign s_axi_rlast=slv_rsp.r.last; assign s_axi_rvalid=slv_rsp.r_valid;

  // mst_req -> m_axi outputs
  assign m_axi_awid=mst_req.aw.id; assign m_axi_awaddr=mst_req.aw.addr; assign m_axi_awlen=mst_req.aw.len;
  assign m_axi_awsize=mst_req.aw.size; assign m_axi_awburst=mst_req.aw.burst; assign m_axi_awlock=mst_req.aw.lock;
  assign m_axi_awcache=mst_req.aw.cache; assign m_axi_awprot=mst_req.aw.prot; assign m_axi_awvalid=mst_req.aw_valid;
  assign m_axi_wdata=mst_req.w.data; assign m_axi_wstrb=mst_req.w.strb; assign m_axi_wlast=mst_req.w.last; assign m_axi_wvalid=mst_req.w_valid;
  assign m_axi_bready=mst_req.b_ready;
  assign m_axi_arid=mst_req.ar.id; assign m_axi_araddr=mst_req.ar.addr; assign m_axi_arlen=mst_req.ar.len;
  assign m_axi_arsize=mst_req.ar.size; assign m_axi_arburst=mst_req.ar.burst; assign m_axi_arlock=mst_req.ar.lock;
  assign m_axi_arcache=mst_req.ar.cache; assign m_axi_arprot=mst_req.ar.prot; assign m_axi_arvalid=mst_req.ar_valid;
  assign m_axi_rready=mst_req.r_ready;
  // pack m_axi inputs -> mst_rsp
  always_comb begin
    mst_rsp = '0;
    mst_rsp.aw_ready=m_axi_awready; mst_rsp.w_ready=m_axi_wready;
    mst_rsp.b.id=m_axi_bid; mst_rsp.b.resp=m_axi_bresp; mst_rsp.b_valid=m_axi_bvalid;
    mst_rsp.ar_ready=m_axi_arready;
    mst_rsp.r.id=m_axi_rid; mst_rsp.r.data=m_axi_rdata; mst_rsp.r.resp=m_axi_rresp;
    mst_rsp.r.last=m_axi_rlast; mst_rsp.r_valid=m_axi_rvalid;
  end

  weft_axi_cut #(
    .aw_chan_t(axi_aw_chan_t), .w_chan_t(axi_w_chan_t), .b_chan_t(axi_b_chan_t),
    .ar_chan_t(axi_ar_chan_t), .r_chan_t(axi_r_chan_t), .req_t(axi_req_t), .rsp_t(axi_rsp_t)
  ) i_cut (.clk_i(clk_i), .rst_ni(rst_ni),
    .slv_req_i(slv_req), .slv_rsp_o(slv_rsp), .mst_req_o(mst_req), .mst_rsp_i(mst_rsp));
endmodule
`default_nettype wire