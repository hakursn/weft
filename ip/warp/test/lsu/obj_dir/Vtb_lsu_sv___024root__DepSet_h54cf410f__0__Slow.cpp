// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lsu_sv.h for the primary calling header

#include "Vtb_lsu_sv__pch.h"
#include "Vtb_lsu_sv___024root.h"

VL_ATTR_COLD void Vtb_lsu_sv___024root___eval_static__TOP(Vtb_lsu_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_lsu_sv___024root___eval_static(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_static\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_lsu_sv___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lsu_sv__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lsu_sv__DOT__rst_n__0 = 0U;
}

VL_ATTR_COLD void Vtb_lsu_sv___024root___eval_static__TOP(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_static__TOP\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lsu_sv__DOT__clk = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rst_n = 0U;
    vlSelfRef.tb_lsu_sv__DOT__errors = 0U;
}

VL_ATTR_COLD void Vtb_lsu_sv___024root___eval_final(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_final\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lsu_sv___024root___dump_triggers__stl(Vtb_lsu_sv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_lsu_sv___024root___eval_phase__stl(Vtb_lsu_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_lsu_sv___024root___eval_settle(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_settle\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_lsu_sv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_lsu_sv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lsu_sv___024root___dump_triggers__stl(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___dump_triggers__stl\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_lsu_sv___024root___stl_sequent__TOP__0(Vtb_lsu_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_lsu_sv___024root___eval_stl(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_stl\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_lsu_sv___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_lsu_sv___024root___stl_sequent__TOP__0(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___stl_sequent__TOP__0\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lsu_sv__DOT__rs = 0ULL;
    vlSelfRef.tb_lsu_sv__DOT__rs = ((0x3ffffffffffffULL 
                                     & vlSelfRef.tb_lsu_sv__DOT__rs) 
                                    | ((QData)((IData)(
                                                       (((0U 
                                                          == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws)) 
                                                         << 1U) 
                                                        | (1U 
                                                           == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws))))) 
                                       << 0x32U));
    vlSelfRef.tb_lsu_sv__DOT__rs = ((0xffbffffffffffULL 
                                     & vlSelfRef.tb_lsu_sv__DOT__rs) 
                                    | ((QData)((IData)(
                                                       (2U 
                                                        == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws)))) 
                                       << 0x2aU));
    vlSelfRef.tb_lsu_sv__DOT__rs = ((0xc0fffffffffffULL 
                                     & vlSelfRef.tb_lsu_sv__DOT__rs) 
                                    | ((QData)((IData)(
                                                       ((IData)(vlSelfRef.tb_lsu_sv__DOT__wid) 
                                                        << 2U))) 
                                       << 0x2cU));
    vlSelfRef.tb_lsu_sv__DOT__rs = ((0xffdffffffffffULL 
                                     & vlSelfRef.tb_lsu_sv__DOT__rs) 
                                    | ((QData)((IData)(
                                                       (3U 
                                                        == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s)))) 
                                       << 0x29U));
    vlSelfRef.tb_lsu_sv__DOT__rs = ((0xffffffffffffeULL 
                                     & vlSelfRef.tb_lsu_sv__DOT__rs) 
                                    | (IData)((IData)(
                                                      (5U 
                                                       == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s)))));
    vlSelfRef.tb_lsu_sv__DOT__rs = ((0xffe000000001fULL 
                                     & vlSelfRef.tb_lsu_sv__DOT__rs) 
                                    | (((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__rid2)) 
                                        << 0x25U) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.tb_lsu_sv__DOT__mem
                                                        [
                                                        (0xffU 
                                                         & (vlSelfRef.tb_lsu_sv__DOT__ra 
                                                            >> 2U))])) 
                                        << 5U)));
    vlSelfRef.tb_lsu_sv__DOT__rs = (4ULL | (0xfffffffffffe3ULL 
                                            & vlSelfRef.tb_lsu_sv__DOT__rs));
    vlSelfRef.tb_lsu_sv__DOT__rq[0U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[1U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[3U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[4U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[5U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[0U] = ((0x7ffffU & 
                                         vlSelfRef.tb_lsu_sv__DOT__rq[0U]) 
                                        | ((IData)(
                                                   (9ULL 
                                                    | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                       << 0xdU))) 
                                           << 0x13U));
    vlSelfRef.tb_lsu_sv__DOT__rq[1U] = (((IData)((9ULL 
                                                  | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                     << 0xdU))) 
                                         >> 0xdU) | 
                                        ((IData)(((9ULL 
                                                   | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                      << 0xdU)) 
                                                  >> 0x20U)) 
                                         << 0x13U));
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = ((0xfffffff0U 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[2U]) 
                                        | ((IData)(
                                                   ((9ULL 
                                                     | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                        << 0xdU)) 
                                                    >> 0x20U)) 
                                           >> 0xdU));
    vlSelfRef.tb_lsu_sv__DOT__rq[0U] = ((0xfffffffdU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[0U]) 
                                        | ((((0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                             & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_req)) 
                                            & (~ (IData)(vlSelfRef.tb_lsu_sv__DOT__d_we))) 
                                           << 1U));
    vlSelfRef.tb_lsu_sv__DOT__rq[0U] = ((0xfffffffeU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[0U]) 
                                        | (1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)));
    vlSelfRef.tb_lsu_sv__DOT__rq[4U] = ((0xfU & vlSelfRef.tb_lsu_sv__DOT__rq[4U]) 
                                        | ((IData)(
                                                   (9ULL 
                                                    | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                       << 0xdU))) 
                                           << 4U));
    vlSelfRef.tb_lsu_sv__DOT__rq[5U] = (0x1fffffU & 
                                        (((IData)((9ULL 
                                                   | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                      << 0xdU))) 
                                          >> 0x1cU) 
                                         | ((IData)(
                                                    ((9ULL 
                                                      | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                         << 0xdU)) 
                                                     >> 0x20U)) 
                                            << 4U)));
    vlSelfRef.tb_lsu_sv__DOT__rq[3U] = ((0xffffefffU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[3U]) 
                                        | (((((0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                              & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_req)) 
                                             & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_we)) 
                                            & (~ (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_ok_q))) 
                                           << 0xcU));
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = ((0x7fU & vlSelfRef.tb_lsu_sv__DOT__rq[2U]) 
                                        | ((IData)(
                                                   (((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wdata)) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      (1U 
                                                                       | ((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wstrb) 
                                                                          << 1U)))))) 
                                           << 7U));
    vlSelfRef.tb_lsu_sv__DOT__rq[3U] = ((0xfffff000U 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[3U]) 
                                        | (((IData)(
                                                    (((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wdata)) 
                                                      << 5U) 
                                                     | (QData)((IData)(
                                                                       (1U 
                                                                        | ((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wstrb) 
                                                                           << 1U)))))) 
                                            >> 0x19U) 
                                           | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wdata)) 
                                                         << 5U) 
                                                        | (QData)((IData)(
                                                                          (1U 
                                                                           | ((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wstrb) 
                                                                              << 1U))))) 
                                                       >> 0x20U)) 
                                              << 7U)));
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = ((0xffffffdfU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[2U]) 
                                        | (((((0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                              & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_req)) 
                                             & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_we)) 
                                            & (~ (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_ok_q))) 
                                           << 5U));
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = ((0xffffffefU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[2U]) 
                                        | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                           << 4U));
    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_hs = ((vlSelfRef.tb_lsu_sv__DOT__rq[3U] 
                                                  >> 0xcU) 
                                                 & (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                    >> 0x33U));
    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_hs = (1U 
                                                & ((vlSelfRef.tb_lsu_sv__DOT__rq[2U] 
                                                    >> 5U) 
                                                   & (IData)(
                                                             (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                              >> 0x32U))));
    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_done = ((IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_ok_q) 
                                                   | (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_hs));
    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_done = ((IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_ok_q) 
                                                  | (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_hs));
}

VL_ATTR_COLD void Vtb_lsu_sv___024root___eval_triggers__stl(Vtb_lsu_sv___024root* vlSelf);

VL_ATTR_COLD bool Vtb_lsu_sv___024root___eval_phase__stl(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_phase__stl\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_lsu_sv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_lsu_sv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lsu_sv___024root___dump_triggers__act(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___dump_triggers__act\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_lsu_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_lsu_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_lsu_sv.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lsu_sv___024root___dump_triggers__nba(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___dump_triggers__nba\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_lsu_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_lsu_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_lsu_sv.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_lsu_sv___024root___ctor_var_reset(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___ctor_var_reset\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_lsu_sv__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9674352403708361043ull);
    vlSelf->tb_lsu_sv__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3471798492668438142ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_lsu_sv__DOT__rq, __VscopeHash, 7523036779470034249ull);
    vlSelf->tb_lsu_sv__DOT__rs = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 18060084587381800636ull);
    vlSelf->tb_lsu_sv__DOT__errors = 0;
    vlSelf->tb_lsu_sv__DOT__d_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11204661289769814764ull);
    vlSelf->tb_lsu_sv__DOT__d_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7791195823626883735ull);
    vlSelf->tb_lsu_sv__DOT__d_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10876131310892832773ull);
    vlSelf->tb_lsu_sv__DOT__d_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13471301963309504037ull);
    vlSelf->tb_lsu_sv__DOT__d_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4454069811606977882ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_lsu_sv__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14585066328428988964ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_lsu_sv__DOT__shadow[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18042371254879220912ull);
    }
    vlSelf->tb_lsu_sv__DOT__ws = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9798194998477155792ull);
    vlSelf->tb_lsu_sv__DOT__r_s = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14847859656766503236ull);
    vlSelf->tb_lsu_sv__DOT__wa = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16526059593507780285ull);
    vlSelf->tb_lsu_sv__DOT__ra = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5279534746511721912ull);
    vlSelf->tb_lsu_sv__DOT__wid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12171616138345379261ull);
    vlSelf->tb_lsu_sv__DOT__rid2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8618887406224373739ull);
    vlSelf->tb_lsu_sv__DOT__rdly = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13016374241810914136ull);
    vlSelf->tb_lsu_sv__DOT__dut__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16001117659115179002ull);
    vlSelf->tb_lsu_sv__DOT__dut__DOT__aw_ok_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12868246032026376153ull);
    vlSelf->tb_lsu_sv__DOT__dut__DOT__w_ok_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4157817366301136314ull);
    vlSelf->tb_lsu_sv__DOT__dut__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17874682122155420045ull);
    vlSelf->tb_lsu_sv__DOT__dut__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12262525593528014199ull);
    vlSelf->tb_lsu_sv__DOT__dut__DOT__aw_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9120488712806889409ull);
    vlSelf->tb_lsu_sv__DOT__dut__DOT__w_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9649404723790862847ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_lsu_sv__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7887693604770173922ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_lsu_sv__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1166928232354809942ull);
}
