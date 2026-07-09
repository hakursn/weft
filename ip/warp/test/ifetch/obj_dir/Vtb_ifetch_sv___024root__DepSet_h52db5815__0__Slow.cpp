// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ifetch_sv.h for the primary calling header

#include "Vtb_ifetch_sv__pch.h"
#include "Vtb_ifetch_sv___024root.h"

VL_ATTR_COLD void Vtb_ifetch_sv___024root___eval_static__TOP(Vtb_ifetch_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_ifetch_sv___024root___eval_static(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_static\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ifetch_sv___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__rst_n__0 = 0U;
}

VL_ATTR_COLD void Vtb_ifetch_sv___024root___eval_static__TOP(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_static__TOP\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ifetch_sv__DOT__clk = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rst_n = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__errors = 0U;
}

VL_ATTR_COLD void Vtb_ifetch_sv___024root___eval_final(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_final\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ifetch_sv___024root___dump_triggers__stl(Vtb_ifetch_sv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ifetch_sv___024root___eval_phase__stl(Vtb_ifetch_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_ifetch_sv___024root___eval_settle(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_settle\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_ifetch_sv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_ifetch_sv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ifetch_sv___024root___dump_triggers__stl(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___dump_triggers__stl\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_ifetch_sv___024root___stl_sequent__TOP__0(Vtb_ifetch_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_ifetch_sv___024root___eval_stl(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_stl\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_ifetch_sv___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_ifetch_sv___024root___stl_sequent__TOP__0(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___stl_sequent__TOP__0\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ifetch_sv__DOT__rq[0U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[1U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[2U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[3U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[4U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[5U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[0U] = (0x480000U 
                                           | (0x7ffffU 
                                              & vlSelfRef.tb_ifetch_sv__DOT__rq[0U]));
    vlSelfRef.tb_ifetch_sv__DOT__rq[1U] = (IData)((QData)((IData)(
                                                                  (0xfffffffcU 
                                                                   & vlSelfRef.tb_ifetch_sv__DOT__f_pc))));
    vlSelfRef.tb_ifetch_sv__DOT__rq[2U] = ((0xfffffff0U 
                                            & vlSelfRef.tb_ifetch_sv__DOT__rq[2U]) 
                                           | (IData)(
                                                     ((QData)((IData)(
                                                                      (0xfffffffcU 
                                                                       & vlSelfRef.tb_ifetch_sv__DOT__f_pc))) 
                                                      >> 0x20U)));
    vlSelfRef.tb_ifetch_sv__DOT__rq[0U] = ((0xfffffffcU 
                                            & vlSelfRef.tb_ifetch_sv__DOT__rq[0U]) 
                                           | ((((~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q)) 
                                                & (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_req)) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q)));
    vlSelfRef.tb_ifetch_sv__DOT__rs = 0ULL;
    vlSelfRef.tb_ifetch_sv__DOT__rs = ((0xffdffffffffffULL 
                                        & vlSelfRef.tb_ifetch_sv__DOT__rs) 
                                       | ((QData)((IData)(
                                                          (0U 
                                                           == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st)))) 
                                          << 0x29U));
    vlSelfRef.tb_ifetch_sv__DOT__rs = ((0xffffffffffffeULL 
                                        & vlSelfRef.tb_ifetch_sv__DOT__rs) 
                                       | (IData)((IData)(
                                                         (2U 
                                                          == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st)))));
    VL_ASSIGNSEL_QQ(52,36,5U, vlSelfRef.tb_ifetch_sv__DOT__rs, 
                    (((QData)((IData)(vlSelfRef.tb_ifetch_sv__DOT__rid)) 
                      << 0x20U) | (QData)((IData)(([&]() {
                            vlSelfRef.__Vfunc_tb_ifetch_sv__DOT__imem__0__addr 
                                = vlSelfRef.tb_ifetch_sv__DOT__raddr;
                            vlSelfRef.__Vfunc_tb_ifetch_sv__DOT__imem__0__Vfuncout 
                                = ((IData)(0xaabb0000U) 
                                   + VL_SHIFTR_III(32,32,32, 
                                                   (vlSelfRef.__Vfunc_tb_ifetch_sv__DOT__imem__0__addr 
                                                    - (IData)(0x80000000U)), 2U));
                        }(), vlSelfRef.__Vfunc_tb_ifetch_sv__DOT__imem__0__Vfuncout)))));
    vlSelfRef.tb_ifetch_sv__DOT__rs = (4ULL | (0xfffffffffffe3ULL 
                                               & vlSelfRef.tb_ifetch_sv__DOT__rs));
    vlSelfRef.tb_ifetch_sv__DOT__f_rvalid = (((IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q) 
                                              & (IData)(vlSelfRef.tb_ifetch_sv__DOT__rs)) 
                                             & ((IData)(vlSelfRef.tb_ifetch_sv__DOT__f_req) 
                                                & (vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__addr_q 
                                                   == 
                                                   (0xfffffffcU 
                                                    & vlSelfRef.tb_ifetch_sv__DOT__f_pc))));
}

VL_ATTR_COLD void Vtb_ifetch_sv___024root___eval_triggers__stl(Vtb_ifetch_sv___024root* vlSelf);

VL_ATTR_COLD bool Vtb_ifetch_sv___024root___eval_phase__stl(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_phase__stl\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_ifetch_sv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_ifetch_sv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ifetch_sv___024root___dump_triggers__act(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___dump_triggers__act\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_ifetch_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_ifetch_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_ifetch_sv.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ifetch_sv___024root___dump_triggers__nba(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___dump_triggers__nba\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_ifetch_sv.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_ifetch_sv.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_ifetch_sv.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ifetch_sv___024root___ctor_var_reset(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___ctor_var_reset\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_ifetch_sv__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12787787486390050117ull);
    vlSelf->tb_ifetch_sv__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2134019879669372389ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_ifetch_sv__DOT__rq, __VscopeHash, 4089741862200846562ull);
    vlSelf->tb_ifetch_sv__DOT__rs = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 5063955906469036816ull);
    vlSelf->tb_ifetch_sv__DOT__errors = 0;
    vlSelf->tb_ifetch_sv__DOT__f_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11060931934214830564ull);
    vlSelf->tb_ifetch_sv__DOT__f_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7112727316512606954ull);
    vlSelf->tb_ifetch_sv__DOT__f_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14857939206792270634ull);
    vlSelf->tb_ifetch_sv__DOT__st = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9828482154075323804ull);
    vlSelf->tb_ifetch_sv__DOT__raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6649612088307050953ull);
    vlSelf->tb_ifetch_sv__DOT__rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8636517271854724378ull);
    vlSelf->tb_ifetch_sv__DOT__dly = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2589463831146141222ull);
    vlSelf->tb_ifetch_sv__DOT__dut__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4037569824090465855ull);
    vlSelf->tb_ifetch_sv__DOT__dut__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8545246328388117972ull);
    vlSelf->__Vfunc_tb_ifetch_sv__DOT__imem__0__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6557461208399661280ull);
    vlSelf->__Vfunc_tb_ifetch_sv__DOT__imem__0__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16637015676568239704ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6368549387570950512ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 753527418582437827ull);
}
