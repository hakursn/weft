// weft_uart_flat.sv — flat-port harness for weft_uart (AXI4 subordinate, id=4) + tx.
`include "weft_axi_typedef.svh"
`default_nettype none
module weft_uart_flat import weft_axi_pkg::*; #(
  parameter int unsigned CLKS_PER_BIT = 868
) (
  input  wire clk_i, rst_ni,
  input wire [3:0] s_axi_awid, input wire [31:0] s_axi_awaddr, input wire [7:0] s_axi_awlen,
  input wire [2:0] s_axi_awsize, input wire [1:0] s_axi_awburst, input wire s_axi_awlock,
  input wire [3:0] s_axi_awcache, input wire [2:0] s_axi_awprot, input wire s_axi_awvalid, output wire s_axi_awready,
  input wire [31:0] s_axi_wdata, input wire [3:0] s_axi_wstrb, input wire s_axi_wlast, input wire s_axi_wvalid, output wire s_axi_wready,
  output wire [3:0] s_axi_bid, output wire [1:0] s_axi_bresp, output wire s_axi_bvalid, input wire s_axi_bready,
  input wire [3:0] s_axi_arid, input wire [31:0] s_axi_araddr, input wire [7:0] s_axi_arlen,
  input wire [2:0] s_axi_arsize, input wire [1:0] s_axi_arburst, input wire s_axi_arlock,
  input wire [3:0] s_axi_arcache, input wire [2:0] s_axi_arprot, input wire s_axi_arvalid, output wire s_axi_arready,
  output wire [3:0] s_axi_rid, output wire [31:0] s_axi_rdata, output wire [1:0] s_axi_rresp, output wire s_axi_rlast, output wire s_axi_rvalid, input wire s_axi_rready,
  output wire tx_o
);
  typedef logic [31:0] addr_t; typedef logic [3:0] id_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(a, addr_t, id_t, data_t, strb_t, user_t)
  a_req_t req; a_rsp_t rsp;
  always_comb begin
    req='0;
    req.aw.id=s_axi_awid; req.aw.addr=s_axi_awaddr; req.aw.len=s_axi_awlen; req.aw.size=s_axi_awsize; req.aw.burst=s_axi_awburst;
    req.aw.lock=s_axi_awlock; req.aw.cache=s_axi_awcache; req.aw.prot=s_axi_awprot; req.aw_valid=s_axi_awvalid;
    req.w.data=s_axi_wdata; req.w.strb=s_axi_wstrb; req.w.last=s_axi_wlast; req.w_valid=s_axi_wvalid; req.b_ready=s_axi_bready;
    req.ar.id=s_axi_arid; req.ar.addr=s_axi_araddr; req.ar.len=s_axi_arlen; req.ar.size=s_axi_arsize; req.ar.burst=s_axi_arburst;
    req.ar.lock=s_axi_arlock; req.ar.cache=s_axi_arcache; req.ar.prot=s_axi_arprot; req.ar_valid=s_axi_arvalid; req.r_ready=s_axi_rready;
  end
  assign {s_axi_awready,s_axi_wready,s_axi_bid,s_axi_bresp,s_axi_bvalid,s_axi_arready,s_axi_rid,s_axi_rdata,s_axi_rresp,s_axi_rlast,s_axi_rvalid} =
         {rsp.aw_ready,rsp.w_ready,rsp.b.id,rsp.b.resp,rsp.b_valid,rsp.ar_ready,rsp.r.id,rsp.r.data,rsp.r.resp,rsp.r.last,rsp.r_valid};
  weft_uart #(.req_t(a_req_t),.rsp_t(a_rsp_t),.CLKS_PER_BIT(CLKS_PER_BIT)) u(.clk_i,.rst_ni,.slv_req_i(req),.slv_rsp_o(rsp),.tx_o(tx_o));
endmodule
`default_nettype wire