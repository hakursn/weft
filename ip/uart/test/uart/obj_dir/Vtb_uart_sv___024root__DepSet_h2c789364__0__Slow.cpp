// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_sv.h for the primary calling header

#include "Vtb_uart_sv__pch.h"
#include "Vtb_uart_sv___024root.h"

VL_ATTR_COLD void Vtb_uart_sv___024root___eval_static__TOP(Vtb_uart_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_uart_sv___024root___eval_static(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___eval_static\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_uart_sv___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__rst_n__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__tx__0 
        = vlSelfRef.tb_uart_sv__DOT__tx;
}

VL_ATTR_COLD void Vtb_uart_sv___024root___eval_static__TOP(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___eval_static__TOP\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_sv__DOT__clk = 0U;
    vlSelfRef.tb_uart_sv__DOT__rst_n = 0U;
    vlSelfRef.tb_uart_sv__DOT__errors = 0U;
}

VL_ATTR_COLD void Vtb_uart_sv___024root___eval_final(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___eval_final\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_sv___024root___dump_triggers__stl(Vtb_uart_sv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_uart_sv___024root___eval_phase__stl(Vtb_uart_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_uart_sv___024root___eval_settle(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___eval_settle\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_uart_sv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/uart/test/uart/tb_uart_sv.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_uart_sv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_sv___024root___dump_triggers__stl(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___dump_triggers__stl\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_uart_sv___024root___stl_sequent__TOP__0(Vtb_uart_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_uart_sv___024root___eval_stl(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___eval_stl\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_uart_sv___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_uart_sv___024root___stl_sequent__TOP__0(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___stl_sequent__TOP__0\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_sv__DOT__tx = (1U & ((0U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_bits)) 
                                           | (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_sh)));
    vlSelfRef.tb_uart_sv__DOT__rsp = 0ULL;
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0xfffffffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         (((0U 
                                                            == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)) 
                                                           << 1U) 
                                                          | (1U 
                                                             == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q))))) 
                                         << 0x34U));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3ff7ffffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         (2U 
                                                          == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)))) 
                                         << 0x2bU));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x301fffffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         ((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__wid_q) 
                                                          << 2U))) 
                                         << 0x2dU));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3ffbffffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q))))) 
                                         << 0x2aU));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3ffffffffffffeULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | (IData)((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q)));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3ffc1fffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__rid_q)) 
                                         << 0x25U));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3fffe00000001fULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__raddr_q) 
                                                               >> 2U)))
                                                           ? 
                                                          (0U 
                                                           != (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_bits))
                                                           : 0U))) 
                                         << 5U));
    vlSelfRef.tb_uart_sv__DOT__rsp = (4ULL | (0x3fffffffffffe3ULL 
                                              & vlSelfRef.tb_uart_sv__DOT__rsp));
}

VL_ATTR_COLD void Vtb_uart_sv___024root___eval_triggers__stl(Vtb_uart_sv___024root* vlSelf);

VL_ATTR_COLD bool Vtb_uart_sv___024root___eval_phase__stl(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___eval_phase__stl\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_uart_sv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_uart_sv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_sv___024root___dump_triggers__act(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___dump_triggers__act\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_uart_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_uart_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_uart_sv.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge tb_uart_sv.tx)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_sv___024root___dump_triggers__nba(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___dump_triggers__nba\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_uart_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_uart_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_uart_sv.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge tb_uart_sv.tx)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_uart_sv___024root___ctor_var_reset(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___ctor_var_reset\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_uart_sv__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 347677891245727100ull);
    vlSelf->tb_uart_sv__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18105468249081590788ull);
    VL_SCOPED_RAND_RESET_W(183, vlSelf->tb_uart_sv__DOT__req, __VscopeHash, 1903667490806357773ull);
    vlSelf->tb_uart_sv__DOT__rsp = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 8944135924842154022ull);
    vlSelf->tb_uart_sv__DOT__tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13967601556758478942ull);
    vlSelf->tb_uart_sv__DOT__errors = 0;
    vlSelf->tb_uart_sv__DOT__got = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2576979553677809251ull);
    vlSelf->tb_uart_sv__DOT__dut__DOT__w_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18155690629347927913ull);
    vlSelf->tb_uart_sv__DOT__dut__DOT__waddr_q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10574478084593255148ull);
    vlSelf->tb_uart_sv__DOT__dut__DOT__wid_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1598276359310973065ull);
    vlSelf->tb_uart_sv__DOT__dut__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9674868326742128534ull);
    vlSelf->tb_uart_sv__DOT__dut__DOT__raddr_q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9042235487668330141ull);
    vlSelf->tb_uart_sv__DOT__dut__DOT__rid_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15620250686753881427ull);
    vlSelf->tb_uart_sv__DOT__dut__DOT__tx_sh = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11528283414917894676ull);
    vlSelf->tb_uart_sv__DOT__dut__DOT__tx_bits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8506641391076424776ull);
    vlSelf->tb_uart_sv__DOT__dut__DOT__tx_div = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4847460927958455764ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_sv__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4882104727526972982ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_sv__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1249289236771263626ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_sv__DOT__tx__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7579820022848570586ull);
}
