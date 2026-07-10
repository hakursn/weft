// warp_axi_flat.sv — flat-port harness for warp_axi (two AXI4 masters, id=4).
// i_axi_* = instruction fetch master; d_axi_* = load/store master. For IP-XACT
// packaging and cocotbext-axi. Internals use Weft AXI structs.
`include "weft_axi_typedef.svh"
`default_nettype none
module warp_axi_flat import weft_axi_pkg::*; #(
  parameter logic [31:0] RESET_ADDR = 32'h8000_0000
) (
  input  wire clk_i, rst_ni,
  // instruction master
  output wire [3:0] i_axi_awid, output wire [31:0] i_axi_awaddr, output wire [7:0] i_axi_awlen,
  output wire [2:0] i_axi_awsize, output wire [1:0] i_axi_awburst, output wire i_axi_awlock,
  output wire [3:0] i_axi_awcache, output wire [2:0] i_axi_awprot, output wire i_axi_awvalid, input wire i_axi_awready,
  output wire [31:0] i_axi_wdata, output wire [3:0] i_axi_wstrb, output wire i_axi_wlast, output wire i_axi_wvalid, input wire i_axi_wready,
  input wire [3:0] i_axi_bid, input wire [1:0] i_axi_bresp, input wire i_axi_bvalid, output wire i_axi_bready,
  output wire [3:0] i_axi_arid, output wire [31:0] i_axi_araddr, output wire [7:0] i_axi_arlen,
  output wire [2:0] i_axi_arsize, output wire [1:0] i_axi_arburst, output wire i_axi_arlock,
  output wire [3:0] i_axi_arcache, output wire [2:0] i_axi_arprot, output wire i_axi_arvalid, input wire i_axi_arready,
  input wire [3:0] i_axi_rid, input wire [31:0] i_axi_rdata, input wire [1:0] i_axi_rresp, input wire i_axi_rlast, input wire i_axi_rvalid, output wire i_axi_rready,
  // data master
  output wire [3:0] d_axi_awid, output wire [31:0] d_axi_awaddr, output wire [7:0] d_axi_awlen,
  output wire [2:0] d_axi_awsize, output wire [1:0] d_axi_awburst, output wire d_axi_awlock,
  output wire [3:0] d_axi_awcache, output wire [2:0] d_axi_awprot, output wire d_axi_awvalid, input wire d_axi_awready,
  output wire [31:0] d_axi_wdata, output wire [3:0] d_axi_wstrb, output wire d_axi_wlast, output wire d_axi_wvalid, input wire d_axi_wready,
  input wire [3:0] d_axi_bid, input wire [1:0] d_axi_bresp, input wire d_axi_bvalid, output wire d_axi_bready,
  output wire [3:0] d_axi_arid, output wire [31:0] d_axi_araddr, output wire [7:0] d_axi_arlen,
  output wire [2:0] d_axi_arsize, output wire [1:0] d_axi_arburst, output wire d_axi_arlock,
  output wire [3:0] d_axi_arcache, output wire [2:0] d_axi_arprot, output wire d_axi_arvalid, input wire d_axi_arready,
  input wire [3:0] d_axi_rid, input wire [31:0] d_axi_rdata, input wire [1:0] d_axi_rresp, input wire d_axi_rlast, input wire d_axi_rvalid, output wire d_axi_rready
);
  typedef logic [31:0] addr_t; typedef logic [3:0] id_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(a, addr_t, id_t, data_t, strb_t, user_t)
  a_req_t i_req, d_req; a_rsp_t i_rsp, d_rsp;

  warp_axi #(.req_t(a_req_t), .rsp_t(a_rsp_t), .RESET_ADDR(RESET_ADDR)) u (
    .clk_i, .rst_ni, .i_req_o(i_req), .i_rsp_i(i_rsp), .d_req_o(d_req), .d_rsp_i(d_rsp),
    .retire_valid_o(), .retire_pc_o(), .retire_instr_o(), .retire_rd_o(), .retire_rd_wdata_o(),
    .retire_mem_valid_o(), .retire_mem_addr_o(), .retire_mem_wstrb_o(), .retire_mem_wdata_o());

  // i master: struct -> flat out, flat in -> struct
  assign {i_axi_awid,i_axi_awaddr,i_axi_awlen,i_axi_awsize,i_axi_awburst,i_axi_awlock,i_axi_awcache,i_axi_awprot,i_axi_awvalid} =
         {i_req.aw.id,i_req.aw.addr,i_req.aw.len,i_req.aw.size,i_req.aw.burst,i_req.aw.lock,i_req.aw.cache,i_req.aw.prot,i_req.aw_valid};
  assign {i_axi_wdata,i_axi_wstrb,i_axi_wlast,i_axi_wvalid,i_axi_bready} = {i_req.w.data,i_req.w.strb,i_req.w.last,i_req.w_valid,i_req.b_ready};
  assign {i_axi_arid,i_axi_araddr,i_axi_arlen,i_axi_arsize,i_axi_arburst,i_axi_arlock,i_axi_arcache,i_axi_arprot,i_axi_arvalid,i_axi_rready} =
         {i_req.ar.id,i_req.ar.addr,i_req.ar.len,i_req.ar.size,i_req.ar.burst,i_req.ar.lock,i_req.ar.cache,i_req.ar.prot,i_req.ar_valid,i_req.r_ready};
  always_comb begin
    i_rsp='0; i_rsp.aw_ready=i_axi_awready; i_rsp.w_ready=i_axi_wready;
    i_rsp.b.id=i_axi_bid; i_rsp.b.resp=i_axi_bresp; i_rsp.b_valid=i_axi_bvalid; i_rsp.ar_ready=i_axi_arready;
    i_rsp.r.id=i_axi_rid; i_rsp.r.data=i_axi_rdata; i_rsp.r.resp=i_axi_rresp; i_rsp.r.last=i_axi_rlast; i_rsp.r_valid=i_axi_rvalid;
  end
  // d master
  assign {d_axi_awid,d_axi_awaddr,d_axi_awlen,d_axi_awsize,d_axi_awburst,d_axi_awlock,d_axi_awcache,d_axi_awprot,d_axi_awvalid} =
         {d_req.aw.id,d_req.aw.addr,d_req.aw.len,d_req.aw.size,d_req.aw.burst,d_req.aw.lock,d_req.aw.cache,d_req.aw.prot,d_req.aw_valid};
  assign {d_axi_wdata,d_axi_wstrb,d_axi_wlast,d_axi_wvalid,d_axi_bready} = {d_req.w.data,d_req.w.strb,d_req.w.last,d_req.w_valid,d_req.b_ready};
  assign {d_axi_arid,d_axi_araddr,d_axi_arlen,d_axi_arsize,d_axi_arburst,d_axi_arlock,d_axi_arcache,d_axi_arprot,d_axi_arvalid,d_axi_rready} =
         {d_req.ar.id,d_req.ar.addr,d_req.ar.len,d_req.ar.size,d_req.ar.burst,d_req.ar.lock,d_req.ar.cache,d_req.ar.prot,d_req.ar_valid,d_req.r_ready};
  always_comb begin
    d_rsp='0; d_rsp.aw_ready=d_axi_awready; d_rsp.w_ready=d_axi_wready;
    d_rsp.b.id=d_axi_bid; d_rsp.b.resp=d_axi_bresp; d_rsp.b_valid=d_axi_bvalid; d_rsp.ar_ready=d_axi_arready;
    d_rsp.r.id=d_axi_rid; d_rsp.r.data=d_axi_rdata; d_rsp.r.resp=d_axi_rresp; d_rsp.r.last=d_axi_rlast; d_rsp.r_valid=d_axi_rvalid;
  end
endmodule
`default_nettype wire