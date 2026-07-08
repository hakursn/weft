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

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__unnamedblk2__DOT__i = 1U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__unnamedblk2__DOT__i = 2U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__flush_i = 0U;
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
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/mux/weft_axi_mux_flat.sv", 6, "", "Settle region did not converge.");
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
    vlSelf->s0_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14506439031909104742ull);
    vlSelf->s0_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14649598283187814913ull);
    vlSelf->s0_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15154959921808046471ull);
    vlSelf->s0_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8492034438229615426ull);
    vlSelf->s0_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8363231350224715485ull);
    vlSelf->s0_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2201302597781774789ull);
    vlSelf->s0_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10575455560090582108ull);
    vlSelf->s0_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 289503100933863931ull);
    vlSelf->s0_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11511143790503405158ull);
    vlSelf->s0_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1918034586675210058ull);
    vlSelf->s0_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11679849352044281139ull);
    vlSelf->s0_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13711382521226855598ull);
    vlSelf->s0_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 213162712426196429ull);
    vlSelf->s0_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7216201472313659887ull);
    vlSelf->s0_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6251018292936010761ull);
    vlSelf->s0_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6488242287655429860ull);
    vlSelf->s0_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16896408658149271429ull);
    vlSelf->s0_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1140128293988313457ull);
    vlSelf->s0_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10351772731215898469ull);
    vlSelf->s0_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14274728916131114162ull);
    vlSelf->s0_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18207010701248870907ull);
    vlSelf->s0_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1535514867323981916ull);
    vlSelf->s0_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1357681681315105710ull);
    vlSelf->s0_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12638986157558934536ull);
    vlSelf->s0_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15877449718517604400ull);
    vlSelf->s0_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15814248204624848714ull);
    vlSelf->s0_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2167510195699134930ull);
    vlSelf->s0_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15940979026084936514ull);
    vlSelf->s0_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14573465149451168535ull);
    vlSelf->s0_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5024587525158620863ull);
    vlSelf->s0_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1295159954162862173ull);
    vlSelf->s0_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5833691317678870015ull);
    vlSelf->s0_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12645212267024315873ull);
    vlSelf->s0_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2962242651511152115ull);
    vlSelf->s0_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10468485945032585743ull);
    vlSelf->s1_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1528804377101784172ull);
    vlSelf->s1_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4806600139456017183ull);
    vlSelf->s1_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12358299753020668146ull);
    vlSelf->s1_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8500555016244000139ull);
    vlSelf->s1_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5697334483478134697ull);
    vlSelf->s1_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14846476237080357397ull);
    vlSelf->s1_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16003637705752158948ull);
    vlSelf->s1_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6341779068770903178ull);
    vlSelf->s1_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9529304919281838323ull);
    vlSelf->s1_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9248806163094236453ull);
    vlSelf->s1_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7021778418004557509ull);
    vlSelf->s1_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14823100616997484952ull);
    vlSelf->s1_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14103802416490713140ull);
    vlSelf->s1_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7501647561567493516ull);
    vlSelf->s1_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15094166521185746670ull);
    vlSelf->s1_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10299254867781522044ull);
    vlSelf->s1_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7994083732765223477ull);
    vlSelf->s1_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1364895338370454713ull);
    vlSelf->s1_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7660933594750156998ull);
    vlSelf->s1_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14092087661355284561ull);
    vlSelf->s1_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5878967086757832067ull);
    vlSelf->s1_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2528600574855039854ull);
    vlSelf->s1_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12544411667346058238ull);
    vlSelf->s1_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7116139459143554322ull);
    vlSelf->s1_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2916755718511560596ull);
    vlSelf->s1_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6081066182504381589ull);
    vlSelf->s1_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3394768530175101614ull);
    vlSelf->s1_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 422864801506304299ull);
    vlSelf->s1_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6874795262522984671ull);
    vlSelf->s1_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5340601124205093609ull);
    vlSelf->s1_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10523511136282549510ull);
    vlSelf->s1_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 989955371745746948ull);
    vlSelf->s1_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8700561314497879352ull);
    vlSelf->s1_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12753183312805802274ull);
    vlSelf->s1_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12583054767042664677ull);
    vlSelf->m_axi_awid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1024821634766282054ull);
    vlSelf->m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13558266821849222593ull);
    vlSelf->m_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15527027863330074270ull);
    vlSelf->m_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17768164634708584365ull);
    vlSelf->m_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16027732775651784324ull);
    vlSelf->m_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8893572666646070633ull);
    vlSelf->m_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3753142715102392777ull);
    vlSelf->m_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6216549597533674627ull);
    vlSelf->m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17994771565963626208ull);
    vlSelf->m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16573481163850279297ull);
    vlSelf->m_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1286380785785437420ull);
    vlSelf->m_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15721383833457952779ull);
    vlSelf->m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2914646395814725164ull);
    vlSelf->m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17462522629772039856ull);
    vlSelf->m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10076110868751280388ull);
    vlSelf->m_axi_bid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11115145799783860064ull);
    vlSelf->m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3179402000051064225ull);
    vlSelf->m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17532096651654485089ull);
    vlSelf->m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 919615779156835605ull);
    vlSelf->m_axi_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1810041573633596834ull);
    vlSelf->m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1846461378547527168ull);
    vlSelf->m_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16617312831593392701ull);
    vlSelf->m_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17543111694348153197ull);
    vlSelf->m_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1752602318331902070ull);
    vlSelf->m_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5045436485330889250ull);
    vlSelf->m_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12174166796431367989ull);
    vlSelf->m_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11389438876727118374ull);
    vlSelf->m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16153593045339235853ull);
    vlSelf->m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14657891178303932712ull);
    vlSelf->m_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 134518827027005282ull);
    vlSelf->m_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7098886022588844013ull);
    vlSelf->m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9891928918972316509ull);
    vlSelf->m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5192182110111361339ull);
    vlSelf->m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10047683109683776937ull);
    vlSelf->m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4323339442303808258ull);
    vlSelf->weft_axi_mux_flat__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17194994783081516485ull);
    vlSelf->weft_axi_mux_flat__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9316890213203142919ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14888739535375632321ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3770315966688524363ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5169720829964438223ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14117965281066326570ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17217851881642203329ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 432326151794853222ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15864437838609027046ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12052096552094923600ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10784158891837960421ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9453692274276096996ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17204623394135406637ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6834581818974897387ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17017712416027538842ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3022718879573429954ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3920744523020415540ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4352094584896510339ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17450725872428660952ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13395591320773574087ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11563461064952714515ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 567745527794069689ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14176938830159990605ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12136428323152066269ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 911380296402371620ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9198536037883511016ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17687256705030404712ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13224393307597994231ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4812521877941501805ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5939113314366409879ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13393890580621959034ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3590804398645081123ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5912860172332119719ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7309909877685604533ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3343958396431853686ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4323584524086626379ull);
    vlSelf->weft_axi_mux_flat__DOT__s0_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10559011276597217192ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2186433243131720854ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8011306503641410260ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 571806541182061754ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8765568573149880239ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7804840299107241074ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13941857306274412415ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3081075522259165550ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16656153451911625428ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15937444978412494454ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18176521510096025111ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16359643810532531374ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12533230253650550350ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3353284501977492212ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3636643652197754507ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2877997459510820413ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10123894318477377925ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16746166557848467652ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9294677877695320885ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13903895340294663086ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7377775678358143558ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1464692220630293089ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11727956184709421642ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1412823945911878230ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8068119643729260753ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 157140069516473388ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3044249516556948810ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10831914664971260976ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14489097979393018285ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 483320652871649047ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1234545664787073762ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3330878305226506168ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14554591075329046230ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16653040227894108867ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3190379265959976408ull);
    vlSelf->weft_axi_mux_flat__DOT__s1_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12828907870931785951ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15995561894099536030ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8384797497203641487ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8435560513755373656ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5665397180013961558ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11737582151522897109ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15145609429858798290ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10488669470349188051ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17368170330666817683ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 196475623258734127ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7072962911299896161ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 289098805089987554ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12587856454030272049ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1593695326863622983ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11442413014532795655ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14494695368857592230ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_bid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8947033898315241447ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6049862106593873638ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10066708204305521426ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8708828193972337342ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8477906101020866498ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10579414699367430463ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9581059601844838046ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2855052294089449996ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10716781517089659602ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10431700473871037009ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13349174964786132287ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7841652560328799183ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4429180038620056160ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3843370465492493513ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15789757192577406602ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6804320070937310365ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7593351086825466433ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2802932483993273519ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6823669998680425212ull);
    vlSelf->weft_axi_mux_flat__DOT__m_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4201270768030867667ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_mux_flat__DOT__sreq[__Vi0], __VscopeHash, 18316501841122198281ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_mux_flat__DOT__srsp[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16625840803943967710ull);
    }
    VL_SCOPED_RAND_RESET_W(183, vlSelf->weft_axi_mux_flat__DOT__mreq, __VscopeHash, 117297896494826508ull);
    vlSelf->weft_axi_mux_flat__DOT__mrsp = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 16331590520809577276ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_mux_flat__DOT____Vcellinp__i_mux__slv_reqs_i[__Vi0], __VscopeHash, 4542369447703666868ull);
    }
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14028231880542225218ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16104999278956772408ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(181, vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__slv_reqs_i[__Vi0], __VscopeHash, 2384377030694553938ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__slv_rsps_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 2702438346396438578ull);
    }
    VL_SCOPED_RAND_RESET_W(183, vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__mst_req_o, __VscopeHash, 16899779650667539508ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__mst_rsp_i = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 15842867477481224215ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__aw_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12061482546743609324ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__ar_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13235586095562954145ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__aw_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8361630507934797918ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__ar_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18080022407537134707ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__aw_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7577165602914747168ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__ar_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5170278419435320876ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__aw_arb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5835813166057735540ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__ar_arb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13387421010678531907ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6707657316636194601ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12282769570102607555ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__w_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5139460900121837536ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__w_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2198700918029204714ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__w_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6618008841675578798ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__w_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10737453950682875209ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11132481377235199580ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__b_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15429085520733400025ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__r_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1450461215648299346ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__sel_aw_bits, __VscopeHash, 4281622422630095812ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__sel_ar_bits, __VscopeHash, 6997647807175554451ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__b_bits = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8106365242972507858ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__r_bits = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 10482877695721229627ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 608134531938028123ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4017582124484768635ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__req_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1175130487201582645ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17332926494640471517ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__grant_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16630268020351597433ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__sel_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12926488606069964556ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7063148646015581103ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4336045572787727006ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6538209045589524813ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4902188253195219650ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14274569586140446008ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt_unmasked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7019898529049303219ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__gnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16508177858127095000ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 887134926068353921ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17090208746716802204ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__req_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10377441861458644490ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18016809727847204411ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__grant_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8390103508023315942ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__sel_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2181813752994602919ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11043187918298899633ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13760611358219064115ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4643072587778627274ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13768885099683761980ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9130460605856326425ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt_unmasked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15077584378534527753ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__gnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7089561071857837020ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15798569261379281293ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 519816334950923101ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__flush_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12600042478386926219ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wdata_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 683435905289647349ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__push_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15343042621224541352ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 645344705168702611ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9940838144552618801ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__pop_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 819155069761070713ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__empty_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2400866101736440912ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12294536091127591669ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11940046796068076798ull);
    }
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5941717839501328591ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6694976838860556251ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__usage_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17060327208911157840ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 170562664124051340ull);
    vlSelf->weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3224423680902055112ull);
    vlSelf->__Vdly__weft_axi_mux_flat__DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15439887758195860675ull);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668644789224949103ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2605432789578622122ull);
}
