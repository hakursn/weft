// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awid = vlSelfRef.s0_axi_awid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awaddr 
        = vlSelfRef.s0_axi_awaddr;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awlen 
        = vlSelfRef.s0_axi_awlen;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awsize 
        = vlSelfRef.s0_axi_awsize;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awburst 
        = vlSelfRef.s0_axi_awburst;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awlock 
        = vlSelfRef.s0_axi_awlock;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awcache 
        = vlSelfRef.s0_axi_awcache;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awprot 
        = vlSelfRef.s0_axi_awprot;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awvalid 
        = vlSelfRef.s0_axi_awvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_wdata 
        = vlSelfRef.s0_axi_wdata;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_wstrb 
        = vlSelfRef.s0_axi_wstrb;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_wlast 
        = vlSelfRef.s0_axi_wlast;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_wvalid 
        = vlSelfRef.s0_axi_wvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_bready 
        = vlSelfRef.s0_axi_bready;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arid = vlSelfRef.s0_axi_arid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_araddr 
        = vlSelfRef.s0_axi_araddr;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arlen 
        = vlSelfRef.s0_axi_arlen;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arsize 
        = vlSelfRef.s0_axi_arsize;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arburst 
        = vlSelfRef.s0_axi_arburst;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arlock 
        = vlSelfRef.s0_axi_arlock;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arcache 
        = vlSelfRef.s0_axi_arcache;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arprot 
        = vlSelfRef.s0_axi_arprot;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arvalid 
        = vlSelfRef.s0_axi_arvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rready 
        = vlSelfRef.s0_axi_rready;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awid = vlSelfRef.s1_axi_awid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awaddr 
        = vlSelfRef.s1_axi_awaddr;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awlen 
        = vlSelfRef.s1_axi_awlen;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awsize 
        = vlSelfRef.s1_axi_awsize;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awburst 
        = vlSelfRef.s1_axi_awburst;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awlock 
        = vlSelfRef.s1_axi_awlock;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awcache 
        = vlSelfRef.s1_axi_awcache;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awprot 
        = vlSelfRef.s1_axi_awprot;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awvalid 
        = vlSelfRef.s1_axi_awvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_wdata 
        = vlSelfRef.s1_axi_wdata;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_wstrb 
        = vlSelfRef.s1_axi_wstrb;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_wlast 
        = vlSelfRef.s1_axi_wlast;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_wvalid 
        = vlSelfRef.s1_axi_wvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_bready 
        = vlSelfRef.s1_axi_bready;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arid = vlSelfRef.s1_axi_arid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_araddr 
        = vlSelfRef.s1_axi_araddr;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arlen 
        = vlSelfRef.s1_axi_arlen;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arsize 
        = vlSelfRef.s1_axi_arsize;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arburst 
        = vlSelfRef.s1_axi_arburst;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arlock 
        = vlSelfRef.s1_axi_arlock;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arcache 
        = vlSelfRef.s1_axi_arcache;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arprot 
        = vlSelfRef.s1_axi_arprot;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arvalid 
        = vlSelfRef.s1_axi_arvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rready 
        = vlSelfRef.s1_axi_rready;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awready 
        = vlSelfRef.m_axi_awready;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_wready 
        = vlSelfRef.m_axi_wready;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_bid = vlSelfRef.m_axi_bid;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_bresp = vlSelfRef.m_axi_bresp;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_bvalid 
        = vlSelfRef.m_axi_bvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arready 
        = vlSelfRef.m_axi_arready;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_rid = vlSelfRef.m_axi_rid;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_rdata = vlSelfRef.m_axi_rdata;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_rresp = vlSelfRef.m_axi_rresp;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_rlast = vlSelfRef.m_axi_rlast;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_rvalid 
        = vlSelfRef.m_axi_rvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rdata_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem
        [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q];
    vlSelfRef.weft_axi_mux_flat__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.weft_axi_mux_flat__DOT__rst_ni = vlSelfRef.rst_ni;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem
        [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full 
        = (8U == (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty 
        = (0U == (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q));
    vlSelfRef.weft_axi_mux_flat__DOT__mrsp = 0ULL;
    vlSelfRef.weft_axi_mux_flat__DOT__mrsp = ((0x1fffffffffffULL 
                                               & vlSelfRef.weft_axi_mux_flat__DOT__mrsp) 
                                              | ((QData)((IData)(
                                                                 ((((IData)(vlSelfRef.m_axi_awready) 
                                                                    << 8U) 
                                                                   | ((IData)(vlSelfRef.m_axi_wready) 
                                                                      << 7U)) 
                                                                  | (((IData)(vlSelfRef.m_axi_bid) 
                                                                      << 2U) 
                                                                     | (IData)(vlSelfRef.m_axi_bresp))))) 
                                                 << 0x2dU));
    vlSelfRef.weft_axi_mux_flat__DOT__mrsp = ((0x3ff0000000001fULL 
                                               & vlSelfRef.weft_axi_mux_flat__DOT__mrsp) 
                                              | (((QData)((IData)(vlSelfRef.m_axi_bvalid)) 
                                                  << 0x2bU) 
                                                 | (((QData)((IData)(vlSelfRef.m_axi_arready)) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(vlSelfRef.m_axi_rid)) 
                                                        << 0x25U) 
                                                       | ((QData)((IData)(vlSelfRef.m_axi_rdata)) 
                                                          << 5U)))));
    vlSelfRef.weft_axi_mux_flat__DOT__mrsp = ((0x3fffffffffffe3ULL 
                                               & vlSelfRef.weft_axi_mux_flat__DOT__mrsp) 
                                              | ((QData)((IData)(
                                                                 (((IData)(vlSelfRef.m_axi_rresp) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.m_axi_rlast)))) 
                                                 << 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__mrsp = ((0x3ffffffffffffeULL 
                                               & vlSelfRef.weft_axi_mux_flat__DOT__mrsp) 
                                              | (IData)((IData)(vlSelfRef.m_axi_rvalid)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask 
        = (3U & ((IData)(3U) << (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask 
        = (3U & ((IData)(3U) << (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q)));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][1U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][2U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][3U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][4U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][5U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][5U] 
        = ((0x1ffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][5U]) | (0x1fffffU & ((IData)(vlSelfRef.s0_axi_awid) 
                                      << 0x11U)));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][4U] 
        = ((0x1ffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][4U]) | (vlSelfRef.s0_axi_awaddr << 0x11U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][5U] 
        = ((0x1e0000U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][5U]) | (0x1fffffU & (vlSelfRef.s0_axi_awaddr 
                                      >> 0xfU)));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][4U] 
        = ((0xfffe01ffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][4U]) | ((IData)(vlSelfRef.s0_axi_awlen) 
                         << 9U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][4U] 
        = ((0xfffffe3fU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][4U]) | ((IData)(vlSelfRef.s0_axi_awsize) 
                         << 6U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][4U] 
        = ((0xffffffcfU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][4U]) | ((IData)(vlSelfRef.s0_axi_awburst) 
                         << 4U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][4U] 
        = ((0xfffffff7U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][4U]) | ((IData)(vlSelfRef.s0_axi_awlock) 
                         << 3U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][3U] 
        = ((0x7fffffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][3U]) | ((IData)(vlSelfRef.s0_axi_awcache) 
                         << 0x1fU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][4U] 
        = ((0xfffffff8U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][4U]) | ((IData)(vlSelfRef.s0_axi_awcache) 
                         >> 1U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][3U] 
        = ((0x8fffffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][3U]) | ((IData)(vlSelfRef.s0_axi_awprot) 
                         << 0x1cU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][3U]) | ((IData)(vlSelfRef.s0_axi_awvalid) 
                         << 0xcU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][2U] 
        = ((0xfffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][2U]) | (vlSelfRef.s0_axi_wdata << 0xcU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][3U]) | (vlSelfRef.s0_axi_wdata >> 0x14U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][2U] 
        = ((0xfffff0ffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][2U]) | ((IData)(vlSelfRef.s0_axi_wstrb) 
                         << 8U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][2U] 
        = ((0xffffff7fU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][2U]) | ((IData)(vlSelfRef.s0_axi_wlast) 
                         << 7U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][2U]) | ((IData)(vlSelfRef.s0_axi_wvalid) 
                         << 5U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][2U]) | ((IData)(vlSelfRef.s0_axi_bready) 
                         << 4U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][2U]) | (IData)(vlSelfRef.s0_axi_arid));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][1U] 
        = vlSelfRef.s0_axi_araddr;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U] 
        = ((0xffffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][0U]) | ((IData)(vlSelfRef.s0_axi_arlen) 
                         << 0x18U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U] 
        = ((0xff1fffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][0U]) | ((IData)(vlSelfRef.s0_axi_arsize) 
                         << 0x15U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U] 
        = ((0xffe7ffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][0U]) | ((IData)(vlSelfRef.s0_axi_arburst) 
                         << 0x13U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U] 
        = ((0xfffbffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][0U]) | ((IData)(vlSelfRef.s0_axi_arlock) 
                         << 0x12U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U] 
        = ((0xfffc3fffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][0U]) | ((IData)(vlSelfRef.s0_axi_arcache) 
                         << 0xeU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U] 
        = ((0xffffc7ffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][0U]) | ((IData)(vlSelfRef.s0_axi_arprot) 
                         << 0xbU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][0U]) | ((IData)(vlSelfRef.s0_axi_arvalid) 
                         << 1U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [0U][0U]) | (IData)(vlSelfRef.s0_axi_rready));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][1U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][2U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][3U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][4U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][5U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][5U] 
        = ((0x1ffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][5U]) | (0x1fffffU & ((IData)(vlSelfRef.s1_axi_awid) 
                                      << 0x11U)));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][4U] 
        = ((0x1ffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][4U]) | (vlSelfRef.s1_axi_awaddr << 0x11U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][5U] 
        = ((0x1e0000U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][5U]) | (0x1fffffU & (vlSelfRef.s1_axi_awaddr 
                                      >> 0xfU)));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][4U] 
        = ((0xfffe01ffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][4U]) | ((IData)(vlSelfRef.s1_axi_awlen) 
                         << 9U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][4U] 
        = ((0xfffffe3fU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][4U]) | ((IData)(vlSelfRef.s1_axi_awsize) 
                         << 6U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][4U] 
        = ((0xffffffcfU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][4U]) | ((IData)(vlSelfRef.s1_axi_awburst) 
                         << 4U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][4U] 
        = ((0xfffffff7U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][4U]) | ((IData)(vlSelfRef.s1_axi_awlock) 
                         << 3U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][3U] 
        = ((0x7fffffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][3U]) | ((IData)(vlSelfRef.s1_axi_awcache) 
                         << 0x1fU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][4U] 
        = ((0xfffffff8U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][4U]) | ((IData)(vlSelfRef.s1_axi_awcache) 
                         >> 1U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][3U] 
        = ((0x8fffffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][3U]) | ((IData)(vlSelfRef.s1_axi_awprot) 
                         << 0x1cU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][3U]) | ((IData)(vlSelfRef.s1_axi_awvalid) 
                         << 0xcU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][2U] 
        = ((0xfffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][2U]) | (vlSelfRef.s1_axi_wdata << 0xcU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][3U]) | (vlSelfRef.s1_axi_wdata >> 0x14U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][2U] 
        = ((0xfffff0ffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][2U]) | ((IData)(vlSelfRef.s1_axi_wstrb) 
                         << 8U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][2U] 
        = ((0xffffff7fU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][2U]) | ((IData)(vlSelfRef.s1_axi_wlast) 
                         << 7U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][2U]) | ((IData)(vlSelfRef.s1_axi_wvalid) 
                         << 5U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][2U]) | ((IData)(vlSelfRef.s1_axi_bready) 
                         << 4U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][2U]) | (IData)(vlSelfRef.s1_axi_arid));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][1U] 
        = vlSelfRef.s1_axi_araddr;
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U] 
        = ((0xffffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][0U]) | ((IData)(vlSelfRef.s1_axi_arlen) 
                         << 0x18U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U] 
        = ((0xff1fffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][0U]) | ((IData)(vlSelfRef.s1_axi_arsize) 
                         << 0x15U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U] 
        = ((0xffe7ffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][0U]) | ((IData)(vlSelfRef.s1_axi_arburst) 
                         << 0x13U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U] 
        = ((0xfffbffffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][0U]) | ((IData)(vlSelfRef.s1_axi_arlock) 
                         << 0x12U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U] 
        = ((0xfffc3fffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][0U]) | ((IData)(vlSelfRef.s1_axi_arcache) 
                         << 0xeU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U] 
        = ((0xffffc7ffU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][0U]) | ((IData)(vlSelfRef.s1_axi_arprot) 
                         << 0xbU));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][0U]) | ((IData)(vlSelfRef.s1_axi_arvalid) 
                         << 1U));
    vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_mux_flat__DOT__sreq
            [1U][0U]) | (IData)(vlSelfRef.s1_axi_rready));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__clk_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__clk_i;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__rst_ni 
        = vlSelfRef.weft_axi_mux_flat__DOT__rst_ni;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__full_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__empty_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_rsp_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__mrsp;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__b_bits 
        = (0xffU & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                            >> 0x2cU)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__r_bits 
        = (0x1ffffffffffULL & (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                               >> 1U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__b_sel 
        = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                         >> 0x33U)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__r_sel 
        = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                         >> 0x29U)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[0U][0U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[0U][1U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][1U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[0U][2U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][2U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[0U][3U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][3U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[0U][4U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][4U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[0U][5U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][5U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[1U][0U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[1U][1U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][1U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[1U][2U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][2U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[1U][3U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][3U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[1U][4U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][4U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[1U][5U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][5U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[0U][0U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][0U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[0U][1U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][1U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[0U][2U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][2U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[0U][3U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][3U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[0U][4U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][4U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[0U][5U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[0U][5U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[1U][0U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][0U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[1U][1U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][1U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[1U][2U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][2U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[1U][3U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][3U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[1U][4U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][4U];
    vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[1U][5U] 
        = vlSelfRef.weft_axi_mux_flat__DOT__sreq[1U][5U];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__clk_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__clk_i;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__clk_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__clk_i;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__clk_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__clk_i;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__rst_ni 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__rst_ni;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__rst_ni 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__rst_ni;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rst_ni 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__rst_ni;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_req 
        = ((2U & vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
            [1U][0U]) | (1U & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                               [0U][0U] >> 1U)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_req 
        = ((2U & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                  [1U][3U] >> 0xbU)) | (1U & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                              [0U][3U] 
                                              >> 0xcU)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__req_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_req;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_req));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_req) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_req))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_req) 
           & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__req_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_req;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_req));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_req) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_req))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_req) 
           & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_arb_valid 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__valid_o;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_arb_valid 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__valid_o;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt 
        = ((0U != (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))
            ? (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked)
            : (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt 
        = ((0U != (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))
            ? (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked)
            : (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__grant_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_grant 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 0U;
    if ((1U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 0U;
    }
    if ((2U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 1U;
    }
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__grant_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_grant 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 0U;
    if ((1U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 0U;
    }
    if ((2U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 1U;
    }
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_sel 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[0U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][1U] 
            << 0x1eU) | (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][0U] 
                         >> 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[1U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][2U] 
            << 0x1eU) | (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][1U] 
                         >> 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[2U] 
        = (3U & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                 [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][2U] 
                 >> 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] = 0ULL;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0x7ffffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_grant) 
                                       & (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                          >> 0x35U)) 
                                      & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full))))) 
                     << 0x33U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xbffffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((1U & (((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty)) 
                                             & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel))) 
                                            & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x34U)))))) 
                     << 0x32U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((1U & ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_grant) 
                                            & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x2aU)))))) 
                     << 0x29U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xc07ffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((0x7fU & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x2cU))))) 
                     << 0x2bU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                     >> 0x2bU)) 
                                            & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__b_sel)))))) 
                     << 0x2aU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xffe0000000001ULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | (0x1fffffffffeULL & vlSelfRef.weft_axi_mux_flat__DOT__mrsp));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | (IData)((IData)((1U & ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__mrsp) 
                                           & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__r_sel)))))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] = 0ULL;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0x7ffffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)((IData)(((((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_grant) 
                                                >> 1U) 
                                               & (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                  >> 0x35U)) 
                                              & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full)))))) 
                     << 0x33U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xbffffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)((((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty)) 
                                       & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel)) 
                                      & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                 >> 0x34U))))) 
                     << 0x32U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)((IData)((((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_grant) 
                                               >> 1U) 
                                              & (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                 >> 0x2aU))))) 
                     << 0x29U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xc07ffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)((0x7fU & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x2cU))))) 
                     << 0x2bU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)(((IData)((vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                               >> 0x2bU)) 
                                      & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__b_sel)))) 
                     << 0x2aU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xffe0000000001ULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | (0x1fffffffffeULL & vlSelfRef.weft_axi_mux_flat__DOT__mrsp));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | (IData)((IData)(((IData)(vlSelfRef.weft_axi_mux_flat__DOT__mrsp) 
                                     & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__r_sel)))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[0U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][4U] 
            << 0x13U) | (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][3U] 
                         >> 0xdU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[1U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][5U] 
            << 0x13U) | (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][4U] 
                         >> 0xdU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[2U] 
        = (0xffU & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                    [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][5U] 
                    >> 0xdU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_sel 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o;
    vlSelfRef.weft_axi_mux_flat__DOT__srsp[0U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
        [0U];
    vlSelfRef.weft_axi_mux_flat__DOT__srsp[1U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
        [1U];
    vlSelfRef.s0_axi_awready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                              [0U] 
                                              >> 0x33U)));
    vlSelfRef.s0_axi_wready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                             [0U] >> 0x32U)));
    vlSelfRef.s0_axi_bid = (0xfU & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 0x2eU)));
    vlSelfRef.s0_axi_bresp = (3U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 0x2cU)));
    vlSelfRef.s0_axi_bvalid = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                             [0U] >> 0x2aU)));
    vlSelfRef.s0_axi_arready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                              [0U] 
                                              >> 0x29U)));
    vlSelfRef.s0_axi_rid = (0xfU & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 0x25U)));
    vlSelfRef.s0_axi_rdata = (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                      [0U] >> 5U));
    vlSelfRef.s0_axi_rresp = (3U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 3U)));
    vlSelfRef.s0_axi_rlast = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 2U)));
    vlSelfRef.s0_axi_rvalid = (1U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U]));
    vlSelfRef.s1_axi_awready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                              [1U] 
                                              >> 0x33U)));
    vlSelfRef.s1_axi_wready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                             [1U] >> 0x32U)));
    vlSelfRef.s1_axi_bid = (0xfU & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 0x2eU)));
    vlSelfRef.s1_axi_bresp = (3U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 0x2cU)));
    vlSelfRef.s1_axi_bvalid = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                             [1U] >> 0x2aU)));
    vlSelfRef.s1_axi_arready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                              [1U] 
                                              >> 0x29U)));
    vlSelfRef.s1_axi_rid = (0xfU & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 0x25U)));
    vlSelfRef.s1_axi_rdata = (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                      [1U] >> 5U));
    vlSelfRef.s1_axi_rresp = (3U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 3U)));
    vlSelfRef.s1_axi_rlast = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 2U)));
    vlSelfRef.s1_axi_rvalid = (1U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U]));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wdata_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_sel;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[1U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U]) 
           | ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[0U] 
               << 0xeU) | (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_arb_valid) 
                            & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full))) 
                           << 0xdU)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
        = (((0x1fffU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[0U] 
                        >> 0x12U)) | (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_arb_valid) 
                                       & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full))) 
                                      >> 0x13U)) | 
           ((0x2000U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[0U] 
                        >> 0x12U)) | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[1U] 
                                      << 0xeU)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] 
        = ((0x400000U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U]) 
           | (0x7fffffU & ((0x1fffU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[1U] 
                                       >> 0x12U)) | 
                           ((0x2000U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[1U] 
                                        >> 0x12U)) 
                            | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[2U] 
                               << 0xeU)))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] 
        = ((0x3fffffU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U]) 
           | (0x7fffffU & ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_sel) 
                           << 0x16U)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
        = ((0x7fU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U]) 
           | ((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                           [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][3U])) 
                                           << 0x1aU) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                             [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][2U])) 
                                             >> 6U)))) 
              << 7U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
        = ((0xffffe000U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U]) 
           | (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                              [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][2U])) 
                                              >> 6U)))) 
               >> 0x19U) | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                          [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][2U])) 
                                            >> 6U))) 
                                     >> 0x20U)) << 7U)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
        = ((0xffffffbfU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U]) 
           | (0x40U & (((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty)) 
                        << 6U) & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                  [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][2U] 
                                  << 1U))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
        = ((3U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U]) 
           | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[0U] 
              << 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[1U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[0U] 
            >> 0x1eU) | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[1U] 
                         << 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
        = ((0xffffffc0U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U]) 
           | ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[1U] 
               >> 0x1eU) | ((0x20U & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                      [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__b_sel][2U] 
                                      << 1U)) | (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_sel) 
                                                  << 4U) 
                                                 | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[2U] 
                                                    << 2U)))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
        = ((0xfffffffcU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U]) 
           | (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_arb_valid) 
               << 1U) | (1U & vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__r_sel][0U])));
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awready 
        = vlSelfRef.s0_axi_awready;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_wready 
        = vlSelfRef.s0_axi_wready;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_bid = vlSelfRef.s0_axi_bid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_bresp 
        = vlSelfRef.s0_axi_bresp;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_bvalid 
        = vlSelfRef.s0_axi_bvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arready 
        = vlSelfRef.s0_axi_arready;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rid = vlSelfRef.s0_axi_rid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rdata 
        = vlSelfRef.s0_axi_rdata;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rresp 
        = vlSelfRef.s0_axi_rresp;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rlast 
        = vlSelfRef.s0_axi_rlast;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rvalid 
        = vlSelfRef.s0_axi_rvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awready 
        = vlSelfRef.s1_axi_awready;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_wready 
        = vlSelfRef.s1_axi_wready;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_bid = vlSelfRef.s1_axi_bid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_bresp 
        = vlSelfRef.s1_axi_bresp;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_bvalid 
        = vlSelfRef.s1_axi_bvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arready 
        = vlSelfRef.s1_axi_arready;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rid = vlSelfRef.s1_axi_rid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rdata 
        = vlSelfRef.s1_axi_rdata;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rresp 
        = vlSelfRef.s1_axi_rresp;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rlast 
        = vlSelfRef.s1_axi_rlast;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rvalid 
        = vlSelfRef.s1_axi_rvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[0U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[1U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[1U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[2U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[3U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[4U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[5U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U];
    vlSelfRef.m_axi_awid = (0x1fU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] 
                                     >> 0x12U));
    vlSelfRef.m_axi_awaddr = ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] 
                               << 0xeU) | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                           >> 0x12U));
    vlSelfRef.m_axi_awlen = (0xffU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                      >> 0xaU));
    vlSelfRef.m_axi_awsize = (7U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                    >> 7U));
    vlSelfRef.m_axi_awburst = (3U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                     >> 5U));
    vlSelfRef.m_axi_awlock = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                    >> 4U));
    vlSelfRef.m_axi_awcache = (0xfU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U]);
    vlSelfRef.m_axi_awprot = (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
                              >> 0x1dU);
    vlSelfRef.m_axi_wdata = ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
                              << 0x13U) | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                           >> 0xdU));
    vlSelfRef.m_axi_wstrb = (0xfU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                     >> 9U));
    vlSelfRef.m_axi_bready = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                    >> 5U));
    vlSelfRef.m_axi_arid = (0x1fU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U]);
    vlSelfRef.m_axi_araddr = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[1U];
    vlSelfRef.m_axi_arlen = (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                             >> 0x18U);
    vlSelfRef.m_axi_arsize = (7U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                    >> 0x15U));
    vlSelfRef.m_axi_arburst = (3U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                     >> 0x13U));
    vlSelfRef.m_axi_arlock = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                    >> 0x12U));
    vlSelfRef.m_axi_arcache = (0xfU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                       >> 0xeU));
    vlSelfRef.m_axi_arprot = (7U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                    >> 0xbU));
    vlSelfRef.m_axi_rready = (1U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U]);
    vlSelfRef.m_axi_arvalid = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                     >> 1U));
    vlSelfRef.m_axi_wlast = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                   >> 8U));
    vlSelfRef.m_axi_awvalid = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
                                     >> 0xdU));
    vlSelfRef.m_axi_wvalid = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                    >> 6U));
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awid = vlSelfRef.m_axi_awid;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awaddr 
        = vlSelfRef.m_axi_awaddr;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awlen = vlSelfRef.m_axi_awlen;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awsize 
        = vlSelfRef.m_axi_awsize;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awburst 
        = vlSelfRef.m_axi_awburst;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awlock 
        = vlSelfRef.m_axi_awlock;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awcache 
        = vlSelfRef.m_axi_awcache;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awprot 
        = vlSelfRef.m_axi_awprot;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_wdata = vlSelfRef.m_axi_wdata;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_wstrb = vlSelfRef.m_axi_wstrb;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_bready 
        = vlSelfRef.m_axi_bready;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arid = vlSelfRef.m_axi_arid;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_araddr 
        = vlSelfRef.m_axi_araddr;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arlen = vlSelfRef.m_axi_arlen;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arsize 
        = vlSelfRef.m_axi_arsize;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arburst 
        = vlSelfRef.m_axi_arburst;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arlock 
        = vlSelfRef.m_axi_arlock;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arcache 
        = vlSelfRef.m_axi_arcache;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arprot 
        = vlSelfRef.m_axi_arprot;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_rready 
        = vlSelfRef.m_axi_rready;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arvalid 
        = vlSelfRef.m_axi_arvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_hs 
        = ((IData)(vlSelfRef.m_axi_arvalid) & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x2aU)));
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_wlast = vlSelfRef.m_axi_wlast;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awvalid 
        = vlSelfRef.m_axi_awvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs 
        = ((IData)(vlSelfRef.m_axi_awvalid) & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x35U)));
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_wvalid 
        = vlSelfRef.m_axi_wvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_hs 
        = ((IData)(vlSelfRef.m_axi_wvalid) & (IData)(
                                                     (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                      >> 0x34U)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__ready_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_hs;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__ready_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__push_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_push 
        = ((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full)) 
           & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_pop 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_hs) 
           & (IData)(vlSelfRef.m_axi_wlast));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__pop_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_pop;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_pop 
        = ((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty)) 
           & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_pop));
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_push) {
            vlSelfRef.__Vdly__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
                = ((7U == (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))));
        }
        if (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_pop) {
            vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q 
                = ((7U == (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))));
        }
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q 
            = (0xfU & (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q) 
                        + (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_push)) 
                       - (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_pop)));
        if (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__valid_o) 
             & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_hs))) {
            vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o))));
        }
        if (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__valid_o) 
             & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs))) {
            vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o))));
        }
    } else {
        vlSelfRef.__Vdly__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = 0U;
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = 0U;
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q = 0U;
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = 0U;
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = 0U;
    }
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full 
        = (8U == (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty 
        = (0U == (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask 
        = (3U & ((IData)(3U) << (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask 
        = (3U & ((IData)(3U) << (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__full_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__empty_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_req) 
           & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_req) 
           & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt 
        = ((0U != (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))
            ? (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked)
            : (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt 
        = ((0U != (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))
            ? (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked)
            : (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__grant_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_grant 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 0U;
    if ((1U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 0U;
    }
    if ((2U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 1U;
    }
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__grant_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_grant 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 0U;
    if ((1U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 0U;
    }
    if ((2U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 1U;
    }
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_sel 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[0U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][1U] 
            << 0x1eU) | (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][0U] 
                         >> 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[1U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][2U] 
            << 0x1eU) | (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][1U] 
                         >> 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[2U] 
        = (3U & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                 [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][2U] 
                 >> 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[0U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][4U] 
            << 0x13U) | (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][3U] 
                         >> 0xdU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[1U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][5U] 
            << 0x13U) | (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][4U] 
                         >> 0xdU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[2U] 
        = (0xffU & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                    [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][5U] 
                    >> 0xdU));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlyVal__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0;
    __VdlyVal__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0;
    __VdlyDim0__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0;
    __VdlySet__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0 = 0;
    // Body
    __VdlySet__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0 = 0U;
    if (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_push) {
        __VdlyVal__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0 
            = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_sel;
        __VdlyDim0__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0 
            = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
        __VdlySet__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0 = 1U;
    }
    if (__VdlySet__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0) {
        vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem[__VdlyDim0__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0] 
            = __VdlyVal__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
        = vlSelfRef.__Vdly__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_sel 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wdata_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_sel;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rdata_o 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem
        [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem
        [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q];
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] = 0ULL;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0x7ffffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_grant) 
                                       & (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                          >> 0x35U)) 
                                      & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full))))) 
                     << 0x33U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xbffffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((1U & (((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty)) 
                                             & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel))) 
                                            & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x34U)))))) 
                     << 0x32U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((1U & ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_grant) 
                                            & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x2aU)))))) 
                     << 0x29U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xc07ffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((0x7fU & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x2cU))))) 
                     << 0x2bU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                     >> 0x2bU)) 
                                            & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__b_sel)))))) 
                     << 0x2aU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xffe0000000001ULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | (0x1fffffffffeULL & vlSelfRef.weft_axi_mux_flat__DOT__mrsp));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[0U] 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [0U]) | (IData)((IData)((1U & ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__mrsp) 
                                           & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__r_sel)))))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] = 0ULL;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0x7ffffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)((IData)(((((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_grant) 
                                                >> 1U) 
                                               & (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                  >> 0x35U)) 
                                              & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full)))))) 
                     << 0x33U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xbffffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)((((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty)) 
                                       & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel)) 
                                      & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                 >> 0x34U))))) 
                     << 0x32U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)((IData)((((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_grant) 
                                               >> 1U) 
                                              & (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                 >> 0x2aU))))) 
                     << 0x29U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xc07ffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)((0x7fU & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x2cU))))) 
                     << 0x2bU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | ((QData)((IData)(((IData)((vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                               >> 0x2bU)) 
                                      & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__b_sel)))) 
                     << 0x2aU));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xffe0000000001ULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | (0x1fffffffffeULL & vlSelfRef.weft_axi_mux_flat__DOT__mrsp));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[1U] 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
            [1U]) | (IData)((IData)(((IData)(vlSelfRef.weft_axi_mux_flat__DOT__mrsp) 
                                     & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__r_sel)))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[1U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] = 0U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U]) 
           | ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[0U] 
               << 0xeU) | (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_arb_valid) 
                            & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full))) 
                           << 0xdU)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
        = (((0x1fffU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[0U] 
                        >> 0x12U)) | (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_arb_valid) 
                                       & (~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full))) 
                                      >> 0x13U)) | 
           ((0x2000U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[0U] 
                        >> 0x12U)) | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[1U] 
                                      << 0xeU)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] 
        = ((0x400000U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U]) 
           | (0x7fffffU & ((0x1fffU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[1U] 
                                       >> 0x12U)) | 
                           ((0x2000U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[1U] 
                                        >> 0x12U)) 
                            | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits[2U] 
                               << 0xeU)))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] 
        = ((0x3fffffU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U]) 
           | (0x7fffffU & ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_sel) 
                           << 0x16U)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
        = ((0x7fU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U]) 
           | ((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                           [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][3U])) 
                                           << 0x1aU) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                             [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][2U])) 
                                             >> 6U)))) 
              << 7U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
        = ((0xffffe000U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U]) 
           | (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                              [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][2U])) 
                                              >> 6U)))) 
               >> 0x19U) | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                          [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                                            [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][2U])) 
                                            >> 6U))) 
                                     >> 0x20U)) << 7U)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
        = ((0xffffffbfU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U]) 
           | (0x40U & (((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty)) 
                        << 6U) & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                  [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_sel][2U] 
                                  << 1U))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
        = ((3U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U]) 
           | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[0U] 
              << 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[1U] 
        = ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[0U] 
            >> 0x1eU) | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[1U] 
                         << 2U));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
        = ((0xffffffc0U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U]) 
           | ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[1U] 
               >> 0x1eU) | ((0x20U & (vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                                      [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__b_sel][2U] 
                                      << 1U)) | (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_sel) 
                                                  << 4U) 
                                                 | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits[2U] 
                                                    << 2U)))));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
        = ((0xfffffffcU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U]) 
           | (((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_arb_valid) 
               << 1U) | (1U & vlSelfRef.weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i
                         [vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__r_sel][0U])));
    vlSelfRef.weft_axi_mux_flat__DOT__srsp[0U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
        [0U];
    vlSelfRef.weft_axi_mux_flat__DOT__srsp[1U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
        [1U];
    vlSelfRef.s0_axi_awready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                              [0U] 
                                              >> 0x33U)));
    vlSelfRef.s0_axi_wready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                             [0U] >> 0x32U)));
    vlSelfRef.s0_axi_bid = (0xfU & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 0x2eU)));
    vlSelfRef.s0_axi_bresp = (3U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 0x2cU)));
    vlSelfRef.s0_axi_bvalid = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                             [0U] >> 0x2aU)));
    vlSelfRef.s0_axi_arready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                              [0U] 
                                              >> 0x29U)));
    vlSelfRef.s0_axi_rid = (0xfU & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 0x25U)));
    vlSelfRef.s0_axi_rdata = (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                      [0U] >> 5U));
    vlSelfRef.s0_axi_rresp = (3U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 3U)));
    vlSelfRef.s0_axi_rlast = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U] >> 2U)));
    vlSelfRef.s0_axi_rvalid = (1U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [0U]));
    vlSelfRef.s1_axi_awready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                              [1U] 
                                              >> 0x33U)));
    vlSelfRef.s1_axi_wready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                             [1U] >> 0x32U)));
    vlSelfRef.s1_axi_bid = (0xfU & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 0x2eU)));
    vlSelfRef.s1_axi_bresp = (3U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 0x2cU)));
    vlSelfRef.s1_axi_bvalid = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                             [1U] >> 0x2aU)));
    vlSelfRef.s1_axi_arready = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                              [1U] 
                                              >> 0x29U)));
    vlSelfRef.s1_axi_rid = (0xfU & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 0x25U)));
    vlSelfRef.s1_axi_rdata = (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                      [1U] >> 5U));
    vlSelfRef.s1_axi_rresp = (3U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 3U)));
    vlSelfRef.s1_axi_rlast = (1U & (IData)((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U] >> 2U)));
    vlSelfRef.s1_axi_rvalid = (1U & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o
                                            [1U]));
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[0U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[1U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[1U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[2U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[3U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[4U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U];
    vlSelfRef.weft_axi_mux_flat__DOT__mreq[5U] = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U];
    vlSelfRef.m_axi_awid = (0x1fU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] 
                                     >> 0x12U));
    vlSelfRef.m_axi_awaddr = ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[5U] 
                               << 0xeU) | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                           >> 0x12U));
    vlSelfRef.m_axi_awlen = (0xffU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                      >> 0xaU));
    vlSelfRef.m_axi_awsize = (7U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                    >> 7U));
    vlSelfRef.m_axi_awburst = (3U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                     >> 5U));
    vlSelfRef.m_axi_awlock = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U] 
                                    >> 4U));
    vlSelfRef.m_axi_awcache = (0xfU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[4U]);
    vlSelfRef.m_axi_awprot = (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
                              >> 0x1dU);
    vlSelfRef.m_axi_wdata = ((vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
                              << 0x13U) | (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                           >> 0xdU));
    vlSelfRef.m_axi_wstrb = (0xfU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                     >> 9U));
    vlSelfRef.m_axi_bready = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                    >> 5U));
    vlSelfRef.m_axi_arid = (0x1fU & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U]);
    vlSelfRef.m_axi_araddr = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[1U];
    vlSelfRef.m_axi_arlen = (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                             >> 0x18U);
    vlSelfRef.m_axi_arsize = (7U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                    >> 0x15U));
    vlSelfRef.m_axi_arburst = (3U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                     >> 0x13U));
    vlSelfRef.m_axi_arlock = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                    >> 0x12U));
    vlSelfRef.m_axi_arcache = (0xfU & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                       >> 0xeU));
    vlSelfRef.m_axi_arprot = (7U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                    >> 0xbU));
    vlSelfRef.m_axi_rready = (1U & vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U]);
    vlSelfRef.m_axi_arvalid = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[0U] 
                                     >> 1U));
    vlSelfRef.m_axi_wlast = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                   >> 8U));
    vlSelfRef.m_axi_awvalid = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[3U] 
                                     >> 0xdU));
    vlSelfRef.m_axi_wvalid = (1U & (vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o[2U] 
                                    >> 6U));
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_awready 
        = vlSelfRef.s0_axi_awready;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_wready 
        = vlSelfRef.s0_axi_wready;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_bid = vlSelfRef.s0_axi_bid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_bresp 
        = vlSelfRef.s0_axi_bresp;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_bvalid 
        = vlSelfRef.s0_axi_bvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_arready 
        = vlSelfRef.s0_axi_arready;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rid = vlSelfRef.s0_axi_rid;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rdata 
        = vlSelfRef.s0_axi_rdata;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rresp 
        = vlSelfRef.s0_axi_rresp;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rlast 
        = vlSelfRef.s0_axi_rlast;
    vlSelfRef.weft_axi_mux_flat__DOT__s0_axi_rvalid 
        = vlSelfRef.s0_axi_rvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_awready 
        = vlSelfRef.s1_axi_awready;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_wready 
        = vlSelfRef.s1_axi_wready;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_bid = vlSelfRef.s1_axi_bid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_bresp 
        = vlSelfRef.s1_axi_bresp;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_bvalid 
        = vlSelfRef.s1_axi_bvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_arready 
        = vlSelfRef.s1_axi_arready;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rid = vlSelfRef.s1_axi_rid;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rdata 
        = vlSelfRef.s1_axi_rdata;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rresp 
        = vlSelfRef.s1_axi_rresp;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rlast 
        = vlSelfRef.s1_axi_rlast;
    vlSelfRef.weft_axi_mux_flat__DOT__s1_axi_rvalid 
        = vlSelfRef.s1_axi_rvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awid = vlSelfRef.m_axi_awid;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awaddr 
        = vlSelfRef.m_axi_awaddr;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awlen = vlSelfRef.m_axi_awlen;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awsize 
        = vlSelfRef.m_axi_awsize;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awburst 
        = vlSelfRef.m_axi_awburst;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awlock 
        = vlSelfRef.m_axi_awlock;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awcache 
        = vlSelfRef.m_axi_awcache;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awprot 
        = vlSelfRef.m_axi_awprot;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_wdata = vlSelfRef.m_axi_wdata;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_wstrb = vlSelfRef.m_axi_wstrb;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_bready 
        = vlSelfRef.m_axi_bready;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arid = vlSelfRef.m_axi_arid;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_araddr 
        = vlSelfRef.m_axi_araddr;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arlen = vlSelfRef.m_axi_arlen;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arsize 
        = vlSelfRef.m_axi_arsize;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arburst 
        = vlSelfRef.m_axi_arburst;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arlock 
        = vlSelfRef.m_axi_arlock;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arcache 
        = vlSelfRef.m_axi_arcache;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arprot 
        = vlSelfRef.m_axi_arprot;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_rready 
        = vlSelfRef.m_axi_rready;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_arvalid 
        = vlSelfRef.m_axi_arvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_hs 
        = ((IData)(vlSelfRef.m_axi_arvalid) & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x2aU)));
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_wlast = vlSelfRef.m_axi_wlast;
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_awvalid 
        = vlSelfRef.m_axi_awvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs 
        = ((IData)(vlSelfRef.m_axi_awvalid) & (IData)(
                                                      (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                       >> 0x35U)));
    vlSelfRef.weft_axi_mux_flat__DOT__m_axi_wvalid 
        = vlSelfRef.m_axi_wvalid;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_hs 
        = ((IData)(vlSelfRef.m_axi_wvalid) & (IData)(
                                                     (vlSelfRef.weft_axi_mux_flat__DOT__mrsp 
                                                      >> 0x34U)));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__ready_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__ar_hs;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__ready_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__push_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_push 
        = ((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_full)) 
           & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_pop 
        = ((IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_hs) 
           & (IData)(vlSelfRef.m_axi_wlast));
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__pop_i 
        = vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_pop;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_pop 
        = ((~ (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_empty)) 
           & (IData)(vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__w_pop));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/mux/weft_axi_mux_flat.sv", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/mux/weft_axi_mux_flat.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/mux/weft_axi_mux_flat.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_awid & 0xf0U)))) {
        Verilated::overWidthError("s0_axi_awid");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_awsize & 0xf8U)))) {
        Verilated::overWidthError("s0_axi_awsize");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_awburst & 0xfcU)))) {
        Verilated::overWidthError("s0_axi_awburst");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_awlock & 0xfeU)))) {
        Verilated::overWidthError("s0_axi_awlock");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_awcache & 0xf0U)))) {
        Verilated::overWidthError("s0_axi_awcache");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_awprot & 0xf8U)))) {
        Verilated::overWidthError("s0_axi_awprot");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_awvalid & 0xfeU)))) {
        Verilated::overWidthError("s0_axi_awvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_wstrb & 0xf0U)))) {
        Verilated::overWidthError("s0_axi_wstrb");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_wlast & 0xfeU)))) {
        Verilated::overWidthError("s0_axi_wlast");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_wvalid & 0xfeU)))) {
        Verilated::overWidthError("s0_axi_wvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_bready & 0xfeU)))) {
        Verilated::overWidthError("s0_axi_bready");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_arid & 0xf0U)))) {
        Verilated::overWidthError("s0_axi_arid");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_arsize & 0xf8U)))) {
        Verilated::overWidthError("s0_axi_arsize");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_arburst & 0xfcU)))) {
        Verilated::overWidthError("s0_axi_arburst");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_arlock & 0xfeU)))) {
        Verilated::overWidthError("s0_axi_arlock");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_arcache & 0xf0U)))) {
        Verilated::overWidthError("s0_axi_arcache");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_arprot & 0xf8U)))) {
        Verilated::overWidthError("s0_axi_arprot");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_arvalid & 0xfeU)))) {
        Verilated::overWidthError("s0_axi_arvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s0_axi_rready & 0xfeU)))) {
        Verilated::overWidthError("s0_axi_rready");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_awid & 0xf0U)))) {
        Verilated::overWidthError("s1_axi_awid");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_awsize & 0xf8U)))) {
        Verilated::overWidthError("s1_axi_awsize");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_awburst & 0xfcU)))) {
        Verilated::overWidthError("s1_axi_awburst");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_awlock & 0xfeU)))) {
        Verilated::overWidthError("s1_axi_awlock");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_awcache & 0xf0U)))) {
        Verilated::overWidthError("s1_axi_awcache");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_awprot & 0xf8U)))) {
        Verilated::overWidthError("s1_axi_awprot");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_awvalid & 0xfeU)))) {
        Verilated::overWidthError("s1_axi_awvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_wstrb & 0xf0U)))) {
        Verilated::overWidthError("s1_axi_wstrb");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_wlast & 0xfeU)))) {
        Verilated::overWidthError("s1_axi_wlast");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_wvalid & 0xfeU)))) {
        Verilated::overWidthError("s1_axi_wvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_bready & 0xfeU)))) {
        Verilated::overWidthError("s1_axi_bready");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_arid & 0xf0U)))) {
        Verilated::overWidthError("s1_axi_arid");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_arsize & 0xf8U)))) {
        Verilated::overWidthError("s1_axi_arsize");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_arburst & 0xfcU)))) {
        Verilated::overWidthError("s1_axi_arburst");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_arlock & 0xfeU)))) {
        Verilated::overWidthError("s1_axi_arlock");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_arcache & 0xf0U)))) {
        Verilated::overWidthError("s1_axi_arcache");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_arprot & 0xf8U)))) {
        Verilated::overWidthError("s1_axi_arprot");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_arvalid & 0xfeU)))) {
        Verilated::overWidthError("s1_axi_arvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s1_axi_rready & 0xfeU)))) {
        Verilated::overWidthError("s1_axi_rready");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_awready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_awready");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_wready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_wready");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bid & 0xe0U)))) {
        Verilated::overWidthError("m_axi_bid");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bresp & 0xfcU)))) {
        Verilated::overWidthError("m_axi_bresp");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_bvalid & 0xfeU)))) {
        Verilated::overWidthError("m_axi_bvalid");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_arready & 0xfeU)))) {
        Verilated::overWidthError("m_axi_arready");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rid & 0xe0U)))) {
        Verilated::overWidthError("m_axi_rid");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rresp & 0xfcU)))) {
        Verilated::overWidthError("m_axi_rresp");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rlast & 0xfeU)))) {
        Verilated::overWidthError("m_axi_rlast");}
    if (VL_UNLIKELY(((vlSelfRef.m_axi_rvalid & 0xfeU)))) {
        Verilated::overWidthError("m_axi_rvalid");}
}
#endif  // VL_DEBUG
