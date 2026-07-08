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
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/err_slv/weft_axi_err_slv_flat.sv", 6, "", "Settle region did not converge.");
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
    vlSelf->weft_axi_err_slv_flat__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10677953169020297545ull);
    vlSelf->weft_axi_err_slv_flat__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2901310330059399689ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13082650074214047004ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4700789128285785401ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13131973683269131810ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1559307427957204537ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15864430750311307915ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5666807453884209511ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11816864079575884196ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9445446903585494803ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8209758742500414962ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8197735542032942379ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8805382687264426660ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9775663388367543943ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3438425944040258722ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4697475801852907074ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17404131808048299746ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17560966427668316966ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1571881274040186753ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11674361810807206959ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15302900066421412242ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12244529120906452948ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17629611983158441916ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11452970101330919998ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10354853442357955726ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1114056403997635284ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3950618439909100504ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8797968443829071232ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12957140122043792007ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3112443806697609974ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10958827198500027943ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12766152006837971041ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7893027126428899859ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1964228551077918126ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 959959282278612664ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13096171033729152001ull);
    vlSelf->weft_axi_err_slv_flat__DOT__s_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14380657544620611637ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_err_slv_flat__DOT__rq, __VscopeHash, 393251305327077829ull);
    vlSelf->weft_axi_err_slv_flat__DOT__rs = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 15971483899952397321ull);
    vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9570474414430717856ull);
    vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5860604705505066470ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__slv_req_i, __VscopeHash, 2337971649091248060ull);
    vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 15621566898448348036ull);
    vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__w_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10066368044268242091ull);
    vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__w_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16517900524855190344ull);
    vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2395613023518848343ull);
    vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__r_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10278312863013029710ull);
    vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__r_len_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8544534469811573035ull);
    vlSelf->weft_axi_err_slv_flat__DOT__i_err__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9487212615279080454ull);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668644789224949103ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2605432789578622122ull);
}
