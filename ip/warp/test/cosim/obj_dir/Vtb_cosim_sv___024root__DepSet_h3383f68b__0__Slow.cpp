// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cosim_sv.h for the primary calling header

#include "Vtb_cosim_sv__pch.h"
#include "Vtb_cosim_sv___024root.h"

VL_ATTR_COLD void Vtb_cosim_sv___024root___eval_static__TOP(Vtb_cosim_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_cosim_sv___024root___eval_static(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_static\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cosim_sv___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cosim_sv__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cosim_sv__DOT__rst_n__0 = 0U;
}

VL_ATTR_COLD void Vtb_cosim_sv___024root___eval_static__TOP(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_static__TOP\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cosim_sv__DOT__clk = 0U;
    vlSelfRef.tb_cosim_sv__DOT__rst_n = 0U;
    vlSelfRef.tb_cosim_sv__DOT__retired = 0U;
}

VL_ATTR_COLD void Vtb_cosim_sv___024root___eval_final(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_final\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cosim_sv___024root___dump_triggers__stl(Vtb_cosim_sv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cosim_sv___024root___eval_phase__stl(Vtb_cosim_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_cosim_sv___024root___eval_settle(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_settle\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_cosim_sv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/tb_cosim_sv.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_cosim_sv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cosim_sv___024root___dump_triggers__stl(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___dump_triggers__stl\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_cosim_sv___024root___stl_sequent__TOP__0(Vtb_cosim_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_cosim_sv___024root___eval_stl(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_stl\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_cosim_sv___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_cosim_sv___024root___eval_triggers__stl(Vtb_cosim_sv___024root* vlSelf);

VL_ATTR_COLD bool Vtb_cosim_sv___024root___eval_phase__stl(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_phase__stl\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cosim_sv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_cosim_sv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cosim_sv___024root___dump_triggers__act(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___dump_triggers__act\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_cosim_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_cosim_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cosim_sv___024root___dump_triggers__nba(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___dump_triggers__nba\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_cosim_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_cosim_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cosim_sv___024root___ctor_var_reset(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___ctor_var_reset\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_cosim_sv__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14579412640393147041ull);
    vlSelf->tb_cosim_sv__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5392334863261169930ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_cosim_sv__DOT__ireq, __VscopeHash, 3834885800322348969ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_cosim_sv__DOT__dreq, __VscopeHash, 7289007363994113265ull);
    vlSelf->tb_cosim_sv__DOT__irsp = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 2723727780702668923ull);
    vlSelf->tb_cosim_sv__DOT__drsp = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 1879746553023691650ull);
    vlSelf->tb_cosim_sv__DOT__rv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15972102339784076325ull);
    vlSelf->tb_cosim_sv__DOT__ftr = 0;
    vlSelf->tb_cosim_sv__DOT__fmem = 0;
    vlSelf->tb_cosim_sv__DOT__retired = 0;
    vlSelf->tb_cosim_sv__DOT__mem.atDefault() = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2769595133021041989ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_cosim_sv__DOT__prog[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10844022329310201594ull);
    }
    vlSelf->tb_cosim_sv__DOT__ist = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2376351273253868498ull);
    vlSelf->tb_cosim_sv__DOT__iaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9426210556861357251ull);
    vlSelf->tb_cosim_sv__DOT__iid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18400488683466180943ull);
    vlSelf->tb_cosim_sv__DOT__dst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16994826958803271647ull);
    vlSelf->tb_cosim_sv__DOT__daddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17146453985614749798ull);
    vlSelf->tb_cosim_sv__DOT__did = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5991073769200149679ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__f_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17526929175242533519ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__c_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13161671610601985706ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13361348484206463242ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5135684665114317654ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6189777862044957252ull);
    VL_SCOPED_RAND_RESET_W(69, vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d, __VscopeHash, 10533475259211712646ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rf_wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15910358088795305560ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11893772211910013944ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10266044549058742910ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16939230493057003165ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__is_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1140745723419190987ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT____VdfgRegularize_h96dfe7f7_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16425718911739279871ull);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7814816802430407227ull);
    }
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT____Vlvbound_h6a58ae27__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3363224275323919073ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_if__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8150969933786715405ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_if__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12995319401608461300ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5254458230996459005ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596121145682047085ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 79902936931586429ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4299689950458228565ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12838754638845177533ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4959663390954074976ull);
    vlSelf->tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9961513048049270416ull);
    vlSelf->__Vdly__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17916252396073587959ull);
    vlSelf->__VdlyVal__tb_cosim_sv__DOT__mem__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 826136342772437542ull);
    vlSelf->__VdlySet__tb_cosim_sv__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_cosim_sv__DOT__mem__v1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1350591960723624040ull);
    vlSelf->__VdlySet__tb_cosim_sv__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_cosim_sv__DOT__mem__v2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16470948069736952172ull);
    vlSelf->__VdlySet__tb_cosim_sv__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__tb_cosim_sv__DOT__mem__v3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3572634209779584239ull);
    vlSelf->__VdlySet__tb_cosim_sv__DOT__mem__v3 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cosim_sv__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10371087744604154096ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_cosim_sv__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8901450106761826686ull);
}
