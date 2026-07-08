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

extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_hd00f49e9_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__unnamedblk1__DOT__r = 1U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__unnamedblk1__DOT__r = 2U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__unnamedblk1__DOT__r = 1U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__unnamedblk1__DOT__r = 2U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__unnamedblk1__DOT__m = 1U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__unnamedblk1__DOT__m = 2U;
    vlSelfRef.weft_axi_demux_flat__DOT__rules[0U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[0U];
    vlSelfRef.weft_axi_demux_flat__DOT__rules[1U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[1U];
    vlSelfRef.weft_axi_demux_flat__DOT__rules[2U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[2U];
    vlSelfRef.weft_axi_demux_flat__DOT__rules[3U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[3U];
    vlSelfRef.weft_axi_demux_flat__DOT__rules[4U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[4U];
    vlSelfRef.weft_axi_demux_flat__DOT__rules[5U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[5U];
    vlSelfRef.weft_axi_demux_flat__DOT__rules[6U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[6U];
    vlSelfRef.weft_axi_demux_flat__DOT__rules[7U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[7U];
    vlSelfRef.weft_axi_demux_flat__DOT__rules[8U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[8U];
    vlSelfRef.weft_axi_demux_flat__DOT__rules[9U] = 
        Vtop__ConstPool__CONST_hd00f49e9_0[9U];
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
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/demux/weft_axi_demux_flat.sv", 6, "", "Settle region did not converge.");
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
    vlSelf->m0_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2642025233761639000ull);
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
    vlSelf->m0_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5315144611651019573ull);
    vlSelf->m0_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7299957155688045641ull);
    vlSelf->m0_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17703440014278901823ull);
    vlSelf->m0_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3404979697685140487ull);
    vlSelf->m0_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7261108014014022732ull);
    vlSelf->m0_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5134548686907028894ull);
    vlSelf->m0_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16249063311703610403ull);
    vlSelf->m0_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5303206320819344407ull);
    vlSelf->m0_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4346386410634166468ull);
    vlSelf->m0_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10319129994607918842ull);
    vlSelf->m0_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6919065784839662506ull);
    vlSelf->m0_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 928739885101627375ull);
    vlSelf->m0_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14680217087274245149ull);
    vlSelf->m0_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12680691547447691288ull);
    vlSelf->m0_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13192371938081079199ull);
    vlSelf->m0_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7662423394037051495ull);
    vlSelf->m0_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8753270635268328193ull);
    vlSelf->m0_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8155355189114051661ull);
    vlSelf->m0_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15645592152264522906ull);
    vlSelf->m0_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1756374200267096602ull);
    vlSelf->m1_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7499604433645066165ull);
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
    vlSelf->m1_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6133330269176256574ull);
    vlSelf->m1_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5073228771850954242ull);
    vlSelf->m1_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8140004962376094577ull);
    vlSelf->m1_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18352175833247752283ull);
    vlSelf->m1_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 514627534776854456ull);
    vlSelf->m1_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17141731120983730643ull);
    vlSelf->m1_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3731271405046692671ull);
    vlSelf->m1_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6138423057160690893ull);
    vlSelf->m1_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14119105872417308160ull);
    vlSelf->m1_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14197763457685267884ull);
    vlSelf->m1_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9127767039347779196ull);
    vlSelf->m1_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16919424385040442457ull);
    vlSelf->m1_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15712020639675656681ull);
    vlSelf->m1_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15298234923474870393ull);
    vlSelf->m1_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10830931029653987247ull);
    vlSelf->m1_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6208871029342704860ull);
    vlSelf->m1_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5127930911434161766ull);
    vlSelf->m1_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8647787435848954954ull);
    vlSelf->m1_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4304025884289228518ull);
    vlSelf->m1_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17263104517582494339ull);
    vlSelf->weft_axi_demux_flat__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13168073261176380214ull);
    vlSelf->weft_axi_demux_flat__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2152036922484962014ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2116135625356415100ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11876596939006701143ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3192106577488458785ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13954855196970642769ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5933303486235931692ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9405436411431490020ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8280452257007948508ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8188599343044411181ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1455724736759407619ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 233432174721066816ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5443066363709418450ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6772319265677815837ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3228137260901047270ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16230946179792174391ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16667657944376812700ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7696884457900500292ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7758893000741053373ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14340776666311609492ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17761025087376229095ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6642160756663573638ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18189639268607951534ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 128538384446049636ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4447460987042505724ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14090458165260686039ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10096318647694551632ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17897052261548152306ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6843263683462969031ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6364195406250118077ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4861083834672211268ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 915323327719987726ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9886165673061334008ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16942180015988870294ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17622991828905933017ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8285206427172597475ull);
    vlSelf->weft_axi_demux_flat__DOT__s_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12576137778990183052ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8855013493639346669ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8779545679314157526ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2749488157207481682ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11923397853463445412ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1618421534472463178ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8406888886679801136ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11824894186498284601ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2260364026495726085ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10902191645397923472ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18181735730870176794ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11670703057769437296ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6534595626010624809ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10434668931790825551ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15911692320635436319ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11766803973011303646ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14602649500246545505ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12057496456092529139ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11818210413467912339ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2554038268623329279ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1184258472889929561ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7402068751276541350ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15402425903232761807ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9051553068741846705ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9644038615403542794ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4621028451935010214ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16717766417794836924ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13556492667491549669ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10924311242351482052ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10592432106675484277ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13169907165534286344ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7722360190113800995ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10029756389083538942ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13829213477595120817ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3961643876361691753ull);
    vlSelf->weft_axi_demux_flat__DOT__m0_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13687145783208533994ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10430693020431801069ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16815946708555924250ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12568253728023591780ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 446936627272413123ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7050892440699690876ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6553190448361142004ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12942481465429028312ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9317639540027168979ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 943833119801967441ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7542320152102402388ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 953918983872883920ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1153891890167072242ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11318955936640295233ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3050157985395031475ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3398637880877524975ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5517168881435904989ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12198658290483116497ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11523723685778827608ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10657363781359072310ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4245692232660048759ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9941119675282510881ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5105255064954357634ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10415012182312660720ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13610888677860396908ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9784971997837247235ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5627939956008016573ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2090649286006874366ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17473654297140990883ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9177167423135063268ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6981667940471426792ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14671546589363937171ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13447557227991415344ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16397051327038796702ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1736911900631324755ull);
    vlSelf->weft_axi_demux_flat__DOT__m1_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8224269136396236814ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_demux_flat__DOT__slv_req, __VscopeHash, 8490653465756285343ull);
    vlSelf->weft_axi_demux_flat__DOT__slv_rsp = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 3536180395646405299ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_demux_flat__DOT__mreq[__Vi0], __VscopeHash, 4971058329921819708ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_demux_flat__DOT__mrsp[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 2297488351608771324ull);
    }
    vlSelf->weft_axi_demux_flat__DOT__rules[0] = 4096U;
    vlSelf->weft_axi_demux_flat__DOT__rules[1] = 0U;
    vlSelf->weft_axi_demux_flat__DOT__rules[2] = 0U;
    vlSelf->weft_axi_demux_flat__DOT__rules[3] = 0U;
    vlSelf->weft_axi_demux_flat__DOT__rules[4] = 0U;
    vlSelf->weft_axi_demux_flat__DOT__rules[5] = 8192U;
    vlSelf->weft_axi_demux_flat__DOT__rules[6] = 0U;
    vlSelf->weft_axi_demux_flat__DOT__rules[7] = 4096U;
    vlSelf->weft_axi_demux_flat__DOT__rules[8] = 0U;
    vlSelf->weft_axi_demux_flat__DOT__rules[9] = 1U;
    vlSelf->weft_axi_demux_flat__DOT__aw_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10680938147205926113ull);
    vlSelf->weft_axi_demux_flat__DOT__ar_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13968714747342485248ull);
    vlSelf->weft_axi_demux_flat__DOT__aw_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761517983586373821ull);
    vlSelf->weft_axi_demux_flat__DOT__ar_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5836409675821342894ull);
    vlSelf->weft_axi_demux_flat__DOT__aw_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14850147371940663181ull);
    vlSelf->weft_axi_demux_flat__DOT__ar_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3059908391874872592ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 17139972854308747732ull);
    }
    vlSelf->weft_axi_demux_flat__DOT__i_awdec__DOT__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4592380637267667705ull);
    VL_SCOPED_RAND_RESET_W(320, vlSelf->weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i, __VscopeHash, 14631824284853777380ull);
    vlSelf->weft_axi_demux_flat__DOT__i_awdec__DOT__idx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4194094444020038816ull);
    vlSelf->weft_axi_demux_flat__DOT__i_awdec__DOT__dec_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3601849303835108084ull);
    vlSelf->weft_axi_demux_flat__DOT__i_awdec__DOT__dec_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10978181001462263857ull);
    vlSelf->weft_axi_demux_flat__DOT__i_awdec__DOT__addr64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7524718239044310659ull);
    vlSelf->weft_axi_demux_flat__DOT__i_awdec__DOT__unnamedblk1__DOT__r = 0;
    vlSelf->weft_axi_demux_flat__DOT__i_ardec__DOT__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4919924059150903332ull);
    VL_SCOPED_RAND_RESET_W(320, vlSelf->weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i, __VscopeHash, 3762139132720904206ull);
    vlSelf->weft_axi_demux_flat__DOT__i_ardec__DOT__idx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16159560871631221152ull);
    vlSelf->weft_axi_demux_flat__DOT__i_ardec__DOT__dec_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12250588174438058786ull);
    vlSelf->weft_axi_demux_flat__DOT__i_ardec__DOT__dec_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814456385831861867ull);
    vlSelf->weft_axi_demux_flat__DOT__i_ardec__DOT__addr64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4180177364562398162ull);
    vlSelf->weft_axi_demux_flat__DOT__i_ardec__DOT__unnamedblk1__DOT__r = 0;
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1036590700041964341ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9835469587554142334ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__slv_aw_select_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7183865040751302263ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__slv_ar_select_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3217416959539529969ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__slv_req_i, __VscopeHash, 8606592622306847952ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 18147130994376318364ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[__Vi0], __VscopeHash, 10717262689033242045ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__mst_rsps_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 6196137033340607565ull);
    }
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14143568978422778760ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 634488618631024493ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12185982820644199434ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12601678612694809902ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6864916797191313258ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2986808414723488489ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10149373494017588195ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8383296844583341591ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8184385943046879478ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10528240592340811791ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__r_last_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 455697250083974850ull);
    vlSelf->weft_axi_demux_flat__DOT__i_demux__DOT__unnamedblk1__DOT__m = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668644789224949103ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2605432789578622122ull);
}
