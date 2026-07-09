// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_exec_sv.h for the primary calling header

#include "Vtb_exec_sv__pch.h"
#include "Vtb_exec_sv___024root.h"

VL_ATTR_COLD void Vtb_exec_sv___024root___eval_static__TOP(Vtb_exec_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_exec_sv___024root___eval_static(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_static\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_exec_sv___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_exec_sv___024root___eval_static__TOP(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_static__TOP\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_exec_sv__DOT__errors = 0U;
}

VL_ATTR_COLD void Vtb_exec_sv___024root___eval_final(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_final\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_exec_sv___024root___dump_triggers__stl(Vtb_exec_sv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_exec_sv___024root___eval_phase__stl(Vtb_exec_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_exec_sv___024root___eval_settle(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_settle\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_exec_sv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/exec/tb_exec_sv.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_exec_sv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_exec_sv___024root___dump_triggers__stl(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___dump_triggers__stl\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_exec_sv___024root___act_sequent__TOP__0(Vtb_exec_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_exec_sv___024root___eval_stl(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_stl\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_exec_sv___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_exec_sv___024root___eval_triggers__stl(Vtb_exec_sv___024root* vlSelf);

VL_ATTR_COLD bool Vtb_exec_sv___024root___eval_phase__stl(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_phase__stl\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_exec_sv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_exec_sv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_exec_sv___024root___dump_triggers__act(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___dump_triggers__act\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_exec_sv___024root___dump_triggers__nba(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___dump_triggers__nba\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_exec_sv___024root___ctor_var_reset(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___ctor_var_reset\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_exec_sv__DOT__errors = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    for (int __Vi0 = 0; __Vi0 < 400; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(100, vlSelf->tb_exec_sv__DOT__av[__Vi0], __VscopeHash, 11807567657861988169ull);
    }
    vlSelf->tb_exec_sv__DOT__aop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13352616967060992866ull);
    vlSelf->tb_exec_sv__DOT__aa = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9152359961546208561ull);
    vlSelf->tb_exec_sv__DOT__ab = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16658021607159402480ull);
    vlSelf->tb_exec_sv__DOT__ares = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13727955651650275473ull);
    vlSelf->tb_exec_sv__DOT__aexp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11718046689981019130ull);
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->tb_exec_sv__DOT__bv[__Vi0], __VscopeHash, 18082755166845390722ull);
    }
    vlSelf->tb_exec_sv__DOT__bop = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11809392843649256608ull);
    vlSelf->tb_exec_sv__DOT__ba = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2684251289181668909ull);
    vlSelf->tb_exec_sv__DOT__bb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16351078808337210868ull);
    vlSelf->tb_exec_sv__DOT__bt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12004135980870972753ull);
    vlSelf->tb_exec_sv__DOT__bexp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17158727224595923999ull);
    }
