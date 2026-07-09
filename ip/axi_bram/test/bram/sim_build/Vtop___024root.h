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
        CData/*0:0*/ weft_axi_bram_flat__DOT__clk_i;
        CData/*0:0*/ weft_axi_bram_flat__DOT__rst_ni;
        CData/*3:0*/ weft_axi_bram_flat__DOT__s_axi_awid;
        CData/*7:0*/ weft_axi_bram_flat__DOT__s_axi_awlen;
        CData/*2:0*/ weft_axi_bram_flat__DOT__s_axi_awsize;
        CData/*1:0*/ weft_axi_bram_flat__DOT__s_axi_awburst;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_awlock;
        CData/*3:0*/ weft_axi_bram_flat__DOT__s_axi_awcache;
        CData/*2:0*/ weft_axi_bram_flat__DOT__s_axi_awprot;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_awvalid;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_awready;
        CData/*3:0*/ weft_axi_bram_flat__DOT__s_axi_wstrb;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_wlast;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_wvalid;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_wready;
        CData/*3:0*/ weft_axi_bram_flat__DOT__s_axi_bid;
        CData/*1:0*/ weft_axi_bram_flat__DOT__s_axi_bresp;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_bvalid;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_bready;
        CData/*3:0*/ weft_axi_bram_flat__DOT__s_axi_arid;
        CData/*7:0*/ weft_axi_bram_flat__DOT__s_axi_arlen;
        CData/*2:0*/ weft_axi_bram_flat__DOT__s_axi_arsize;
        CData/*1:0*/ weft_axi_bram_flat__DOT__s_axi_arburst;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_arlock;
        CData/*3:0*/ weft_axi_bram_flat__DOT__s_axi_arcache;
        CData/*2:0*/ weft_axi_bram_flat__DOT__s_axi_arprot;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_arvalid;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_arready;
        CData/*3:0*/ weft_axi_bram_flat__DOT__s_axi_rid;
        CData/*1:0*/ weft_axi_bram_flat__DOT__s_axi_rresp;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_rlast;
    };
    struct {
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_rvalid;
        CData/*0:0*/ weft_axi_bram_flat__DOT__s_axi_rready;
        CData/*0:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__clk_i;
        CData/*0:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__rst_ni;
        CData/*1:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__w_q;
        CData/*3:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__wid_q;
        CData/*0:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__r_q;
        CData/*3:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__rid_q;
        CData/*7:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__rlen_q;
        CData/*7:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__rcnt_q;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q;
        SData/*9:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__raddr_q;
        VL_IN(s_axi_awaddr,31,0);
        VL_IN(s_axi_wdata,31,0);
        VL_IN(s_axi_araddr,31,0);
        VL_OUT(s_axi_rdata,31,0);
        IData/*31:0*/ weft_axi_bram_flat__DOT__s_axi_awaddr;
        IData/*31:0*/ weft_axi_bram_flat__DOT__s_axi_wdata;
        IData/*31:0*/ weft_axi_bram_flat__DOT__s_axi_araddr;
        IData/*31:0*/ weft_axi_bram_flat__DOT__s_axi_rdata;
        IData/*31:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__unnamedblk1__DOT__b;
        IData/*31:0*/ __VactIterCount;
        VlWide<6>/*180:0*/ weft_axi_bram_flat__DOT__rq;
        QData/*51:0*/ weft_axi_bram_flat__DOT__rs;
        VlWide<6>/*180:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__slv_req_i;
        QData/*51:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o;
        VlUnpacked<IData/*31:0*/, 1024> weft_axi_bram_flat__DOT__i_bram__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ weft_axi_bram_flat__DOT__MemWords = 0x00000400U;
    static constexpr IData/*31:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__MemWords = 0x00000400U;
    static constexpr IData/*31:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__DataW = 0x00000020U;
    static constexpr IData/*31:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__StrbW = 4U;
    static constexpr IData/*31:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__AddrLsb = 2U;
    static constexpr IData/*31:0*/ weft_axi_bram_flat__DOT__i_bram__DOT__IdxW = 0x0000000aU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
