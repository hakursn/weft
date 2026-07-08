// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk_i) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst_ni)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*71:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0;
    VL_ZERO_W(72, weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0);
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0 = 0;
    QData/*37:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 = 0;
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0 = 0;
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0 = 0;
    VlWide<3>/*65:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0;
    VL_ZERO_W(66, weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0);
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0 = 0;
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0 = 0;
    VlWide<3>/*71:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0;
    VL_ZERO_W(72, weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0);
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0 = 0;
    QData/*37:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 = 0;
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0 = 0;
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0 = 0;
    VlWide<3>/*65:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0;
    VL_ZERO_W(66, weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0);
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0 = 0;
    CData/*0:0*/ weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0 = 0;
    CData/*1:0*/ __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q;
    __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 0;
    CData/*0:0*/ __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q;
    __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 0;
    CData/*1:0*/ __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q;
    __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 0;
    CData/*0:0*/ __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q;
    __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 0;
    // Body
    vlSelfRef.__Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
    vlSelfRef.__Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
    __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q;
    __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q;
    __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q;
    __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q;
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push) {
            vlSelfRef.__Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
                = ((7U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))));
        }
        if (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push) {
            vlSelfRef.__Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
                = ((7U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))));
        }
        if (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q 
                = ((7U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))));
        }
        if (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q 
                = ((7U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))));
        }
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q 
            = (0xfU & (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q) 
                        + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push)) 
                       - (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop)));
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q 
            = (0xfU & (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q) 
                        + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push)) 
                       - (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop)));
        if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__valid_o) 
             & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_hs))) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o))));
        }
        if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__valid_o) 
             & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_hs))) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o))));
        }
        if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__valid_o) 
             & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_hs))) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o))));
        }
        if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__valid_o) 
             & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_hs))) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o))));
        }
    } else {
        vlSelfRef.__Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = 0U;
        vlSelfRef.__Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = 0U;
    }
    if (vlSelfRef.rst_ni) {
        if ((0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q))) {
            if ((0x1000U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                 [0U][2U][3U])) {
                vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_id_q 
                    = (0xfU & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                               [0U][2U][5U] >> 0x11U));
                __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q))) {
            if ((1U & ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                        [0U][2U][2U] >> 5U) & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                                               [0U]
                                               [2U][2U] 
                                               >> 7U)))) {
                __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q))) {
            if ((0x10U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                 [0U][2U][2U])) {
                __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 0U;
            }
        } else {
            __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_err_slv.sv:54: Assertion failed in %Nweft_axi_xbar_flat.i_xbar.g_slv[0].i_err: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/xbar/../../rtl/weft_axi_err_slv.sv", 54, "");
                }
            }
        }
        if (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q) {
            if (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q) {
                if ((1U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                     [0U][2U][0U])) {
                    if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q) 
                         == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_len_q))) {
                        __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 0U;
                    } else {
                        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q)));
                    }
                }
            } else {
                __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 0U;
            }
        } else if ((2U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                    [0U][2U][0U])) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_id_q 
                = (0xfU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                   [0U][2U][2U]);
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_len_q 
                = (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                   [0U][2U][0U] >> 0x18U);
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q = 0U;
            __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_err_slv.sv:64: Assertion failed in %Nweft_axi_xbar_flat.i_xbar.g_slv[0].i_err: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/xbar/../../rtl/weft_axi_err_slv.sv", 64, "");
                }
            }
        }
    } else {
        __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 0U;
        __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q = 0U;
    }
    if (vlSelfRef.rst_ni) {
        if ((0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q))) {
            if ((0x1000U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                 [1U][2U][3U])) {
                vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_id_q 
                    = (0xfU & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                               [1U][2U][5U] >> 0x11U));
                __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q))) {
            if ((1U & ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                        [1U][2U][2U] >> 5U) & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                                               [1U]
                                               [2U][2U] 
                                               >> 7U)))) {
                __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q))) {
            if ((0x10U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                 [1U][2U][2U])) {
                __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 0U;
            }
        } else {
            __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_err_slv.sv:54: Assertion failed in %Nweft_axi_xbar_flat.i_xbar.g_slv[1].i_err: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/xbar/../../rtl/weft_axi_err_slv.sv", 54, "");
                }
            }
        }
        if (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q) {
            if (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q) {
                if ((1U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                     [1U][2U][0U])) {
                    if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q) 
                         == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_len_q))) {
                        __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 0U;
                    } else {
                        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q)));
                    }
                }
            } else {
                __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 0U;
            }
        } else if ((2U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                    [1U][2U][0U])) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_id_q 
                = (0xfU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                   [1U][2U][2U]);
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_len_q 
                = (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
                   [1U][2U][0U] >> 0x18U);
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q = 0U;
            __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_err_slv.sv:64: Assertion failed in %Nweft_axi_xbar_flat.i_xbar.g_slv[1].i_err: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/xbar/../../rtl/weft_axi_err_slv.sv", 64, "");
                }
            }
        }
    } else {
        __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 0U;
        __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q = 0U;
    }
    if (vlSelfRef.rst_ni) {
        if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_hs) 
             & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)))) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q 
                = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel;
        }
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q) 
                        + ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_hs)
                            ? 1U : 0U)) - ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__b_hs)
                                            ? 1U : 0U)));
        if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_hs) 
             & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)))) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q 
                = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel;
        }
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q) 
                        + ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_hs)
                            ? 1U : 0U)) - ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_last_hs)
                                            ? 1U : 0U)));
        if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs) 
             & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)))) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q 
                = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel;
        }
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q) 
                        + ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs)
                            ? 1U : 0U)) - ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__b_hs)
                                            ? 1U : 0U)));
        if (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_hs) 
             & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)))) {
            vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q 
                = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel;
        }
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q) 
                        + ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_hs)
                            ? 1U : 0U)) - ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_last_hs)
                                            ? 1U : 0U)));
    } else {
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q = 0U;
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q = 0U;
    }
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q 
        = __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q 
        = __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q 
        = __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q 
        = __Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_full 
        = (8U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_empty 
        = (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_full 
        = (8U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_empty 
        = (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask 
        = (3U & ((IData)(3U) << (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask 
        = (3U & ((IData)(3U) << (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask 
        = (3U & ((IData)(3U) << (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask 
        = (3U & ((IData)(3U) << (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o = 0ULL;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0x3ffffffffffffULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((((0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                                << 1U) | (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q))))) 
              << 0x32U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)))) 
              << 0x2aU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xc0fffffffffffULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((3U | ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_id_q) 
                                     << 2U)))) << 0x2cU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((1U & (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q))))) 
              << 0x29U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o) 
           | (IData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xffe0000000003ULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o) 
           | (0x18ULL | (((QData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_id_q)) 
                          << 0x25U) | ((QData)((IData)(
                                                       ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q) 
                                                        == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_len_q)))) 
                                       << 2U))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o = 0ULL;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0x3ffffffffffffULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((((0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                                << 1U) | (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q))))) 
              << 0x32U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)))) 
              << 0x2aU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xc0fffffffffffULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((3U | ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_id_q) 
                                     << 2U)))) << 0x2cU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((1U & (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q))))) 
              << 0x29U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o) 
           | (IData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o 
        = ((0xffe0000000003ULL & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o) 
           | (0x18ULL | (((QData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_id_q)) 
                          << 0x25U) | ((QData)((IData)(
                                                       ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q) 
                                                        == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_len_q)))) 
                                       << 2U))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed 
        = ((0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)) 
           | (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel) 
               == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q)) 
              & (8U > (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed 
        = ((0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)) 
           | (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q) 
               == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel)) 
              & (8U > (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed 
        = ((0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)) 
           | (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel) 
               == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q)) 
              & (8U > (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed 
        = ((0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)) 
           | (((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q) 
               == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel)) 
              & (8U > (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__full_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_full;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__empty_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_empty;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__full_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_full;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__empty_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_empty;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_rsp[0U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_rsp[1U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][0U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][1U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][3U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][4U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][5U] = 0U;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][4U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][3U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][5U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][4U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
        = (0xffU & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                    [0U][5U] >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][4U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
            >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][5U] 
        = (0x1fffffU & ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
                                      << 0xdU)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][3U] >> 0xcU) & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0) 
                         << 0xcU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                               [0U][3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                                            [0U][2U])) 
                                            >> 6U)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                         << 6U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                          >> 0x1aU) | ((IData)((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
                                                >> 0x20U)) 
                                       << 6U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][2U] >> 5U) & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0) 
                         << 5U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][2U] >> 4U) & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0) 
                         << 4U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][1U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][0U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][2U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][1U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
        = (3U & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                 [0U][2U] >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((3U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][1U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
            >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                          >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
                                       << 2U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][0U] >> 1U) & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0) 
                         << 1U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][0U] & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | (IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][0U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][1U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][3U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][4U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][5U] = 0U;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][4U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][3U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][5U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][4U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
        = (0xffU & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                    [0U][5U] >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][4U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
            >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][5U] 
        = (0x1fffffU & ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
                                      << 0xdU)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][3U] >> 0xcU) & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0) 
                         << 0xcU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                               [0U][3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                                            [0U][2U])) 
                                            >> 6U)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                         << 6U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                          >> 0x1aU) | ((IData)((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
                                                >> 0x20U)) 
                                       << 6U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][2U] >> 5U) & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0) 
                         << 5U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][2U] >> 4U) & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0) 
                         << 4U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][1U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][0U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][2U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][1U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
        = (3U & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                 [0U][2U] >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((3U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][1U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
            >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                          >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
                                       << 2U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][0U] >> 1U) & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0) 
                         << 1U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][0U] & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | (IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][0U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][1U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][3U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][4U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][5U] = 0U;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][4U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][3U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][5U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][4U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
        = (0xffU & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                    [0U][5U] >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][3U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][4U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
            >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][5U] 
        = (0x1fffffU & ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
                                      << 0xdU)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][3U] >> 0xcU) & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][3U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0) 
                         << 0xcU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                               [0U][3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                                            [0U][2U])) 
                                            >> 6U)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                         << 6U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][3U]) | (((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                          >> 0x1aU) | ((IData)((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
                                                >> 0x20U)) 
                                       << 6U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][2U] >> 5U) & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0) 
                         << 5U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][2U] >> 4U) & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0) 
                         << 4U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][1U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][0U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][2U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [0U][1U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
        = (3U & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                 [0U][2U] >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][0U] 
        = ((3U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][0U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][1U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
            >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][2U]) | ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                          >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
                                       << 2U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [0U][0U] >> 1U) & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][0U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0) 
                         << 1U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [0U][0U] & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[2U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][0U]) | (IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][0U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][1U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][3U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][4U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][5U] = 0U;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][4U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][3U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][5U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][4U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
        = (0xffU & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                    [1U][5U] >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][4U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
            >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][5U] 
        = (0x1fffffU & ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
                                      << 0xdU)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][3U] >> 0xcU) & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0) 
                         << 0xcU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                               [1U][3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                                            [1U][2U])) 
                                            >> 6U)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                         << 6U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                          >> 0x1aU) | ((IData)((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
                                                >> 0x20U)) 
                                       << 6U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][2U] >> 5U) & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0) 
                         << 5U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][2U] >> 4U) & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0) 
                         << 4U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][1U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][0U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][2U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][1U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
        = (3U & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                 [1U][2U] >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((3U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][1U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
            >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                          >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
                                       << 2U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][0U] >> 1U) & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0) 
                         << 1U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][0U] & (0U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | (IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][0U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][1U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][3U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][4U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][5U] = 0U;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][4U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][3U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][5U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][4U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
        = (0xffU & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                    [1U][5U] >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][4U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
            >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][5U] 
        = (0x1fffffU & ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
                                      << 0xdU)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][3U] >> 0xcU) & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0) 
                         << 0xcU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                               [1U][3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                                            [1U][2U])) 
                                            >> 6U)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                         << 6U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                          >> 0x1aU) | ((IData)((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
                                                >> 0x20U)) 
                                       << 6U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][2U] >> 5U) & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0) 
                         << 5U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][2U] >> 4U) & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0) 
                         << 4U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][1U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][0U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][2U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][1U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
        = (3U & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                 [1U][2U] >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((3U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][1U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
            >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                          >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
                                       << 2U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][0U] >> 1U) & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0) 
                         << 1U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][0U] & (1U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | (IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][0U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][1U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][3U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][4U] = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][5U] = 0U;
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][4U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][3U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][5U] << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][4U] >> 0xdU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
        = (0xffU & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                    [1U][5U] >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][3U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][4U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[0U] 
            >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         << 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][5U] 
        = (0x1fffffU & ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[1U] 
                         >> 0x13U) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc59ef7e1__0[2U] 
                                      << 0xdU)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][3U] >> 0xcU) & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][3U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9fefe01__0) 
                         << 0xcU));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                               [1U][3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                                            [1U][2U])) 
                                            >> 6U)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                         << 6U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][3U]) | (((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0) 
                          >> 0x1aU) | ((IData)((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc260d087__0 
                                                >> 0x20U)) 
                                       << 6U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][2U] >> 5U) & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff13af__0) 
                         << 5U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][2U] >> 4U) & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][2U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9ff0773__0) 
                         << 4U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][1U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][0U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][2U] << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                                  [1U][1U] >> 2U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
        = (3U & (vlSelfRef.weft_axi_xbar_flat__DOT__sreq
                 [1U][2U] >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][0U] 
        = ((3U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][0U]) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][1U] 
        = ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[0U] 
            >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                         << 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][2U]) | ((weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[1U] 
                          >> 0x1eU) | (weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hc416d965__0[2U] 
                                       << 2U)));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0 
        = (((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
             [1U][0U] >> 1U) & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel))) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][0U]) | ((IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feb7a8__0) 
                         << 1U));
    weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__sreq
            [1U][0U] & (2U == (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[2U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
            [2U][0U]) | (IData)(weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_he9feace6__0));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [0U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [1U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o
        [2U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][0U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][0U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][0U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][0U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][0U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][0U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][1U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][1U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][1U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][1U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][1U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][1U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][2U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][2U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][2U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][2U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][2U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[0U][2U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][0U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][0U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][0U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][0U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][0U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][0U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][1U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][1U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][1U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][1U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][1U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][1U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][2U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][2U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][2U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][2U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][2U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[1U][2U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_req_i[0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][2U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_req_i[1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][2U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_req_i[2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][2U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_req_i[3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][2U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_req_i[4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][2U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_req_i[5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][2U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_req_i[0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][2U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_req_i[1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][2U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_req_i[2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][2U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_req_i[3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][2U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_req_i[4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][2U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_req_i[5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][2U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][0U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][0U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][0U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][0U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][0U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][0U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][0U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][0U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][0U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][0U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][0U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][0U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][1U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][1U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][1U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][1U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][1U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [0U][1U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][1U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][1U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][1U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][1U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][1U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req
        [1U][1U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[0U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [0U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[0U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [0U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[0U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [0U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[0U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [0U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[0U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [0U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[0U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [0U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[1U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [1U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[1U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [1U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[1U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [1U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[1U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [1U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[1U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [1U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[1U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
        [1U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req 
        = ((2U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
            [1U][0U]) | (1U & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                               [0U][0U] >> 1U)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req 
        = ((2U & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                  [1U][3U] >> 0xbU)) | (1U & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                              [0U][3U] 
                                              >> 0xcU)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[0U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [0U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[0U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [0U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[0U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [0U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[0U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [0U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[0U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [0U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[0U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [0U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[1U][0U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [1U][0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[1U][1U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [1U][1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[1U][2U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [1U][2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[1U][3U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [1U][3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[1U][4U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [1U][4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[1U][5U] 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
        [1U][5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req 
        = ((2U & vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
            [1U][0U]) | (1U & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                               [0U][0U] >> 1U)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req 
        = ((2U & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                  [1U][3U] >> 0xbU)) | (1U & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                              [0U][3U] 
                                              >> 0xcU)));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__req_i 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__req_i 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__req_i 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__req_i 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req) 
           & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_arb_valid 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__valid_o;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_arb_valid 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__valid_o;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_arb_valid 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__valid_o;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_arb_valid 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__valid_o;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked 
        = ((IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked) 
           & ((IData)(1U) + (~ (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt 
        = ((0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))
            ? (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked)
            : (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt 
        = ((0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))
            ? (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked)
            : (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt 
        = ((0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))
            ? (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked)
            : (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt 
        = ((0U != (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))
            ? (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked)
            : (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__grant_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 0U;
    if ((1U & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 0U;
    }
    if ((2U & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 1U;
    }
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_grant 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__grant_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 0U;
    if ((1U & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 0U;
    }
    if ((2U & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 1U;
    }
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_grant 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__grant_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 0U;
    if ((1U & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 0U;
    }
    if ((2U & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = 1U;
    }
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_grant 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__grant_o 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 0U;
    if ((1U & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 0U;
    }
    if ((2U & (IData)(vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt))) {
        vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = 1U;
    }
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_grant 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__sel_ar_bits[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
            [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][1U] 
            << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                         [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][0U] 
                         >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__sel_ar_bits[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
            [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][2U] 
            << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                         [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][1U] 
                         >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__sel_ar_bits[2U] 
        = (3U & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                 [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][2U] 
                 >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__sel_aw_bits[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
            [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][4U] 
            << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                         [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][3U] 
                         >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__sel_aw_bits[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
            [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][5U] 
            << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                         [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][4U] 
                         >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__sel_aw_bits[2U] 
        = (0xffU & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                    [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][5U] 
                    >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel 
        = vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__sel_ar_bits[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
            [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][1U] 
            << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                         [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][0U] 
                         >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__sel_ar_bits[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
            [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][2U] 
            << 0x1eU) | (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                         [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][1U] 
                         >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__sel_ar_bits[2U] 
        = (3U & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                 [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o][2U] 
                 >> 2U));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__sel_aw_bits[0U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
            [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][4U] 
            << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                         [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][3U] 
                         >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__sel_aw_bits[1U] 
        = ((vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
            [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][5U] 
            << 0x13U) | (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                         [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][4U] 
                         >> 0xdU));
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__sel_aw_bits[2U] 
        = (0xffU & (vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                    [vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o][5U] 
                    >> 0xdU));
}
