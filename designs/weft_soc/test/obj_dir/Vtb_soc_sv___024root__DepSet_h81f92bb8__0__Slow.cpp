// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_soc_sv.h for the primary calling header

#include "Vtb_soc_sv__pch.h"
#include "Vtb_soc_sv___024root.h"

VL_ATTR_COLD void Vtb_soc_sv___024root___eval_static__TOP(Vtb_soc_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc_sv___024root___eval_static(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_static\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_soc_sv___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__arst_n__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__dut__DOT__rst_n2__0 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__tx__0 
        = vlSelfRef.tb_soc_sv__DOT__tx;
}

VL_ATTR_COLD void Vtb_soc_sv___024root___eval_static__TOP(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_static__TOP\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_soc_sv__DOT__clk = 0U;
    vlSelfRef.tb_soc_sv__DOT__arst_n = 0U;
    vlSelfRef.tb_soc_sv__DOT__got = std::string{};
    vlSelfRef.tb_soc_sv__DOT__errors = 0U;
}

VL_ATTR_COLD void Vtb_soc_sv___024root___eval_initial__TOP(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_initial__TOP\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 16384, 0, std::string{"prog.hex"}
                 ,  &(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_soc_sv___024root___eval_final(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_final\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc_sv___024root___dump_triggers__stl(Vtb_soc_sv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_soc_sv___024root___eval_phase__stl(Vtb_soc_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc_sv___024root___eval_settle(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_settle\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_soc_sv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/tb_soc_sv.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_soc_sv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc_sv___024root___dump_triggers__stl(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___dump_triggers__stl\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_soc_sv___024root___stl_sequent__TOP__0(Vtb_soc_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc_sv___024root___eval_stl(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_stl\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_soc_sv___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_soc_sv___024root___eval_triggers__stl(Vtb_soc_sv___024root* vlSelf);

VL_ATTR_COLD bool Vtb_soc_sv___024root___eval_phase__stl(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_phase__stl\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_soc_sv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_soc_sv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc_sv___024root___dump_triggers__act(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___dump_triggers__act\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge tb_soc_sv.arst_n)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_soc_sv.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_soc_sv.dut.rst_n2)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge tb_soc_sv.tx)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc_sv___024root___dump_triggers__nba(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___dump_triggers__nba\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge tb_soc_sv.arst_n)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_soc_sv.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_soc_sv.dut.rst_n2)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge tb_soc_sv.tx)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_soc_sv___024root___ctor_var_reset(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___ctor_var_reset\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_soc_sv__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9606147302651407396ull);
    vlSelf->tb_soc_sv__DOT__arst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1092547269522896189ull);
    vlSelf->tb_soc_sv__DOT__tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3854466354558595767ull);
    vlSelf->tb_soc_sv__DOT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15786924781744023543ull);
    vlSelf->tb_soc_sv__DOT__errors = 0;
    vlSelf->tb_soc_sv__DOT__unnamedblk2__DOT__c = 0;
    vlSelf->tb_soc_sv__DOT__dut__DOT__rst_n1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2586369809374743713ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__rst_n2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3884267713051544538ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o, __VscopeHash, 2702147052582665114ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o, __VscopeHash, 13506530421068482137ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 5260040136917257079ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 16285610546968970205ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__f_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3698546560907088283ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__c_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13085688763884568692ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7540100395989110638ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14713648196442160644ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15127519728115776105ull);
    VL_SCOPED_RAND_RESET_W(69, vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d, __VscopeHash, 17990210397884818158ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4348665008779238535ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__ld_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1514341929470674925ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__ld_half = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10769455144253081354ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__npc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7081778224693556097ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__is_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1413668032993851024ull);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_rf__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4515376818083476290ull);
    }
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_rf__DOT____Vlvbound_h6a58ae27__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12320787218784261895ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6186955520763907122ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11292217728792130439ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10314983566383947393ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_ok_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3233433001901135793ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_ok_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4405463400297570030ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14505395678627513338ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11555388499657841906ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 191029115978236307ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[__Vi0][__Vi1], __VscopeHash, 2310716522420488098ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 8035953237361318189ull);
        }
    }
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17049450335574208160ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17066250526174658015ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 12149044374499792466ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[__Vi0], __VscopeHash, 5603998069289442561ull);
    }
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 17793326804111847067ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16336013797100308286ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6668811293853997099ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 2259208725039367095ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[__Vi0], __VscopeHash, 4668897034324206512ull);
    }
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 15384172122305628433ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[__Vi0], __VscopeHash, 18252986132131914931ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 6631996934919110467ull);
    }
    VL_SCOPED_RAND_RESET_W(183, vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o, __VscopeHash, 15053517515540153278ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[__Vi0], __VscopeHash, 15678610602439702495ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 7458570894013266848ull);
    }
    VL_SCOPED_RAND_RESET_W(183, vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o, __VscopeHash, 11191768955729298349ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11979045638326047714ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18197246198482228130ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12175399563834840974ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7294186353907439396ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16930626617566640599ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2348104080908568927ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4150659464140111050ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9453056793529093373ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6846831928422975248ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11781678226107394045ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 611295582134493047ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16916746720963865206ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_len_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7014639578886340730ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10903273904045912386ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9833866494006037649ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4830308356175749732ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3388919324321682258ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10361915864110414475ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8181012995318739931ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16346575611533101393ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7473817158350698470ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13198960019719263945ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6235034747121136777ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5035224205306917730ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_len_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16657210725657212528ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11583576572551303082ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16473212386190525540ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16060056129897188229ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5494850853583154170ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14246382711732623690ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4097864132998449401ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11032756029578469432ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4301024555399340954ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14405840036283398130ull);
    }
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13061875506789319108ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8134667138829332151ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11866932807426407088ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11019675698906851406ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2647260144317305381ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8689626190320701280ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6776708735864219734ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9606871245606951283ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 503522925357056962ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9463250112020474569ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1297863963647415543ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4774436307161814713ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13753216954961011023ull);
    }
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16224754626080335468ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15929130289891186796ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8866370978879807487ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13848246519583343919ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 101442784324698178ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18019686407889624438ull);
    }
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3526277717353803952ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3495429620885497370ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_bram__DOT__wid_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6368881075051676764ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9734490514360203054ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_bram__DOT__raddr_q = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16466755277318584212ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rid_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7413108064127097339ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rlen_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955255627222384706ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rcnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14841949271591642524ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13429211983481507378ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_uart__DOT__waddr_q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9337538197222388449ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_uart__DOT__wid_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11061581664437730694ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2699833137617734092ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_uart__DOT__raddr_q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5113595380300854849ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_uart__DOT__rid_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1606466481803106359ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6810425255582951195ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7397296588729849334ull);
    vlSelf->tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12098548778184746204ull);
    vlSelf->__Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10573861020028015826ull);
    vlSelf->__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7955574812219330005ull);
    vlSelf->__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4071117325647988398ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_soc_sv__DOT__arst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6391534013538531958ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_soc_sv__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15351144513727506631ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_soc_sv__DOT__dut__DOT__rst_n2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14538805378192600527ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_soc_sv__DOT__tx__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16165805835159076231ull);
}
