// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awid 
        = vlSelfRef.s_axi_awid;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awaddr 
        = vlSelfRef.s_axi_awaddr;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awlen 
        = vlSelfRef.s_axi_awlen;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awsize 
        = vlSelfRef.s_axi_awsize;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awburst 
        = vlSelfRef.s_axi_awburst;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awlock 
        = vlSelfRef.s_axi_awlock;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awcache 
        = vlSelfRef.s_axi_awcache;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awprot 
        = vlSelfRef.s_axi_awprot;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awvalid 
        = vlSelfRef.s_axi_awvalid;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_wdata 
        = vlSelfRef.s_axi_wdata;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_wstrb 
        = vlSelfRef.s_axi_wstrb;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_wlast 
        = vlSelfRef.s_axi_wlast;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_wvalid 
        = vlSelfRef.s_axi_wvalid;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_bready 
        = vlSelfRef.s_axi_bready;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_arid 
        = vlSelfRef.s_axi_arid;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_araddr 
        = vlSelfRef.s_axi_araddr;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_arlen 
        = vlSelfRef.s_axi_arlen;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_arsize 
        = vlSelfRef.s_axi_arsize;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_arburst 
        = vlSelfRef.s_axi_arburst;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_arlock 
        = vlSelfRef.s_axi_arlock;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_arcache 
        = vlSelfRef.s_axi_arcache;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_arprot 
        = vlSelfRef.s_axi_arprot;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_arvalid 
        = vlSelfRef.s_axi_arvalid;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_rready 
        = vlSelfRef.s_axi_rready;
    vlSelfRef.weft_axi_err_slv_flat__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.weft_axi_err_slv_flat__DOT__rst_ni = vlSelfRef.rst_ni;
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[0U] = 0U;
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[1U] = 0U;
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[2U] = 0U;
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[3U] = 0U;
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[4U] = 0U;
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[5U] = 0U;
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[4U] = 
        ((0x3fU & vlSelfRef.weft_axi_err_slv_flat__DOT__rq[4U]) 
         | ((IData)((((QData)((IData)(vlSelfRef.s_axi_awid)) 
                      << 0x2bU) | (((QData)((IData)(vlSelfRef.s_axi_awaddr)) 
                                    << 0xbU) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.s_axi_awlen) 
                                                                 << 3U) 
                                                                | (IData)(vlSelfRef.s_axi_awsize))))))) 
            << 6U));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[5U] = 
        (0x1fffffU & (((IData)((((QData)((IData)(vlSelfRef.s_axi_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelfRef.s_axi_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.s_axi_awlen) 
                                                                  << 3U) 
                                                                 | (IData)(vlSelfRef.s_axi_awsize))))))) 
                       >> 0x1aU) | ((IData)(((((QData)((IData)(vlSelfRef.s_axi_awid)) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(vlSelfRef.s_axi_awaddr)) 
                                                  << 0xbU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.s_axi_awlen) 
                                                                     << 3U) 
                                                                    | (IData)(vlSelfRef.s_axi_awsize)))))) 
                                             >> 0x20U)) 
                                    << 6U)));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[3U] = 
        ((0xfffffffU & vlSelfRef.weft_axi_err_slv_flat__DOT__rq[3U]) 
         | (0xf0000000U & (((IData)(vlSelfRef.s_axi_awcache) 
                            << 0x1fU) | ((IData)(vlSelfRef.s_axi_awprot) 
                                         << 0x1cU))));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[4U] = 
        ((0xffffffc0U & vlSelfRef.weft_axi_err_slv_flat__DOT__rq[4U]) 
         | (0xfffffffU & (((0xffffff0U & ((IData)(vlSelfRef.s_axi_awburst) 
                                          << 4U)) | 
                           (0xffffff8U & ((IData)(vlSelfRef.s_axi_awlock) 
                                          << 3U))) 
                          | ((0xfffffffU & ((IData)(vlSelfRef.s_axi_awcache) 
                                            >> 1U)) 
                             | ((IData)(vlSelfRef.s_axi_awprot) 
                                >> 4U)))));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[2U] = 
        ((0x7fU & vlSelfRef.weft_axi_err_slv_flat__DOT__rq[2U]) 
         | ((IData)((((QData)((IData)(vlSelfRef.s_axi_awvalid)) 
                      << 0x25U) | (((QData)((IData)(vlSelfRef.s_axi_wdata)) 
                                    << 5U) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.s_axi_wstrb) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.s_axi_wlast))))))) 
            << 7U));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[3U] = 
        ((0xffffe000U & vlSelfRef.weft_axi_err_slv_flat__DOT__rq[3U]) 
         | (((IData)((((QData)((IData)(vlSelfRef.s_axi_awvalid)) 
                       << 0x25U) | (((QData)((IData)(vlSelfRef.s_axi_wdata)) 
                                     << 5U) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.s_axi_wstrb) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.s_axi_wlast))))))) 
             >> 0x19U) | ((IData)(((((QData)((IData)(vlSelfRef.s_axi_awvalid)) 
                                     << 0x25U) | (((QData)((IData)(vlSelfRef.s_axi_wdata)) 
                                                   << 5U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelfRef.s_axi_wstrb) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelfRef.s_axi_wlast)))))) 
                                   >> 0x20U)) << 7U)));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[1U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.s_axi_wvalid)) 
                                                             << 0x25U) 
                                                            | (((QData)((IData)(vlSelfRef.s_axi_bready)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSelfRef.s_axi_arid)) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelfRef.s_axi_araddr))))));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[2U] = 
        ((0xffffffc0U & vlSelfRef.weft_axi_err_slv_flat__DOT__rq[2U]) 
         | (IData)(((((QData)((IData)(vlSelfRef.s_axi_wvalid)) 
                      << 0x25U) | (((QData)((IData)(vlSelfRef.s_axi_bready)) 
                                    << 0x24U) | (((QData)((IData)(vlSelfRef.s_axi_arid)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.s_axi_araddr))))) 
                    >> 0x20U)));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[0U] = 
        ((0x3ffffU & vlSelfRef.weft_axi_err_slv_flat__DOT__rq[0U]) 
         | (0xfffc0000U & (((IData)(vlSelfRef.s_axi_arlen) 
                            << 0x18U) | (((IData)(vlSelfRef.s_axi_arsize) 
                                          << 0x15U) 
                                         | (((IData)(vlSelfRef.s_axi_arburst) 
                                             << 0x13U) 
                                            | ((IData)(vlSelfRef.s_axi_arlock) 
                                               << 0x12U))))));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[0U] = 
        ((0xfffc07ffU & vlSelfRef.weft_axi_err_slv_flat__DOT__rq[0U]) 
         | (0xfffff800U & (((IData)(vlSelfRef.s_axi_arcache) 
                            << 0xeU) | ((IData)(vlSelfRef.s_axi_arprot) 
                                        << 0xbU))));
    vlSelfRef.weft_axi_err_slv_flat__DOT__rq[0U] = 
        ((0xfffffffcU & vlSelfRef.weft_axi_err_slv_flat__DOT__rq[0U]) 
         | (((IData)(vlSelfRef.s_axi_arvalid) << 1U) 
            | (IData)(vlSelfRef.s_axi_rready)));
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o = 0ULL;
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
        = ((0x3ffffffffffffULL & vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((((0U == (IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__w_q)) 
                                << 1U) | (1U == (IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__w_q))))) 
              << 0x32U));
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((2U == (IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__w_q)))) 
              << 0x2aU));
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
        = ((0xc0fffffffffffULL & vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((3U | ((IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__w_id_q) 
                                     << 2U)))) << 0x2cU));
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o) 
           | ((QData)((IData)((1U & (~ (IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__r_q))))) 
              << 0x29U));
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o) 
           | (IData)((IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__r_q)));
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
        = ((0xffe0000000003ULL & vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o) 
           | (0x18ULL | (((QData)((IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__r_id_q)) 
                          << 0x25U) | ((QData)((IData)(
                                                       ((IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__r_cnt_q) 
                                                        == (IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__r_len_q)))) 
                                       << 2U))));
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__clk_i 
        = vlSelfRef.weft_axi_err_slv_flat__DOT__clk_i;
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__rst_ni 
        = vlSelfRef.weft_axi_err_slv_flat__DOT__rst_ni;
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_req_i[0U] 
        = vlSelfRef.weft_axi_err_slv_flat__DOT__rq[0U];
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_req_i[1U] 
        = vlSelfRef.weft_axi_err_slv_flat__DOT__rq[1U];
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_req_i[2U] 
        = vlSelfRef.weft_axi_err_slv_flat__DOT__rq[2U];
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_req_i[3U] 
        = vlSelfRef.weft_axi_err_slv_flat__DOT__rq[3U];
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_req_i[4U] 
        = vlSelfRef.weft_axi_err_slv_flat__DOT__rq[4U];
    vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_req_i[5U] 
        = vlSelfRef.weft_axi_err_slv_flat__DOT__rq[5U];
    vlSelfRef.weft_axi_err_slv_flat__DOT__rs = vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o;
    vlSelfRef.s_axi_awready = (1U & (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                             >> 0x33U)));
    vlSelfRef.s_axi_wready = (1U & (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                            >> 0x32U)));
    vlSelfRef.s_axi_bid = (0xfU & (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                           >> 0x2eU)));
    vlSelfRef.s_axi_bresp = (3U & (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                           >> 0x2cU)));
    vlSelfRef.s_axi_bvalid = (1U & (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                            >> 0x2aU)));
    vlSelfRef.s_axi_arready = (1U & (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                             >> 0x29U)));
    vlSelfRef.s_axi_rid = (0xfU & (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                           >> 0x25U)));
    vlSelfRef.s_axi_rdata = (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                     >> 5U));
    vlSelfRef.s_axi_rresp = (3U & (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                           >> 3U)));
    vlSelfRef.s_axi_rlast = (1U & (IData)((vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o 
                                           >> 2U)));
    vlSelfRef.s_axi_rvalid = (1U & (IData)(vlSelfRef.weft_axi_err_slv_flat__DOT__i_err__DOT__slv_rsp_o));
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_awready 
        = vlSelfRef.s_axi_awready;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_wready 
        = vlSelfRef.s_axi_wready;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_bid 
        = vlSelfRef.s_axi_bid;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_bresp 
        = vlSelfRef.s_axi_bresp;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_bvalid 
        = vlSelfRef.s_axi_bvalid;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_arready 
        = vlSelfRef.s_axi_arready;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_rid 
        = vlSelfRef.s_axi_rid;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_rdata 
        = vlSelfRef.s_axi_rdata;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_rresp 
        = vlSelfRef.s_axi_rresp;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_rlast 
        = vlSelfRef.s_axi_rlast;
    vlSelfRef.weft_axi_err_slv_flat__DOT__s_axi_rvalid 
        = vlSelfRef.s_axi_rvalid;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/err_slv/weft_axi_err_slv_flat.sv", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/err_slv/weft_axi_err_slv_flat.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/err_slv/weft_axi_err_slv_flat.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_awid & 0xf0U)))) {
        Verilated::overWidthError("s_axi_awid");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_awsize & 0xf8U)))) {
        Verilated::overWidthError("s_axi_awsize");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_awburst & 0xfcU)))) {
        Verilated::overWidthError("s_axi_awburst");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_awlock & 0xfeU)))) {
        Verilated::overWidthError("s_axi_awlock");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_awcache & 0xf0U)))) {
        Verilated::overWidthError("s_axi_awcache");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_awprot & 0xf8U)))) {
        Verilated::overWidthError("s_axi_awprot");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_awvalid & 0xfeU)))) {
        Verilated::overWidthError("s_axi_awvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_wstrb & 0xf0U)))) {
        Verilated::overWidthError("s_axi_wstrb");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_wlast & 0xfeU)))) {
        Verilated::overWidthError("s_axi_wlast");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_wvalid & 0xfeU)))) {
        Verilated::overWidthError("s_axi_wvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_bready & 0xfeU)))) {
        Verilated::overWidthError("s_axi_bready");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_arid & 0xf0U)))) {
        Verilated::overWidthError("s_axi_arid");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_arsize & 0xf8U)))) {
        Verilated::overWidthError("s_axi_arsize");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_arburst & 0xfcU)))) {
        Verilated::overWidthError("s_axi_arburst");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_arlock & 0xfeU)))) {
        Verilated::overWidthError("s_axi_arlock");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_arcache & 0xf0U)))) {
        Verilated::overWidthError("s_axi_arcache");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_arprot & 0xf8U)))) {
        Verilated::overWidthError("s_axi_arprot");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_arvalid & 0xfeU)))) {
        Verilated::overWidthError("s_axi_arvalid");}
    if (VL_UNLIKELY(((vlSelfRef.s_axi_rready & 0xfeU)))) {
        Verilated::overWidthError("s_axi_rready");}
}
#endif  // VL_DEBUG
