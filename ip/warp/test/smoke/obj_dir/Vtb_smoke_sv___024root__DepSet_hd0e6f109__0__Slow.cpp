// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_smoke_sv.h for the primary calling header

#include "Vtb_smoke_sv__pch.h"
#include "Vtb_smoke_sv___024root.h"

VL_ATTR_COLD void Vtb_smoke_sv___024root___eval_static__TOP(Vtb_smoke_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_smoke_sv___024root___eval_static(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_static\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_smoke_sv___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__rst_n__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__done__0 = 0U;
}

VL_ATTR_COLD void Vtb_smoke_sv___024root___eval_static__TOP(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_static__TOP\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_smoke_sv__DOT__clk = 0U;
    vlSelfRef.tb_smoke_sv__DOT__rst_n = 0U;
    vlSelfRef.tb_smoke_sv__DOT__done = 0U;
    vlSelfRef.tb_smoke_sv__DOT__retired = 0U;
}

VL_ATTR_COLD void Vtb_smoke_sv___024root___eval_final(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_final\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_smoke_sv___024root___dump_triggers__stl(Vtb_smoke_sv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_smoke_sv___024root___eval_phase__stl(Vtb_smoke_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_smoke_sv___024root___eval_settle(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_settle\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_smoke_sv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_smoke_sv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_smoke_sv___024root___dump_triggers__stl(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___dump_triggers__stl\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_smoke_sv___024root___stl_sequent__TOP__0(Vtb_smoke_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_smoke_sv___024root___eval_stl(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_stl\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_smoke_sv___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_smoke_sv___024root___eval_triggers__stl(Vtb_smoke_sv___024root* vlSelf);

VL_ATTR_COLD bool Vtb_smoke_sv___024root___eval_phase__stl(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_phase__stl\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_smoke_sv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_smoke_sv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_smoke_sv___024root___dump_triggers__act(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___dump_triggers__act\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_smoke_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_smoke_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb_smoke_sv.done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_smoke_sv___024root___dump_triggers__nba(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___dump_triggers__nba\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_smoke_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_smoke_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb_smoke_sv.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_smoke_sv___024root___ctor_var_reset(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___ctor_var_reset\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_smoke_sv__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7741113256955730551ull);
    vlSelf->tb_smoke_sv__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5512900437034161467ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_smoke_sv__DOT__ireq, __VscopeHash, 7563259912192944279ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_smoke_sv__DOT__dreq, __VscopeHash, 10628099668846155283ull);
    vlSelf->tb_smoke_sv__DOT__irsp = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 5638411315044385869ull);
    vlSelf->tb_smoke_sv__DOT__drsp = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 127412765387123587ull);
    vlSelf->tb_smoke_sv__DOT__rv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12131066240557173381ull);
    vlSelf->tb_smoke_sv__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6675823792480603448ull);
    vlSelf->tb_smoke_sv__DOT__retired = 0;
    vlSelf->tb_smoke_sv__DOT__mem.atDefault() = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13669434668124255291ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_smoke_sv__DOT__prog[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13701252778997603990ull);
    }
    vlSelf->tb_smoke_sv__DOT__ist = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6800587064794619149ull);
    vlSelf->tb_smoke_sv__DOT__iaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16746042102344831829ull);
    vlSelf->tb_smoke_sv__DOT__iid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 888577700055610927ull);
    vlSelf->tb_smoke_sv__DOT__dst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15052430118683852890ull);
    vlSelf->tb_smoke_sv__DOT__daddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6811237219573189894ull);
    vlSelf->tb_smoke_sv__DOT__did = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3943317493034561343ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__f_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11364452444910542686ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__c_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14914111753967845174ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17588627037244637617ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1959325719512398959ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15538712277570977441ull);
    VL_SCOPED_RAND_RESET_W(69, vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d, __VscopeHash, 7135024951265990058ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4170270467081235774ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4428082939229485543ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6197750606295073188ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_half = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11615090193637495984ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18224576541269544444ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__is_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13693981585388635001ull);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3329395607187345480ull);
    }
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT____Vlvbound_h6a58ae27__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17888743791254526674ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16308159875542850468ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_if__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6151101423177324452ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16719902834878976733ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4991933172615693310ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10420470970690907874ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8981425765408747385ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12047008108298815684ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1899967292137939501ull);
    vlSelf->tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8510798512116263797ull);
    vlSelf->__Vdly__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17581623377325817444ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17378399151654522791ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17536105772813183429ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__done__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3104672624889577686ull);
    vlSelf->__VactDidInit = 0;
}
