// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_weft_axi_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_weft_axi_pkg* __PVT__weft_axi_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(s_axi_awid,3,0);
        VL_IN8(s_axi_awlen,7,0);
        VL_IN8(s_axi_awsize,2,0);
        VL_IN8(s_axi_awburst,1,0);
        VL_IN8(s_axi_awlock,0,0);
        VL_IN8(s_axi_awcache,3,0);
        VL_IN8(s_axi_awprot,2,0);
        VL_IN8(s_axi_awvalid,0,0);
        VL_OUT8(s_axi_awready,0,0);
        VL_IN8(s_axi_wstrb,3,0);
        VL_IN8(s_axi_wlast,0,0);
        VL_IN8(s_axi_wvalid,0,0);
        VL_OUT8(s_axi_wready,0,0);
        VL_OUT8(s_axi_bid,3,0);
        VL_OUT8(s_axi_bresp,1,0);
        VL_OUT8(s_axi_bvalid,0,0);
        VL_IN8(s_axi_bready,0,0);
        VL_IN8(s_axi_arid,3,0);
        VL_IN8(s_axi_arlen,7,0);
        VL_IN8(s_axi_arsize,2,0);
        VL_IN8(s_axi_arburst,1,0);
        VL_IN8(s_axi_arlock,0,0);
        VL_IN8(s_axi_arcache,3,0);
        VL_IN8(s_axi_arprot,2,0);
        VL_IN8(s_axi_arvalid,0,0);
        VL_OUT8(s_axi_arready,0,0);
        VL_OUT8(s_axi_rid,3,0);
        VL_OUT8(s_axi_rresp,1,0);
        VL_OUT8(s_axi_rlast,0,0);
        VL_OUT8(s_axi_rvalid,0,0);
        VL_IN8(s_axi_rready,0,0);
        VL_OUT8(m0_axi_awid,3,0);
        VL_OUT8(m0_axi_awlen,7,0);
        VL_OUT8(m0_axi_awsize,2,0);
        VL_OUT8(m0_axi_awburst,1,0);
        VL_OUT8(m0_axi_awlock,0,0);
        VL_OUT8(m0_axi_awcache,3,0);
        VL_OUT8(m0_axi_awprot,2,0);
        VL_OUT8(m0_axi_awvalid,0,0);
        VL_IN8(m0_axi_awready,0,0);
        VL_OUT8(m0_axi_wstrb,3,0);
        VL_OUT8(m0_axi_wlast,0,0);
        VL_OUT8(m0_axi_wvalid,0,0);
        VL_IN8(m0_axi_wready,0,0);
        VL_IN8(m0_axi_bid,3,0);
        VL_IN8(m0_axi_bresp,1,0);
        VL_IN8(m0_axi_bvalid,0,0);
        VL_OUT8(m0_axi_bready,0,0);
        VL_OUT8(m0_axi_arid,3,0);
        VL_OUT8(m0_axi_arlen,7,0);
        VL_OUT8(m0_axi_arsize,2,0);
        VL_OUT8(m0_axi_arburst,1,0);
        VL_OUT8(m0_axi_arlock,0,0);
        VL_OUT8(m0_axi_arcache,3,0);
        VL_OUT8(m0_axi_arprot,2,0);
        VL_OUT8(m0_axi_arvalid,0,0);
        VL_IN8(m0_axi_arready,0,0);
        VL_IN8(m0_axi_rid,3,0);
        VL_IN8(m0_axi_rresp,1,0);
        VL_IN8(m0_axi_rlast,0,0);
        VL_IN8(m0_axi_rvalid,0,0);
        VL_OUT8(m0_axi_rready,0,0);
    };
    struct {
        VL_OUT8(m1_axi_awid,3,0);
        VL_OUT8(m1_axi_awlen,7,0);
        VL_OUT8(m1_axi_awsize,2,0);
        VL_OUT8(m1_axi_awburst,1,0);
        VL_OUT8(m1_axi_awlock,0,0);
        VL_OUT8(m1_axi_awcache,3,0);
        VL_OUT8(m1_axi_awprot,2,0);
        VL_OUT8(m1_axi_awvalid,0,0);
        VL_IN8(m1_axi_awready,0,0);
        VL_OUT8(m1_axi_wstrb,3,0);
        VL_OUT8(m1_axi_wlast,0,0);
        VL_OUT8(m1_axi_wvalid,0,0);
        VL_IN8(m1_axi_wready,0,0);
        VL_IN8(m1_axi_bid,3,0);
        VL_IN8(m1_axi_bresp,1,0);
        VL_IN8(m1_axi_bvalid,0,0);
        VL_OUT8(m1_axi_bready,0,0);
        VL_OUT8(m1_axi_arid,3,0);
        VL_OUT8(m1_axi_arlen,7,0);
        VL_OUT8(m1_axi_arsize,2,0);
        VL_OUT8(m1_axi_arburst,1,0);
        VL_OUT8(m1_axi_arlock,0,0);
        VL_OUT8(m1_axi_arcache,3,0);
        VL_OUT8(m1_axi_arprot,2,0);
        VL_OUT8(m1_axi_arvalid,0,0);
        VL_IN8(m1_axi_arready,0,0);
        VL_IN8(m1_axi_rid,3,0);
        VL_IN8(m1_axi_rresp,1,0);
        VL_IN8(m1_axi_rlast,0,0);
        VL_IN8(m1_axi_rvalid,0,0);
        VL_OUT8(m1_axi_rready,0,0);
        CData/*0:0*/ weft_axi_demux_flat__DOT__clk_i;
        CData/*0:0*/ weft_axi_demux_flat__DOT__rst_ni;
        CData/*3:0*/ weft_axi_demux_flat__DOT__s_axi_awid;
        CData/*7:0*/ weft_axi_demux_flat__DOT__s_axi_awlen;
        CData/*2:0*/ weft_axi_demux_flat__DOT__s_axi_awsize;
        CData/*1:0*/ weft_axi_demux_flat__DOT__s_axi_awburst;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_awlock;
        CData/*3:0*/ weft_axi_demux_flat__DOT__s_axi_awcache;
        CData/*2:0*/ weft_axi_demux_flat__DOT__s_axi_awprot;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_awvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_awready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__s_axi_wstrb;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_wlast;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_wvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_wready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__s_axi_bid;
        CData/*1:0*/ weft_axi_demux_flat__DOT__s_axi_bresp;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_bvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_bready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__s_axi_arid;
        CData/*7:0*/ weft_axi_demux_flat__DOT__s_axi_arlen;
        CData/*2:0*/ weft_axi_demux_flat__DOT__s_axi_arsize;
        CData/*1:0*/ weft_axi_demux_flat__DOT__s_axi_arburst;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_arlock;
        CData/*3:0*/ weft_axi_demux_flat__DOT__s_axi_arcache;
        CData/*2:0*/ weft_axi_demux_flat__DOT__s_axi_arprot;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_arvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_arready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__s_axi_rid;
        CData/*1:0*/ weft_axi_demux_flat__DOT__s_axi_rresp;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_rlast;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_rvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__s_axi_rready;
    };
    struct {
        CData/*3:0*/ weft_axi_demux_flat__DOT__m0_axi_awid;
        CData/*7:0*/ weft_axi_demux_flat__DOT__m0_axi_awlen;
        CData/*2:0*/ weft_axi_demux_flat__DOT__m0_axi_awsize;
        CData/*1:0*/ weft_axi_demux_flat__DOT__m0_axi_awburst;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_awlock;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m0_axi_awcache;
        CData/*2:0*/ weft_axi_demux_flat__DOT__m0_axi_awprot;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_awvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_awready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m0_axi_wstrb;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_wlast;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_wvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_wready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m0_axi_bid;
        CData/*1:0*/ weft_axi_demux_flat__DOT__m0_axi_bresp;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_bvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_bready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m0_axi_arid;
        CData/*7:0*/ weft_axi_demux_flat__DOT__m0_axi_arlen;
        CData/*2:0*/ weft_axi_demux_flat__DOT__m0_axi_arsize;
        CData/*1:0*/ weft_axi_demux_flat__DOT__m0_axi_arburst;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_arlock;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m0_axi_arcache;
        CData/*2:0*/ weft_axi_demux_flat__DOT__m0_axi_arprot;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_arvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_arready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m0_axi_rid;
        CData/*1:0*/ weft_axi_demux_flat__DOT__m0_axi_rresp;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_rlast;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_rvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m0_axi_rready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m1_axi_awid;
        CData/*7:0*/ weft_axi_demux_flat__DOT__m1_axi_awlen;
        CData/*2:0*/ weft_axi_demux_flat__DOT__m1_axi_awsize;
        CData/*1:0*/ weft_axi_demux_flat__DOT__m1_axi_awburst;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_awlock;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m1_axi_awcache;
        CData/*2:0*/ weft_axi_demux_flat__DOT__m1_axi_awprot;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_awvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_awready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m1_axi_wstrb;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_wlast;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_wvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_wready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m1_axi_bid;
        CData/*1:0*/ weft_axi_demux_flat__DOT__m1_axi_bresp;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_bvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_bready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m1_axi_arid;
        CData/*7:0*/ weft_axi_demux_flat__DOT__m1_axi_arlen;
        CData/*2:0*/ weft_axi_demux_flat__DOT__m1_axi_arsize;
        CData/*1:0*/ weft_axi_demux_flat__DOT__m1_axi_arburst;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_arlock;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m1_axi_arcache;
        CData/*2:0*/ weft_axi_demux_flat__DOT__m1_axi_arprot;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_arvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_arready;
        CData/*3:0*/ weft_axi_demux_flat__DOT__m1_axi_rid;
        CData/*1:0*/ weft_axi_demux_flat__DOT__m1_axi_rresp;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_rlast;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_rvalid;
        CData/*0:0*/ weft_axi_demux_flat__DOT__m1_axi_rready;
        CData/*0:0*/ weft_axi_demux_flat__DOT__aw_sel;
        CData/*0:0*/ weft_axi_demux_flat__DOT__ar_sel;
    };
    struct {
        CData/*0:0*/ weft_axi_demux_flat__DOT__aw_v;
        CData/*0:0*/ weft_axi_demux_flat__DOT__ar_v;
        CData/*0:0*/ weft_axi_demux_flat__DOT__aw_e;
        CData/*0:0*/ weft_axi_demux_flat__DOT__ar_e;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__idx_o;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__dec_valid_o;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__dec_error_o;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__idx_o;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__dec_valid_o;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__dec_error_o;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__clk_i;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__rst_ni;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__slv_aw_select_i;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__slv_ar_select_i;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q;
        CData/*3:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q;
        CData/*3:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__aw_hs;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__b_hs;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__ar_hs;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__r_hs;
        CData/*0:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__r_last_hs;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(s_axi_awaddr,31,0);
        VL_IN(s_axi_wdata,31,0);
        VL_IN(s_axi_araddr,31,0);
        VL_OUT(s_axi_rdata,31,0);
        VL_OUT(m0_axi_awaddr,31,0);
        VL_OUT(m0_axi_wdata,31,0);
        VL_OUT(m0_axi_araddr,31,0);
        VL_IN(m0_axi_rdata,31,0);
        VL_OUT(m1_axi_awaddr,31,0);
        VL_OUT(m1_axi_wdata,31,0);
        VL_OUT(m1_axi_araddr,31,0);
        VL_IN(m1_axi_rdata,31,0);
        IData/*31:0*/ weft_axi_demux_flat__DOT__s_axi_awaddr;
        IData/*31:0*/ weft_axi_demux_flat__DOT__s_axi_wdata;
        IData/*31:0*/ weft_axi_demux_flat__DOT__s_axi_araddr;
        IData/*31:0*/ weft_axi_demux_flat__DOT__s_axi_rdata;
        IData/*31:0*/ weft_axi_demux_flat__DOT__m0_axi_awaddr;
        IData/*31:0*/ weft_axi_demux_flat__DOT__m0_axi_wdata;
        IData/*31:0*/ weft_axi_demux_flat__DOT__m0_axi_araddr;
        IData/*31:0*/ weft_axi_demux_flat__DOT__m0_axi_rdata;
        IData/*31:0*/ weft_axi_demux_flat__DOT__m1_axi_awaddr;
        IData/*31:0*/ weft_axi_demux_flat__DOT__m1_axi_wdata;
        IData/*31:0*/ weft_axi_demux_flat__DOT__m1_axi_araddr;
        IData/*31:0*/ weft_axi_demux_flat__DOT__m1_axi_rdata;
        IData/*31:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__addr_i;
        IData/*31:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__unnamedblk1__DOT__r;
        IData/*31:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__addr_i;
        IData/*31:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__unnamedblk1__DOT__r;
        IData/*31:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__unnamedblk1__DOT__m;
        IData/*31:0*/ __VactIterCount;
        VlWide<6>/*180:0*/ weft_axi_demux_flat__DOT__slv_req;
        QData/*51:0*/ weft_axi_demux_flat__DOT__slv_rsp;
        VlWide<10>/*319:0*/ weft_axi_demux_flat__DOT__rules;
        VlWide<10>/*319:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i;
    };
    struct {
        QData/*63:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__addr64;
        VlWide<10>/*319:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i;
        QData/*63:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__addr64;
        VlWide<6>/*180:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__slv_req_i;
        QData/*51:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o;
        VlUnpacked<VlWide<6>/*180:0*/, 2> weft_axi_demux_flat__DOT__mreq;
        VlUnpacked<QData/*51:0*/, 2> weft_axi_demux_flat__DOT__mrsp;
        VlUnpacked<QData/*51:0*/, 2> weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i;
        VlUnpacked<VlWide<6>/*180:0*/, 2> weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o;
        VlUnpacked<QData/*51:0*/, 2> weft_axi_demux_flat__DOT__i_demux__DOT__mst_rsps_i;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__AW = 0x00000020U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__DW = 0x00000020U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__IW = 4U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__N = 2U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__NoIndices = 2U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__NoRules = 2U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_awdec__DOT__IdxW = 1U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__NoIndices = 2U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__NoRules = 2U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_ardec__DOT__IdxW = 1U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__NoMstPorts = 2U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__MaxTxns = 8U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__SelW = 1U;
    static constexpr IData/*31:0*/ weft_axi_demux_flat__DOT__i_demux__DOT__CntW = 4U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
