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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_bram/test/bram/../../rtl/weft_axi_bram_flat.sv", 6, "", "Settle region did not converge.");
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
    vlSelf->s_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4725810032491308062ull);
    vlSelf->s_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7303631981020876172ull);
    vlSelf->s_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9080068659747867393ull);
    vlSelf->s_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4750692895024122260ull);
    vlSelf->s_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3587603303856521501ull);
    vlSelf->s_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16584334824153652305ull);
    vlSelf->s_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2750459756591647823ull);
    vlSelf->s_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15115230546005115681ull);
    vlSelf->s_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13986037914296269070ull);
    vlSelf->s_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14099717354022636468ull);
    vlSelf->s_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11311253403970331505ull);
    vlSelf->s_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18112015138521062007ull);
    vlSelf->s_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14948904321040569588ull);
    vlSelf->s_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12168530306759773544ull);
    vlSelf->s_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17608475915581965368ull);
    vlSelf->s_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1467807609176444807ull);
    vlSelf->s_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15162762900795686431ull);
    vlSelf->s_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9334582144896637853ull);
    vlSelf->s_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15653039750784194130ull);
    vlSelf->s_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13831230078639723453ull);
    vlSelf->s_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8722301305194254610ull);
    vlSelf->s_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13893282564043996047ull);
    vlSelf->s_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3029457836248456997ull);
    vlSelf->s_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10729610220338642511ull);
    vlSelf->s_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7385286300357549972ull);
    vlSelf->s_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 429034146345183818ull);
    vlSelf->s_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 375973211984234811ull);
    vlSelf->s_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17746383479076595557ull);
    vlSelf->s_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17791137924766170856ull);
    vlSelf->s_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12176571461452024946ull);
    vlSelf->s_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12866136205313389248ull);
    vlSelf->s_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14929039895447920609ull);
    vlSelf->s_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643356992638286767ull);
    vlSelf->s_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15026938065200214434ull);
    vlSelf->s_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1794163653381394343ull);
    vlSelf->weft_axi_bram_flat__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4206890698350267926ull);
    vlSelf->weft_axi_bram_flat__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18140382808065276504ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8432030493942485470ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8829316736010145527ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5133952785933797913ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6957568089111219932ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1933815487141873551ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6022206049105812853ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14652910728133429185ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17764826915324926515ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17070345840946320781ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1899106504818508282ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6147657491522402371ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7595176638912134611ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12593784128321176699ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3736330743860571996ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16315526599437677142ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7150566840308863045ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16238683450656683500ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17668670057497987759ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4087136800390061854ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3934650559428490038ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17585123643311520647ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 43198716337652323ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8009603119598705253ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7018194595834605746ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10958692424563667519ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11797270018735452947ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2036341757398808137ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1024292990402783372ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15546611955424176439ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9378942682776558780ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12973810445411864432ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13020765115382253094ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6782624362635368617ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7321777446349582734ull);
    vlSelf->weft_axi_bram_flat__DOT__s_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9371169175775731347ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_bram_flat__DOT__rq, __VscopeHash, 12626689254022495805ull);
    vlSelf->weft_axi_bram_flat__DOT__rs = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 12704301325985540606ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562427290798050746ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12701437336162592970ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__slv_req_i, __VscopeHash, 16049582665593399558ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16717589856134887595ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7193894076651367708ull);
    }
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__w_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12949139042667881163ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1948316153573337587ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__wid_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8477963085499692855ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8336539604204873283ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__raddr_q = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16849165056142582523ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__rid_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7941167756843670436ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__rlen_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15358218820245372876ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__rcnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6746027152926752882ull);
    vlSelf->weft_axi_bram_flat__DOT__i_bram__DOT__unnamedblk1__DOT__b = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668644789224949103ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2605432789578622122ull);
}
