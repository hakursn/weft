// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_h17d408c1_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__unnamedblk1__DOT__r = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__unnamedblk1__DOT__r = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__unnamedblk1__DOT__r = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__unnamedblk1__DOT__r = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__unnamedblk1__DOT__m = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__unnamedblk1__DOT__m = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__unnamedblk1__DOT__m = 3U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__unnamedblk1__DOT__r = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__unnamedblk1__DOT__r = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__unnamedblk1__DOT__r = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__unnamedblk1__DOT__r = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__unnamedblk1__DOT__m = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__unnamedblk1__DOT__m = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__unnamedblk1__DOT__m = 3U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__unnamedblk2__DOT__i = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__unnamedblk2__DOT__i = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__unnamedblk2__DOT__i = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__unnamedblk2__DOT__i = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[0U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[1U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[2U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[3U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[4U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[5U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[6U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[6U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[7U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[7U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[8U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[8U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[9U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[9U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[0U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[1U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[2U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[3U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[4U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[5U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[6U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[6U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[7U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[7U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[8U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[8U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[9U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[9U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[0U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[1U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[2U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[3U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[4U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[5U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[6U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[6U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[7U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[7U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[8U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[8U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[9U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[9U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[0U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[0U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[1U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[1U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[2U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[2U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[3U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[3U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[4U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[4U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[5U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[5U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[6U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[6U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[7U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[7U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[8U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[8U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[9U] 
        = Vtop__ConstPool__CONST_h17d408c1_0[9U];
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__flush_i = 0U;
    vlSelfRef.weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__flush_i = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/xbar/weft_axi_xbar_flat.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->s0_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14506439031909104742ull);
    vlSelf->s0_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14649598283187814913ull);
    vlSelf->s0_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15154959921808046471ull);
    vlSelf->s0_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8492034438229615426ull);
    vlSelf->s0_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8363231350224715485ull);
    vlSelf->s0_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2201302597781774789ull);
    vlSelf->s0_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10575455560090582108ull);
    vlSelf->s0_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 289503100933863931ull);
    vlSelf->s0_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11511143790503405158ull);
    vlSelf->s0_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1918034586675210058ull);
    vlSelf->s0_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11679849352044281139ull);
    vlSelf->s0_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13711382521226855598ull);
    vlSelf->s0_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 213162712426196429ull);
    vlSelf->s0_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7216201472313659887ull);
    vlSelf->s0_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6251018292936010761ull);
    vlSelf->s0_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6488242287655429860ull);
    vlSelf->s0_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16896408658149271429ull);
    vlSelf->s0_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1140128293988313457ull);
    vlSelf->s0_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10351772731215898469ull);
    vlSelf->s0_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14274728916131114162ull);
    vlSelf->s0_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18207010701248870907ull);
    vlSelf->s0_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1535514867323981916ull);
    vlSelf->s0_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1357681681315105710ull);
    vlSelf->s0_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12638986157558934536ull);
    vlSelf->s0_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15877449718517604400ull);
    vlSelf->s0_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15814248204624848714ull);
    vlSelf->s0_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2167510195699134930ull);
    vlSelf->s0_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15940979026084936514ull);
    vlSelf->s0_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14573465149451168535ull);
    vlSelf->s0_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5024587525158620863ull);
    vlSelf->s0_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1295159954162862173ull);
    vlSelf->s0_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5833691317678870015ull);
    vlSelf->s0_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12645212267024315873ull);
    vlSelf->s0_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2962242651511152115ull);
    vlSelf->s0_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10468485945032585743ull);
    vlSelf->s1_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1528804377101784172ull);
    vlSelf->s1_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4806600139456017183ull);
    vlSelf->s1_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12358299753020668146ull);
    vlSelf->s1_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8500555016244000139ull);
    vlSelf->s1_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5697334483478134697ull);
    vlSelf->s1_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14846476237080357397ull);
    vlSelf->s1_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16003637705752158948ull);
    vlSelf->s1_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6341779068770903178ull);
    vlSelf->s1_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9529304919281838323ull);
    vlSelf->s1_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9248806163094236453ull);
    vlSelf->s1_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7021778418004557509ull);
    vlSelf->s1_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14823100616997484952ull);
    vlSelf->s1_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14103802416490713140ull);
    vlSelf->s1_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7501647561567493516ull);
    vlSelf->s1_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15094166521185746670ull);
    vlSelf->s1_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10299254867781522044ull);
    vlSelf->s1_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7994083732765223477ull);
    vlSelf->s1_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1364895338370454713ull);
    vlSelf->s1_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7660933594750156998ull);
    vlSelf->s1_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14092087661355284561ull);
    vlSelf->s1_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5878967086757832067ull);
    vlSelf->s1_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2528600574855039854ull);
    vlSelf->s1_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12544411667346058238ull);
    vlSelf->s1_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7116139459143554322ull);
    vlSelf->s1_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2916755718511560596ull);
    vlSelf->s1_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6081066182504381589ull);
    vlSelf->s1_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3394768530175101614ull);
    vlSelf->s1_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 422864801506304299ull);
    vlSelf->s1_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6874795262522984671ull);
    vlSelf->s1_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5340601124205093609ull);
    vlSelf->s1_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10523511136282549510ull);
    vlSelf->s1_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 989955371745746948ull);
    vlSelf->s1_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8700561314497879352ull);
    vlSelf->s1_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12753183312805802274ull);
    vlSelf->s1_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12583054767042664677ull);
    vlSelf->m0_axi_awid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2642025233761639000ull);
    vlSelf->m0_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9552156370117292709ull);
    vlSelf->m0_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18050524715486712338ull);
    vlSelf->m0_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7220541870784195917ull);
    vlSelf->m0_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 886921506532295506ull);
    vlSelf->m0_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3959733516767260652ull);
    vlSelf->m0_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1086056116467927437ull);
    vlSelf->m0_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 484758223167860994ull);
    vlSelf->m0_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4107822139172786802ull);
    vlSelf->m0_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1339308274720132192ull);
    vlSelf->m0_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14716865397690663101ull);
    vlSelf->m0_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10600383697176671100ull);
    vlSelf->m0_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4477283337427849586ull);
    vlSelf->m0_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3440407893561337308ull);
    vlSelf->m0_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6896136465005668667ull);
    vlSelf->m0_axi_bid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5315144611651019573ull);
    vlSelf->m0_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7299957155688045641ull);
    vlSelf->m0_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17703440014278901823ull);
    vlSelf->m0_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3404979697685140487ull);
    vlSelf->m0_axi_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7261108014014022732ull);
    vlSelf->m0_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5134548686907028894ull);
    vlSelf->m0_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16249063311703610403ull);
    vlSelf->m0_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5303206320819344407ull);
    vlSelf->m0_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4346386410634166468ull);
    vlSelf->m0_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10319129994607918842ull);
    vlSelf->m0_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6919065784839662506ull);
    vlSelf->m0_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 928739885101627375ull);
    vlSelf->m0_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14680217087274245149ull);
    vlSelf->m0_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12680691547447691288ull);
    vlSelf->m0_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13192371938081079199ull);
    vlSelf->m0_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7662423394037051495ull);
    vlSelf->m0_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8753270635268328193ull);
    vlSelf->m0_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8155355189114051661ull);
    vlSelf->m0_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15645592152264522906ull);
    vlSelf->m0_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1756374200267096602ull);
    vlSelf->m1_axi_awid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7499604433645066165ull);
    vlSelf->m1_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7836965448644323673ull);
    vlSelf->m1_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5030942315216035029ull);
    vlSelf->m1_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3653552079226749348ull);
    vlSelf->m1_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5305166525567179999ull);
    vlSelf->m1_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16743687760043066727ull);
    vlSelf->m1_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9734712325153203779ull);
    vlSelf->m1_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17697594322581510975ull);
    vlSelf->m1_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 971993952269936035ull);
    vlSelf->m1_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14978400827361479413ull);
    vlSelf->m1_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1400213356579915045ull);
    vlSelf->m1_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14705237473625497249ull);
    vlSelf->m1_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17522473107154387339ull);
    vlSelf->m1_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13843740603853409340ull);
    vlSelf->m1_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15946195134512687730ull);
    vlSelf->m1_axi_bid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6133330269176256574ull);
    vlSelf->m1_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5073228771850954242ull);
    vlSelf->m1_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8140004962376094577ull);
    vlSelf->m1_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18352175833247752283ull);
    vlSelf->m1_axi_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 514627534776854456ull);
    vlSelf->m1_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17141731120983730643ull);
    vlSelf->m1_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3731271405046692671ull);
    vlSelf->m1_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6138423057160690893ull);
    vlSelf->m1_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14119105872417308160ull);
    vlSelf->m1_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14197763457685267884ull);
    vlSelf->m1_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9127767039347779196ull);
    vlSelf->m1_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16919424385040442457ull);
    vlSelf->m1_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15712020639675656681ull);
    vlSelf->m1_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15298234923474870393ull);
    vlSelf->m1_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10830931029653987247ull);
    vlSelf->m1_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6208871029342704860ull);
    vlSelf->m1_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5127930911434161766ull);
    vlSelf->m1_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8647787435848954954ull);
    vlSelf->m1_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4304025884289228518ull);
    vlSelf->m1_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17263104517582494339ull);
    vlSelf->weft_axi_xbar_flat__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17794707394807169637ull);
    vlSelf->weft_axi_xbar_flat__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4067140572563575041ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13824788528753677043ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10238085301511780646ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11743765877859647311ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14324727130698740064ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13966049006630026241ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4930170423609732178ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12216595238735848401ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 871468582814134375ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14210055150059336474ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17069248329286906965ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1930620458600714541ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5290900039351887776ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1535823768639583058ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12974109310829144421ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14823985716836080618ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1938775952403457608ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7901488032453925068ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3877302183316934019ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17918227336246982524ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11159567683674824262ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3687679766615842719ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15307350632800935485ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3047127459048254144ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7973384566164901792ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8134811336469219942ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17788603001303139034ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13488611136483794544ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10326748545799119650ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12601635959331428321ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7477622274051636783ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11571670140978904817ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18424976168325355993ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3799956787037039726ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17089518574734870871ull);
    vlSelf->weft_axi_xbar_flat__DOT__s0_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15762059402482437368ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14564765244164772751ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2193534120493630122ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9926715520351827855ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9869451387468944818ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3184612685512187426ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16183604197195353476ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16957561440579203814ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16601260808863673795ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8689281130440385281ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4245219921996651831ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6441659547794625099ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10007592417086031268ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5792340346144570976ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12969453368866026814ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10336121699625784186ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14623566678176875805ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12989808475439231865ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11917672156111065847ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5969053389169860585ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 343267225375686005ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3473944605365453079ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2220912911349780233ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16442191942537899313ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10939041508536944393ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9772665395127991767ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6933336506186858411ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9071828044733781880ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3079282541144417021ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2233860793445666687ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10786020755057096860ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4565129739854235880ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3774539046900376895ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 926014950748850786ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17148100023948120306ull);
    vlSelf->weft_axi_xbar_flat__DOT__s1_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16124508506063790269ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 47930252503630172ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16916727518998855485ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7170007543198403404ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11052481836114008588ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14227057280463522053ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9164099300672894570ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18330552491128849670ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7518068041103384106ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8001659213356901324ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15679960466100854784ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12965702698177334913ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 132894320405376173ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14709226773012345318ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12680412647344545214ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3026802352419118925ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_bid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8001757226650886987ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14684726169462386946ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8291737149283010056ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 747442081995778973ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15779977222636226125ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6267973399050514669ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3912989775114186856ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4825130772030171478ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17027570258534963020ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6523400168156052328ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1733069795141087996ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15751267469259333474ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5809292668994727081ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3326117754688808500ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17224785838299274885ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 727502422914310128ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16796183050927562702ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4146686031345520408ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16084862746715911886ull);
    vlSelf->weft_axi_xbar_flat__DOT__m0_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12023615045637307549ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7429876719647719534ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6048189824613632669ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1743270086626591924ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7843045870714023935ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14246808004941554887ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3123513721857311641ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14972378753485946142ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11640307305552538460ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18121053544476885020ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6977288159117289371ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9266253946040490068ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4136943599469539245ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15373515305726109530ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 776225400794077431ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10544165653768083340ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_bid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3554563518276698637ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16785761640297828193ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4580456472857353065ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12834299552988567828ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11018378418516524097ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6487849766466801117ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17011591634098205630ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16594180387398444207ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11963321508307859191ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3848193133092170873ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8284571031957917108ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13259910652636601581ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17281825823940681411ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12818574447058358112ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2469614208957416778ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7770260125550049683ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17264374910863754621ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16476815184650055151ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5886717346822613702ull);
    vlSelf->weft_axi_xbar_flat__DOT__m1_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7665070102832539576ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__sreq[__Vi0], __VscopeHash, 37409148639163145ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__srsp[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 8450615407187564957ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(183, vlSelf->weft_axi_xbar_flat__DOT__mreq[__Vi0], __VscopeHash, 12972554241365790695ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__mrsp[__Vi0] = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 9731628951141920995ull);
    }
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2045379874824219062ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9935998353078300469ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__slv_reqs_i[__Vi0], __VscopeHash, 16273813881308900749ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__slv_rsps_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 1031139676262934161ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(183, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__mst_reqs_o[__Vi0], __VscopeHash, 3440103773593748141ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__mst_rsps_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 12770215904452036360ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_req[__Vi0][__Vi1], __VscopeHash, 17290746253991201011ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__demux_rsp[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 7863190655108248638ull);
        }
    }
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7007635410690378039ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14604800234492040047ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 41918993272273353ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9554212872015058463ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 963345491033783857ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15317056897155936602ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 17066209358341817591ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[__Vi0], __VscopeHash, 3465895659001771751ull);
    }
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 609512480763909771ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7508449454967220289ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6414740849823647473ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 603540928466801209ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11933402196917864606ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6879936540366061512ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 7300486859718624494ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[__Vi0], __VscopeHash, 5552685241655945091ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[__Vi0], __VscopeHash, 2722171571560271440ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 10336527675044781795ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[__Vi0], __VscopeHash, 8807657213883647252ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 9152135181323974223ull);
    }
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__addr_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8671448996765877442ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[0] = 8192U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[1] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[2] = 4096U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[3] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[4] = 1U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[5] = 4096U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[6] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[7] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[8] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__rules_i[9] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__idx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16603897073913632657ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__dec_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5733990521950550410ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__dec_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17454265080694083356ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__addr64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10296718270980135468ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__unnamedblk1__DOT__r = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__addr_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1790460759860214665ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[0] = 8192U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[1] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[2] = 4096U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[3] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[4] = 1U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[5] = 4096U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[6] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[7] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[8] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__rules_i[9] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__idx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17124297782267868314ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__dec_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15398251319038041721ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__dec_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6232330740411561559ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__addr64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17839548585184645501ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__unnamedblk1__DOT__r = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9303143290073592478ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13635095887223019597ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__slv_aw_select_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7950828028064988305ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__slv_ar_select_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 46925049827280630ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__slv_req_i, __VscopeHash, 2913180265406274634ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 18094008328053621344ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_reqs_o[__Vi0], __VscopeHash, 3091682271697822906ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__mst_rsps_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16818021257382541638ull);
    }
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13572442048311957255ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7206609523999535622ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14975597579948705561ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1871494557907247104ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7943925265970045902ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16623932456511296189ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14861687471563367431ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10273905012244172195ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7001575218003903824ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16122675941981693847ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_last_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3470969405083956710ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__unnamedblk1__DOT__m = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1938965510729513798ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13228631593421119194ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_req_i, __VscopeHash, 2521157011861425561ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16095477232969376257ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13994618329884759326ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8509302496159400846ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15707048923446201487ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8287635583631291587ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_len_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3171529705837944657ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8357513186489682802ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__addr_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13034694241250586938ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[0] = 8192U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[1] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[2] = 4096U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[3] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[4] = 1U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[5] = 4096U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[6] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[7] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[8] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__rules_i[9] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__idx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17150208615915328283ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__dec_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12993454913000403778ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__dec_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 960041827204710480ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__addr64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1142343668875293586ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__unnamedblk1__DOT__r = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__addr_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13346798629849576801ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[0] = 8192U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[1] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[2] = 4096U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[3] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[4] = 1U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[5] = 4096U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[6] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[7] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[8] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__rules_i[9] = 0U;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__idx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5633262496036023619ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__dec_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2584257075838499084ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__dec_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735547716471709374ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__addr64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12913435380765657967ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__unnamedblk1__DOT__r = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6827944497727681487ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13628981341871563225ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__slv_aw_select_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4067090158150654279ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__slv_ar_select_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12291436552997518631ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__slv_req_i, __VscopeHash, 14480438249257065320ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 8043545197297533669ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_reqs_o[__Vi0], __VscopeHash, 11165829123859711722ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__mst_rsps_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 13071429031107745097ull);
    }
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5728187087596547738ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3425720424294337631ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10949172405043937404ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11695266125570813917ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7408812922967917619ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12300456478498838905ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2461128484564728964ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8954589999618663810ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16037958751781559351ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8236921541396451684ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_last_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16084219687806867043ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__unnamedblk1__DOT__m = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12770825907995416769ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1482007596984872984ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_req_i, __VscopeHash, 6644490712240263386ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 11155037210815235392ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1018618513657052965ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9224667108290389741ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1584047799667353710ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9027631238335827753ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_len_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16206757811850270265ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16866400150712083082ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12631157899751836337ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18004622041094772188ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_reqs_i[__Vi0], __VscopeHash, 10564510114775455217ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__slv_rsps_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 12581834489175543206ull);
    }
    VL_SCOPED_RAND_RESET_W(183, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__mst_req_o, __VscopeHash, 9180889181854589964ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__mst_rsp_i = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 17158703524838225452ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9645038620785568922ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3194313182636261163ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7696184743125280200ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3756606602963654623ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6296149550097670960ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5882972103466036492ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_arb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5581793485219350667ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_arb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9458647808641471202ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18267711883720501053ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16152498964206131180ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 77616385476852908ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5387811510992838369ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13335144845203304784ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6115318080910933017ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7955913954112384415ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__b_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13901195426874472028ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__r_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6632588655815002128ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__sel_aw_bits, __VscopeHash, 14145926379758123984ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__sel_ar_bits, __VscopeHash, 13296658305263946188ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__b_bits = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11658608973839917067ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__r_bits = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 9096003473479938269ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18157711593063303870ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4932996369130795360ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__req_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12768455958461141880ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11976261425629196949ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__grant_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14212222842361147310ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 252055478859527463ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8751651787909752673ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7426170308313452830ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3344356201392627603ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3554265345150900180ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12294983087293881803ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 909959276221138153ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18203234890113504679ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11617221088130538584ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1275645117504683217ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__req_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14939166964666639192ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13654523576142519434ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__grant_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3206817969382307333ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12769417029375094893ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3236633027730829221ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1090160216960569652ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15025598017421455251ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17014003222570415228ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1946588258930613923ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8857638778451312732ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9754091260829749782ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5719275010694935788ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2801196182991907962ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__flush_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15902780814870533023ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wdata_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434966173077708077ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__push_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15065864931461243854ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3171142667206337884ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10683511967391492716ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__pop_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5299444857664260303ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__empty_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1349157353892712936ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17800229553271059210ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12956160374780499598ull);
    }
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17854014296195970253ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16273161363110218007ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1277565939058409002ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16956045809570951578ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14217433900474996776ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1072692260354089523ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4253954492644356805ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_reqs_i[__Vi0], __VscopeHash, 3402458889869183092ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__slv_rsps_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16571195485445620702ull);
    }
    VL_SCOPED_RAND_RESET_W(183, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__mst_req_o, __VscopeHash, 4114027633829569996ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__mst_rsp_i = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 1374449609038425096ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5481251535253551890ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 372863045405575644ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16446700520503167051ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1394936444973585675ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16608673514552996421ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3786299985729689092ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_arb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14058738100241155119ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_arb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14208998182832067837ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11688137241392602966ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12941183680057072101ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15691076594722830685ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15102624737089016454ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7291654119867867364ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12546088937700327194ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1915822212585137131ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__b_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1881457507617088780ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__r_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6007319088864266510ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__sel_aw_bits, __VscopeHash, 5707424543557578290ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__sel_ar_bits, __VscopeHash, 11124413583132296680ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__b_bits = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8562627408756228096ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__r_bits = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 2001211957934330267ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14217696448634452075ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5901681360578589510ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__req_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15281576136192728839ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11301597650304351643ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__grant_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5542904388816852903ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16194591141834487850ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14065234241300847350ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8883004377409401839ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14820149229849989861ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5665737954732798435ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12889772314664506699ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6861142372888166903ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6696204739373705044ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12535470617655602256ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7743801838665706721ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__req_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16149927330295904222ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18434511577269820877ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__grant_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9248501291672854744ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 974240479182487607ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16822925581601019757ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12699498268574957662ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1821837473509478718ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11068598234550052133ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10509293413771600265ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16957919394623366917ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4727815287274109535ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11714924692654511191ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3729614122656198286ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__flush_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17392674139576813372ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wdata_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10142406602678109826ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__push_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4121055632781665515ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4446733351472386063ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1114639754409067523ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__pop_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 841599915884664103ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__empty_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1441228103444990749ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1335044768802960509ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13829733079156670501ull);
    }
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12089817051266261396ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10316103216481705759ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17493499161369971010ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6545679412450112268ull);
    vlSelf->weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8520458839275806766ull);
    vlSelf->__Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4013520602035859475ull);
    vlSelf->__Vdly__weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8583117861958917333ull);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668644789224949103ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2605432789578622122ull);
}
