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
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awid 
        = vlSelfRef.s_axi_awid;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awaddr 
        = vlSelfRef.s_axi_awaddr;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awlen 
        = vlSelfRef.s_axi_awlen;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awsize 
        = vlSelfRef.s_axi_awsize;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awburst 
        = vlSelfRef.s_axi_awburst;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awlock 
        = vlSelfRef.s_axi_awlock;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awcache 
        = vlSelfRef.s_axi_awcache;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awprot 
        = vlSelfRef.s_axi_awprot;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awvalid 
        = vlSelfRef.s_axi_awvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_wdata 
        = vlSelfRef.s_axi_wdata;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_wstrb 
        = vlSelfRef.s_axi_wstrb;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_wlast 
        = vlSelfRef.s_axi_wlast;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_wvalid 
        = vlSelfRef.s_axi_wvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_bready 
        = vlSelfRef.s_axi_bready;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arid 
        = vlSelfRef.s_axi_arid;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_araddr 
        = vlSelfRef.s_axi_araddr;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arlen 
        = vlSelfRef.s_axi_arlen;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arsize 
        = vlSelfRef.s_axi_arsize;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arburst 
        = vlSelfRef.s_axi_arburst;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arlock 
        = vlSelfRef.s_axi_arlock;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arcache 
        = vlSelfRef.s_axi_arcache;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arprot 
        = vlSelfRef.s_axi_arprot;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arvalid 
        = vlSelfRef.s_axi_arvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rready 
        = vlSelfRef.s_axi_rready;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awready 
        = vlSelfRef.m0_axi_awready;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_wready 
        = vlSelfRef.m0_axi_wready;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_bid 
        = vlSelfRef.m0_axi_bid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_bresp 
        = vlSelfRef.m0_axi_bresp;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_bvalid 
        = vlSelfRef.m0_axi_bvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arready 
        = vlSelfRef.m0_axi_arready;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_rid 
        = vlSelfRef.m0_axi_rid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_rdata 
        = vlSelfRef.m0_axi_rdata;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_rresp 
        = vlSelfRef.m0_axi_rresp;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_rlast 
        = vlSelfRef.m0_axi_rlast;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_rvalid 
        = vlSelfRef.m0_axi_rvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awready 
        = vlSelfRef.m1_axi_awready;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_wready 
        = vlSelfRef.m1_axi_wready;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_bid 
        = vlSelfRef.m1_axi_bid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_bresp 
        = vlSelfRef.m1_axi_bresp;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_bvalid 
        = vlSelfRef.m1_axi_bvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arready 
        = vlSelfRef.m1_axi_arready;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_rid 
        = vlSelfRef.m1_axi_rid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_rdata 
        = vlSelfRef.m1_axi_rdata;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_rresp 
        = vlSelfRef.m1_axi_rresp;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_rlast 
        = vlSelfRef.m1_axi_rlast;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_rvalid 
        = vlSelfRef.m1_axi_rvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[0U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[0U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[1U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[1U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[2U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[2U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[3U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[3U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[4U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[4U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[5U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[5U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[6U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[6U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[7U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[7U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[8U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[8U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__rules_i[9U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[9U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[0U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[0U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[1U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[1U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[2U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[2U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[3U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[3U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[4U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[4U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[5U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[5U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[6U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[6U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[7U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[7U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[8U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[8U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__rules_i[9U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__rules[9U];
    vlSelfRef.weft_axi_demux_flat__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.weft_axi_demux_flat__DOT__rst_ni = vlSelfRef.rst_ni;
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 0ULL;
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0x7ffffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_awready)) 
                   << 0x33U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xbffffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_wready)) 
                   << 0x32U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xc3fffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_bid)) 
                   << 0x2eU));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xfcfffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_bresp)) 
                   << 0x2cU));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xffbffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_bvalid)) 
                   << 0x2aU));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xffdffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_arready)) 
                   << 0x29U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xffe1fffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_rid)) 
                   << 0x25U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xfffe00000001fULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_rdata)) 
                   << 5U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xfffffffffffe7ULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_rresp)) 
                   << 3U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xffffffffffffbULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | ((QData)((IData)(vlSelfRef.m0_axi_rlast)) 
                   << 2U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U] = 
        ((0xffffffffffffeULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [0U]) | (IData)((IData)(vlSelfRef.m0_axi_rvalid)));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 0ULL;
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0x7ffffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_awready)) 
                   << 0x33U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xbffffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_wready)) 
                   << 0x32U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xc3fffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_bid)) 
                   << 0x2eU));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xfcfffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_bresp)) 
                   << 0x2cU));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xffbffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_bvalid)) 
                   << 0x2aU));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xffdffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_arready)) 
                   << 0x29U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xffe1fffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_rid)) 
                   << 0x25U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xfffe00000001fULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_rdata)) 
                   << 5U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xfffffffffffe7ULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_rresp)) 
                   << 3U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xffffffffffffbULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | ((QData)((IData)(vlSelfRef.m1_axi_rlast)) 
                   << 2U));
    vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U] = 
        ((0xffffffffffffeULL & vlSelfRef.weft_axi_demux_flat__DOT__mrsp
          [1U]) | (IData)((IData)(vlSelfRef.m1_axi_rvalid)));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U] 
        = ((0x3fU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.s_axi_awid)) 
                        << 0x2bU) | (((QData)((IData)(vlSelfRef.s_axi_awaddr)) 
                                      << 0xbU) | (QData)((IData)(
                                                                 (((IData)(vlSelfRef.s_axi_awlen) 
                                                                   << 3U) 
                                                                  | (IData)(vlSelfRef.s_axi_awsize))))))) 
              << 6U));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U] 
        = (0x1fffffU & (((IData)((((QData)((IData)(vlSelfRef.s_axi_awid)) 
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
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U] 
        = ((0xfffffffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U]) 
           | (0xf0000000U & (((IData)(vlSelfRef.s_axi_awcache) 
                              << 0x1fU) | ((IData)(vlSelfRef.s_axi_awprot) 
                                           << 0x1cU))));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U] 
        = ((0xffffffc0U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]) 
           | (0xfffffffU & (((0xffffff0U & ((IData)(vlSelfRef.s_axi_awburst) 
                                            << 4U)) 
                             | (0xffffff8U & ((IData)(vlSelfRef.s_axi_awlock) 
                                              << 3U))) 
                            | ((0xfffffffU & ((IData)(vlSelfRef.s_axi_awcache) 
                                              >> 1U)) 
                               | ((IData)(vlSelfRef.s_axi_awprot) 
                                  >> 4U)))));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
        = ((0x7fU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.s_axi_awvalid)) 
                        << 0x25U) | (((QData)((IData)(vlSelfRef.s_axi_wdata)) 
                                      << 5U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.s_axi_wstrb) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.s_axi_wlast))))))) 
              << 7U));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U] 
        = ((0xffffe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.s_axi_awvalid)) 
                         << 0x25U) | (((QData)((IData)(vlSelfRef.s_axi_wdata)) 
                                       << 5U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.s_axi_wstrb) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.s_axi_wlast))))))) 
               >> 0x19U) | ((IData)(((((QData)((IData)(vlSelfRef.s_axi_awvalid)) 
                                       << 0x25U) | 
                                      (((QData)((IData)(vlSelfRef.s_axi_wdata)) 
                                        << 5U) | (QData)((IData)(
                                                                 (((IData)(vlSelfRef.s_axi_wstrb) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.s_axi_wlast)))))) 
                                     >> 0x20U)) << 7U)));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.s_axi_wvalid)) 
                    << 0x25U) | (((QData)((IData)(vlSelfRef.s_axi_bready)) 
                                  << 0x24U) | (((QData)((IData)(vlSelfRef.s_axi_arid)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.s_axi_araddr))))));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
        = ((0xffffffc0U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.s_axi_wvalid)) 
                        << 0x25U) | (((QData)((IData)(vlSelfRef.s_axi_bready)) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(vlSelfRef.s_axi_arid)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.s_axi_araddr))))) 
                      >> 0x20U)));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
        = ((0x3ffffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U]) 
           | (0xfffc0000U & (((IData)(vlSelfRef.s_axi_arlen) 
                              << 0x18U) | (((IData)(vlSelfRef.s_axi_arsize) 
                                            << 0x15U) 
                                           | (((IData)(vlSelfRef.s_axi_arburst) 
                                               << 0x13U) 
                                              | ((IData)(vlSelfRef.s_axi_arlock) 
                                                 << 0x12U))))));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
        = ((0xfffc07ffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U]) 
           | (0xfffff800U & (((IData)(vlSelfRef.s_axi_arcache) 
                              << 0xeU) | ((IData)(vlSelfRef.s_axi_arprot) 
                                          << 0xbU))));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
        = ((0xfffffffcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U]) 
           | (((IData)(vlSelfRef.s_axi_arvalid) << 1U) 
              | (IData)(vlSelfRef.s_axi_rready)));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__clk_i 
        = vlSelfRef.weft_axi_demux_flat__DOT__clk_i;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__rst_ni 
        = vlSelfRef.weft_axi_demux_flat__DOT__rst_ni;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_rsps_i[0U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_rsps_i[1U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U];
    vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i[0U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__mrsp[0U];
    vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i[1U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__mrsp[1U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__addr_i 
        = (((0U == 0x11U) ? 0U : (vlSelfRef.weft_axi_demux_flat__DOT__slv_req[
                                  (((IData)(0x1fU) 
                                    + (IData)(0x91U)) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (IData)(0x11U)))) 
           | (vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U] 
              >> 0x11U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__addr_i 
        = (((0U == 0U) ? 0U : (vlSelfRef.weft_axi_demux_flat__DOT__slv_req[
                               (((IData)(0x1fU) + (IData)(0x20U)) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (IData)(0U)))) 
           | (vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U] 
              >> 0U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_req_i[0U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_req_i[1U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_req_i[2U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_req_i[3U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_req_i[4U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_req_i[5U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U];
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__addr64 
        = (QData)((IData)(((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U] 
                            << 0xfU) | (vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U] 
                                        >> 0x11U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__addr64 
        = (QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__idx_o = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_valid_o = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_error_o = 1U;
    if ((((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_valid_o)) 
          & (vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__addr64 
             >= (((QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[3U])) 
                  << 0x20U) | (QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[2U]))))) 
         & (vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__addr64 
            < (((QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[0U])))))) {
        vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__idx_o 
            = (1U & vlSelfRef.weft_axi_demux_flat__DOT__rules[4U]);
        vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_valid_o = 1U;
        vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_error_o = 0U;
    }
    if ((((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_valid_o)) 
          & (vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__addr64 
             >= (((QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[8U])) 
                  << 0x20U) | (QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[7U]))))) 
         & (vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__addr64 
            < (((QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[6U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[5U])))))) {
        vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__idx_o 
            = (1U & vlSelfRef.weft_axi_demux_flat__DOT__rules[9U]);
        vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_valid_o = 1U;
        vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_error_o = 0U;
    }
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__idx_o = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_valid_o = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_error_o = 1U;
    if ((((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_valid_o)) 
          & (vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__addr64 
             >= (((QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[3U])) 
                  << 0x20U) | (QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[2U]))))) 
         & (vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__addr64 
            < (((QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[0U])))))) {
        vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__idx_o 
            = (1U & vlSelfRef.weft_axi_demux_flat__DOT__rules[4U]);
        vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_valid_o = 1U;
        vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_error_o = 0U;
    }
    if ((((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_valid_o)) 
          & (vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__addr64 
             >= (((QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[8U])) 
                  << 0x20U) | (QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[7U]))))) 
         & (vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__addr64 
            < (((QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[6U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.weft_axi_demux_flat__DOT__rules[5U])))))) {
        vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__idx_o 
            = (1U & vlSelfRef.weft_axi_demux_flat__DOT__rules[9U]);
        vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_valid_o = 1U;
        vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_error_o = 0U;
    }
    vlSelfRef.weft_axi_demux_flat__DOT__aw_v = vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_valid_o;
    vlSelfRef.weft_axi_demux_flat__DOT__aw_e = vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__dec_error_o;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed 
        = ((0U == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
           | (((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__idx_o) 
               == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q)) 
              & (8U > (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q))));
    vlSelfRef.weft_axi_demux_flat__DOT__aw_sel = vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__idx_o;
    vlSelfRef.weft_axi_demux_flat__DOT__ar_v = vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_valid_o;
    vlSelfRef.weft_axi_demux_flat__DOT__ar_e = vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__dec_error_o;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed 
        = ((0U == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q)) 
           | (((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__idx_o) 
               == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q)) 
              & (8U > (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.weft_axi_demux_flat__DOT__ar_sel = vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__idx_o;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_aw_select_i 
        = vlSelfRef.weft_axi_demux_flat__DOT__aw_sel;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_ar_select_i 
        = vlSelfRef.weft_axi_demux_flat__DOT__ar_sel;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o = 0ULL;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0x7ffffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed) 
                               & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                          [vlSelfRef.weft_axi_demux_flat__DOT__aw_sel] 
                                          >> 0x33U))))) 
              << 0x33U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xbffffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)(((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                               & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                          [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q] 
                                          >> 0x32U))))) 
              << 0x32U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xc07ffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)((0x7fU & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                                [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q] 
                                                >> 0x2bU))))) 
              << 0x2bU));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)(((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                               & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                          [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q] 
                                          >> 0x2aU))))) 
              << 0x2aU));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed) 
                               & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                          [vlSelfRef.weft_axi_demux_flat__DOT__ar_sel] 
                                          >> 0x29U))))) 
              << 0x29U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xffe0000000001ULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | (0x1fffffffffeULL & vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
              [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | (IData)((IData)(((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q)) 
                              & (IData)(vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                        [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q])))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][0U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][1U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][3U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][4U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][5U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (0xffffe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][4U] 
        = ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]) 
           | (0xffffe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][5U] 
        = (0x1fffffU & ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U]) 
                        | (0x1fe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U])));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (0xfffff000U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U] 
                                         & ((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__aw_sel)) 
                                            << 0xcU)) 
                                        & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed) 
                                           << 0xcU))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((IData)((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                    << 0x1aU) | ((QData)((IData)(
                                                                 vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                                 >> 6U)))) 
                         << 6U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (((IData)((0x3fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                       << 0x1aU) | 
                                      ((QData)((IData)(
                                                       vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                       >> 6U)))) >> 0x1aU) 
                         | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                            >> 6U))) 
                                     >> 0x20U)) << 6U)));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | (0xffffffe0U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                         & ((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q)) 
                                            << 5U)) 
                                        & ((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                                           << 5U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | (0xfffffff0U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                         & ((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q)) 
                                            << 4U)) 
                                        & ((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                                           << 4U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((3U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | (0xfffffffcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][1U] 
        = ((3U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U]) 
           | (0xfffffffcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((3U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U]) 
                         | (0xcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | (0xfffffffeU & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
                                         & ((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__ar_sel)) 
                                            << 1U)) 
                                        & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed) 
                                           << 1U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
                          & (~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q))) 
                         & (0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][0U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][1U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][3U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][4U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][5U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (0xffffe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][4U] 
        = ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]) 
           | (0xffffe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][5U] 
        = (0x1fffffU & ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U]) 
                        | (0x1fe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U])));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (0xfffff000U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U] 
                                         & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__aw_sel) 
                                            << 0xcU)) 
                                        & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed) 
                                           << 0xcU))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((IData)((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                    << 0x1aU) | ((QData)((IData)(
                                                                 vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                                 >> 6U)))) 
                         << 6U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (((IData)((0x3fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                       << 0x1aU) | 
                                      ((QData)((IData)(
                                                       vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                       >> 6U)))) >> 0x1aU) 
                         | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                            >> 6U))) 
                                     >> 0x20U)) << 6U)));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | (0xffffffe0U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                         & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q) 
                                            << 5U)) 
                                        & ((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                                           << 5U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | (0xfffffff0U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                         & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q) 
                                            << 4U)) 
                                        & ((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                                           << 4U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((3U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | (0xfffffffcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][1U] 
        = ((3U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U]) 
           | (0xfffffffcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((3U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U]) 
                         | (0xcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | (0xfffffffeU & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
                                         & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__ar_sel) 
                                            << 1U)) 
                                        & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed) 
                                           << 1U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
                          & (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q)) 
                         & (0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_rsp = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o;
    vlSelfRef.s_axi_wready = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                            >> 0x32U)));
    vlSelfRef.s_axi_bid = (0xfU & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 0x2eU)));
    vlSelfRef.s_axi_bresp = (3U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 0x2cU)));
    vlSelfRef.s_axi_rid = (0xfU & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 0x25U)));
    vlSelfRef.s_axi_rdata = (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                     >> 5U));
    vlSelfRef.s_axi_rresp = (3U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 3U)));
    vlSelfRef.s_axi_awready = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                             >> 0x33U)));
    vlSelfRef.s_axi_bvalid = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                            >> 0x2aU)));
    vlSelfRef.s_axi_arready = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                             >> 0x29U)));
    vlSelfRef.s_axi_rlast = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 2U)));
    vlSelfRef.s_axi_rvalid = (1U & (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o));
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][0U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][0U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][1U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][1U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][2U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][2U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][3U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][3U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][4U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][4U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][5U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][5U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][0U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][0U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][1U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][1U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][2U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][2U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][3U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][3U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][4U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][4U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][5U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][5U];
    vlSelfRef.m0_axi_awid = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][5U] >> 0x11U));
    vlSelfRef.m0_axi_awaddr = ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                [0U][5U] << 0xfU) | 
                               (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                [0U][4U] >> 0x11U));
    vlSelfRef.m0_axi_awlen = (0xffU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                       [0U][4U] >> 9U));
    vlSelfRef.m0_axi_awsize = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][4U] >> 6U));
    vlSelfRef.m0_axi_awburst = (3U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][4U] >> 4U));
    vlSelfRef.m0_axi_awlock = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][4U] >> 3U));
    vlSelfRef.m0_axi_awcache = (0xfU & ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                         [0U][4U] << 1U) 
                                        | (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                           [0U][3U] 
                                           >> 0x1fU)));
    vlSelfRef.m0_axi_awprot = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][3U] >> 0x1cU));
    vlSelfRef.m0_axi_awvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][3U] >> 0xcU));
    vlSelfRef.m0_axi_wdata = ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [0U][3U] << 0x14U) | 
                              (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [0U][2U] >> 0xcU));
    vlSelfRef.m0_axi_wstrb = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][2U] >> 8U));
    vlSelfRef.m0_axi_wlast = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                    [0U][2U] >> 7U));
    vlSelfRef.m0_axi_wvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][2U] >> 5U));
    vlSelfRef.m0_axi_bready = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][2U] >> 4U));
    vlSelfRef.m0_axi_arid = (0xfU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                             [0U][2U]);
    vlSelfRef.m0_axi_araddr = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][1U];
    vlSelfRef.m0_axi_arlen = (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                              [0U][0U] >> 0x18U);
    vlSelfRef.m0_axi_arsize = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][0U] >> 0x15U));
    vlSelfRef.m0_axi_arburst = (3U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][0U] >> 0x13U));
    vlSelfRef.m0_axi_arlock = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][0U] >> 0x12U));
    vlSelfRef.m0_axi_arcache = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                        [0U][0U] >> 0xeU));
    vlSelfRef.m0_axi_arprot = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][0U] >> 0xbU));
    vlSelfRef.m0_axi_arvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][0U] >> 1U));
    vlSelfRef.m0_axi_rready = (1U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [0U][0U]);
    vlSelfRef.m1_axi_awid = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][5U] >> 0x11U));
    vlSelfRef.m1_axi_awaddr = ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                [1U][5U] << 0xfU) | 
                               (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                [1U][4U] >> 0x11U));
    vlSelfRef.m1_axi_awlen = (0xffU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                       [1U][4U] >> 9U));
    vlSelfRef.m1_axi_awsize = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][4U] >> 6U));
    vlSelfRef.m1_axi_awburst = (3U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][4U] >> 4U));
    vlSelfRef.m1_axi_awlock = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][4U] >> 3U));
    vlSelfRef.m1_axi_awcache = (0xfU & ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                         [1U][4U] << 1U) 
                                        | (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                           [1U][3U] 
                                           >> 0x1fU)));
    vlSelfRef.m1_axi_awprot = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][3U] >> 0x1cU));
    vlSelfRef.m1_axi_awvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][3U] >> 0xcU));
    vlSelfRef.m1_axi_wdata = ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [1U][3U] << 0x14U) | 
                              (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [1U][2U] >> 0xcU));
    vlSelfRef.m1_axi_wstrb = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][2U] >> 8U));
    vlSelfRef.m1_axi_wlast = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                    [1U][2U] >> 7U));
    vlSelfRef.m1_axi_wvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][2U] >> 5U));
    vlSelfRef.m1_axi_bready = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][2U] >> 4U));
    vlSelfRef.m1_axi_arid = (0xfU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                             [1U][2U]);
    vlSelfRef.m1_axi_araddr = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][1U];
    vlSelfRef.m1_axi_arlen = (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                              [1U][0U] >> 0x18U);
    vlSelfRef.m1_axi_arsize = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][0U] >> 0x15U));
    vlSelfRef.m1_axi_arburst = (3U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][0U] >> 0x13U));
    vlSelfRef.m1_axi_arlock = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][0U] >> 0x12U));
    vlSelfRef.m1_axi_arcache = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                        [1U][0U] >> 0xeU));
    vlSelfRef.m1_axi_arprot = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][0U] >> 0xbU));
    vlSelfRef.m1_axi_arvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][0U] >> 1U));
    vlSelfRef.m1_axi_rready = (1U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [1U][0U]);
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_wready 
        = vlSelfRef.s_axi_wready;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_bid = vlSelfRef.s_axi_bid;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_bresp 
        = vlSelfRef.s_axi_bresp;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rid = vlSelfRef.s_axi_rid;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rdata 
        = vlSelfRef.s_axi_rdata;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rresp 
        = vlSelfRef.s_axi_rresp;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awready 
        = vlSelfRef.s_axi_awready;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_hs 
        = ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U] 
            >> 0xcU) & (IData)(vlSelfRef.s_axi_awready));
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_bvalid 
        = vlSelfRef.s_axi_bvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__b_hs 
        = ((IData)(vlSelfRef.s_axi_bvalid) & (vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                              >> 4U));
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arready 
        = vlSelfRef.s_axi_arready;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_hs 
        = ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
            >> 1U) & (IData)(vlSelfRef.s_axi_arready));
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rlast 
        = vlSelfRef.s_axi_rlast;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rvalid 
        = vlSelfRef.s_axi_rvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_hs 
        = ((IData)(vlSelfRef.s_axi_rvalid) & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U]);
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awid 
        = vlSelfRef.m0_axi_awid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awaddr 
        = vlSelfRef.m0_axi_awaddr;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awlen 
        = vlSelfRef.m0_axi_awlen;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awsize 
        = vlSelfRef.m0_axi_awsize;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awburst 
        = vlSelfRef.m0_axi_awburst;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awlock 
        = vlSelfRef.m0_axi_awlock;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awcache 
        = vlSelfRef.m0_axi_awcache;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awprot 
        = vlSelfRef.m0_axi_awprot;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awvalid 
        = vlSelfRef.m0_axi_awvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_wdata 
        = vlSelfRef.m0_axi_wdata;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_wstrb 
        = vlSelfRef.m0_axi_wstrb;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_wlast 
        = vlSelfRef.m0_axi_wlast;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_wvalid 
        = vlSelfRef.m0_axi_wvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_bready 
        = vlSelfRef.m0_axi_bready;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arid 
        = vlSelfRef.m0_axi_arid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_araddr 
        = vlSelfRef.m0_axi_araddr;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arlen 
        = vlSelfRef.m0_axi_arlen;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arsize 
        = vlSelfRef.m0_axi_arsize;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arburst 
        = vlSelfRef.m0_axi_arburst;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arlock 
        = vlSelfRef.m0_axi_arlock;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arcache 
        = vlSelfRef.m0_axi_arcache;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arprot 
        = vlSelfRef.m0_axi_arprot;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arvalid 
        = vlSelfRef.m0_axi_arvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_rready 
        = vlSelfRef.m0_axi_rready;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awid 
        = vlSelfRef.m1_axi_awid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awaddr 
        = vlSelfRef.m1_axi_awaddr;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awlen 
        = vlSelfRef.m1_axi_awlen;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awsize 
        = vlSelfRef.m1_axi_awsize;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awburst 
        = vlSelfRef.m1_axi_awburst;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awlock 
        = vlSelfRef.m1_axi_awlock;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awcache 
        = vlSelfRef.m1_axi_awcache;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awprot 
        = vlSelfRef.m1_axi_awprot;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awvalid 
        = vlSelfRef.m1_axi_awvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_wdata 
        = vlSelfRef.m1_axi_wdata;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_wstrb 
        = vlSelfRef.m1_axi_wstrb;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_wlast 
        = vlSelfRef.m1_axi_wlast;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_wvalid 
        = vlSelfRef.m1_axi_wvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_bready 
        = vlSelfRef.m1_axi_bready;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arid 
        = vlSelfRef.m1_axi_arid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_araddr 
        = vlSelfRef.m1_axi_araddr;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arlen 
        = vlSelfRef.m1_axi_arlen;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arsize 
        = vlSelfRef.m1_axi_arsize;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arburst 
        = vlSelfRef.m1_axi_arburst;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arlock 
        = vlSelfRef.m1_axi_arlock;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arcache 
        = vlSelfRef.m1_axi_arcache;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arprot 
        = vlSelfRef.m1_axi_arprot;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arvalid 
        = vlSelfRef.m1_axi_arvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_rready 
        = vlSelfRef.m1_axi_rready;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_last_hs 
        = ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_hs) 
           & (IData)(vlSelfRef.s_axi_rlast));
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_ni) {
        if (((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_hs) 
             & (0U == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)))) {
            vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q 
                = vlSelfRef.weft_axi_demux_flat__DOT__aw_sel;
        }
        vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q) 
                        + ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_hs)
                            ? 1U : 0U)) - ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__b_hs)
                                            ? 1U : 0U)));
        if (((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_hs) 
             & (0U == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q)))) {
            vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q 
                = vlSelfRef.weft_axi_demux_flat__DOT__ar_sel;
        }
        vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q) 
                        + ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_hs)
                            ? 1U : 0U)) - ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_last_hs)
                                            ? 1U : 0U)));
    } else {
        vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q = 0U;
        vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q = 0U;
        vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q = 0U;
        vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q = 0U;
    }
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed 
        = ((0U == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
           | (((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_awdec__DOT__idx_o) 
               == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q)) 
              & (8U > (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed 
        = ((0U == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q)) 
           | (((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_ardec__DOT__idx_o) 
               == (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q)) 
              & (8U > (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o = 0ULL;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0x7ffffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed) 
                               & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                          [vlSelfRef.weft_axi_demux_flat__DOT__aw_sel] 
                                          >> 0x33U))))) 
              << 0x33U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xbffffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)(((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                               & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                          [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q] 
                                          >> 0x32U))))) 
              << 0x32U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xc07ffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)((0x7fU & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                                [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q] 
                                                >> 0x2bU))))) 
              << 0x2bU));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)(((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                               & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                          [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q] 
                                          >> 0x2aU))))) 
              << 0x2aU));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed) 
                               & (IData)((vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                          [vlSelfRef.weft_axi_demux_flat__DOT__ar_sel] 
                                          >> 0x29U))))) 
              << 0x29U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xffe0000000001ULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | (0x1fffffffffeULL & vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
              [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o) 
           | (IData)((IData)(((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q)) 
                              & (IData)(vlSelfRef.weft_axi_demux_flat__DOT____Vcellinp__i_demux__mst_rsps_i
                                        [vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q])))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][0U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][1U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][3U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][4U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][5U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (0xffffe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][4U] 
        = ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]) 
           | (0xffffe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][5U] 
        = (0x1fffffU & ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U]) 
                        | (0x1fe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U])));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (0xfffff000U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U] 
                                         & ((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__aw_sel)) 
                                            << 0xcU)) 
                                        & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed) 
                                           << 0xcU))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((IData)((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                    << 0x1aU) | ((QData)((IData)(
                                                                 vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                                 >> 6U)))) 
                         << 6U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][3U]) | (((IData)((0x3fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                       << 0x1aU) | 
                                      ((QData)((IData)(
                                                       vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                       >> 6U)))) >> 0x1aU) 
                         | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                            >> 6U))) 
                                     >> 0x20U)) << 6U)));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | (0xffffffe0U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                         & ((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q)) 
                                            << 5U)) 
                                        & ((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                                           << 5U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | (0xfffffff0U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                         & ((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q)) 
                                            << 4U)) 
                                        & ((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                                           << 4U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((3U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | (0xfffffffcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][1U] 
        = ((3U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U]) 
           | (0xfffffffcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][2U]) | ((3U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U]) 
                         | (0xcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | (0xfffffffeU & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
                                         & ((~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__ar_sel)) 
                                            << 1U)) 
                                        & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed) 
                                           << 1U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [0U][0U]) | ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
                          & (~ (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q))) 
                         & (0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][0U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][1U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][3U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][4U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][5U] = 0U;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (0xffffe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][4U] 
        = ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]) 
           | (0xffffe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[4U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][5U] 
        = (0x1fffffU & ((0x1fffU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U]) 
                        | (0x1fe000U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[5U])));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0xffffefffU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (0xfffff000U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U] 
                                         & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__aw_sel) 
                                            << 0xcU)) 
                                        & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_allowed) 
                                           << 0xcU))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0x3fU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((IData)((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                    << 0x1aU) | ((QData)((IData)(
                                                                 vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                                 >> 6U)))) 
                         << 6U));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][3U] 
        = ((0xfffff000U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][3U]) | (((IData)((0x3fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                       << 0x1aU) | 
                                      ((QData)((IData)(
                                                       vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                       >> 6U)))) >> 0x1aU) 
                         | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])) 
                                            >> 6U))) 
                                     >> 0x20U)) << 6U)));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xffffffdfU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | (0xffffffe0U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                         & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q) 
                                            << 5U)) 
                                        & ((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                                           << 5U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xffffffefU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | (0xfffffff0U & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                         & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_port_q) 
                                            << 4U)) 
                                        & ((0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__w_cnt_q)) 
                                           << 4U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((3U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | (0xfffffffcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][1U] 
        = ((3U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U]) 
           | (0xfffffffcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[1U]));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][2U] 
        = ((0xfffffff0U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][2U]) | ((3U & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U]) 
                         | (0xcU & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U])));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | (0xfffffffeU & ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
                                         & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__ar_sel) 
                                            << 1U)) 
                                        & ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_allowed) 
                                           << 1U))));
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
            [1U][0U]) | ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
                          & (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_port_q)) 
                         & (0U != (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.weft_axi_demux_flat__DOT__slv_rsp = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o;
    vlSelfRef.s_axi_wready = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                            >> 0x32U)));
    vlSelfRef.s_axi_bid = (0xfU & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 0x2eU)));
    vlSelfRef.s_axi_bresp = (3U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 0x2cU)));
    vlSelfRef.s_axi_rid = (0xfU & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 0x25U)));
    vlSelfRef.s_axi_rdata = (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                     >> 5U));
    vlSelfRef.s_axi_rresp = (3U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 3U)));
    vlSelfRef.s_axi_awready = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                             >> 0x33U)));
    vlSelfRef.s_axi_bvalid = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                            >> 0x2aU)));
    vlSelfRef.s_axi_arready = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                             >> 0x29U)));
    vlSelfRef.s_axi_rlast = (1U & (IData)((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o 
                                           >> 2U)));
    vlSelfRef.s_axi_rvalid = (1U & (IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__slv_rsp_o));
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][0U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][0U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][1U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][1U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][2U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][2U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][3U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][3U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][4U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][4U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[0U][5U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][5U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][0U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][0U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][1U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][1U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][2U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][2U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][3U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][3U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][4U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][4U];
    vlSelfRef.weft_axi_demux_flat__DOT__mreq[1U][5U] 
        = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][5U];
    vlSelfRef.m0_axi_awid = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][5U] >> 0x11U));
    vlSelfRef.m0_axi_awaddr = ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                [0U][5U] << 0xfU) | 
                               (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                [0U][4U] >> 0x11U));
    vlSelfRef.m0_axi_awlen = (0xffU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                       [0U][4U] >> 9U));
    vlSelfRef.m0_axi_awsize = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][4U] >> 6U));
    vlSelfRef.m0_axi_awburst = (3U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][4U] >> 4U));
    vlSelfRef.m0_axi_awlock = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][4U] >> 3U));
    vlSelfRef.m0_axi_awcache = (0xfU & ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                         [0U][4U] << 1U) 
                                        | (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                           [0U][3U] 
                                           >> 0x1fU)));
    vlSelfRef.m0_axi_awprot = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][3U] >> 0x1cU));
    vlSelfRef.m0_axi_awvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][3U] >> 0xcU));
    vlSelfRef.m0_axi_wdata = ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [0U][3U] << 0x14U) | 
                              (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [0U][2U] >> 0xcU));
    vlSelfRef.m0_axi_wstrb = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][2U] >> 8U));
    vlSelfRef.m0_axi_wlast = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                    [0U][2U] >> 7U));
    vlSelfRef.m0_axi_wvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][2U] >> 5U));
    vlSelfRef.m0_axi_bready = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][2U] >> 4U));
    vlSelfRef.m0_axi_arid = (0xfU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                             [0U][2U]);
    vlSelfRef.m0_axi_araddr = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [0U][1U];
    vlSelfRef.m0_axi_arlen = (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                              [0U][0U] >> 0x18U);
    vlSelfRef.m0_axi_arsize = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][0U] >> 0x15U));
    vlSelfRef.m0_axi_arburst = (3U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][0U] >> 0x13U));
    vlSelfRef.m0_axi_arlock = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][0U] >> 0x12U));
    vlSelfRef.m0_axi_arcache = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                        [0U][0U] >> 0xeU));
    vlSelfRef.m0_axi_arprot = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [0U][0U] >> 0xbU));
    vlSelfRef.m0_axi_arvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [0U][0U] >> 1U));
    vlSelfRef.m0_axi_rready = (1U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [0U][0U]);
    vlSelfRef.m1_axi_awid = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][5U] >> 0x11U));
    vlSelfRef.m1_axi_awaddr = ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                [1U][5U] << 0xfU) | 
                               (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                [1U][4U] >> 0x11U));
    vlSelfRef.m1_axi_awlen = (0xffU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                       [1U][4U] >> 9U));
    vlSelfRef.m1_axi_awsize = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][4U] >> 6U));
    vlSelfRef.m1_axi_awburst = (3U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][4U] >> 4U));
    vlSelfRef.m1_axi_awlock = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][4U] >> 3U));
    vlSelfRef.m1_axi_awcache = (0xfU & ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                         [1U][4U] << 1U) 
                                        | (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                           [1U][3U] 
                                           >> 0x1fU)));
    vlSelfRef.m1_axi_awprot = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][3U] >> 0x1cU));
    vlSelfRef.m1_axi_awvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][3U] >> 0xcU));
    vlSelfRef.m1_axi_wdata = ((vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [1U][3U] << 0x14U) | 
                              (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [1U][2U] >> 0xcU));
    vlSelfRef.m1_axi_wstrb = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][2U] >> 8U));
    vlSelfRef.m1_axi_wlast = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                    [1U][2U] >> 7U));
    vlSelfRef.m1_axi_wvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][2U] >> 5U));
    vlSelfRef.m1_axi_bready = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][2U] >> 4U));
    vlSelfRef.m1_axi_arid = (0xfU & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                             [1U][2U]);
    vlSelfRef.m1_axi_araddr = vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
        [1U][1U];
    vlSelfRef.m1_axi_arlen = (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                              [1U][0U] >> 0x18U);
    vlSelfRef.m1_axi_arsize = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][0U] >> 0x15U));
    vlSelfRef.m1_axi_arburst = (3U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][0U] >> 0x13U));
    vlSelfRef.m1_axi_arlock = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][0U] >> 0x12U));
    vlSelfRef.m1_axi_arcache = (0xfU & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                        [1U][0U] >> 0xeU));
    vlSelfRef.m1_axi_arprot = (7U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                     [1U][0U] >> 0xbU));
    vlSelfRef.m1_axi_arvalid = (1U & (vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                                      [1U][0U] >> 1U));
    vlSelfRef.m1_axi_rready = (1U & vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__mst_reqs_o
                               [1U][0U]);
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_wready 
        = vlSelfRef.s_axi_wready;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_bid = vlSelfRef.s_axi_bid;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_bresp 
        = vlSelfRef.s_axi_bresp;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rid = vlSelfRef.s_axi_rid;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rdata 
        = vlSelfRef.s_axi_rdata;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rresp 
        = vlSelfRef.s_axi_rresp;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_awready 
        = vlSelfRef.s_axi_awready;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__aw_hs 
        = ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[3U] 
            >> 0xcU) & (IData)(vlSelfRef.s_axi_awready));
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_bvalid 
        = vlSelfRef.s_axi_bvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__b_hs 
        = ((IData)(vlSelfRef.s_axi_bvalid) & (vlSelfRef.weft_axi_demux_flat__DOT__slv_req[2U] 
                                              >> 4U));
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_arready 
        = vlSelfRef.s_axi_arready;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__ar_hs 
        = ((vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U] 
            >> 1U) & (IData)(vlSelfRef.s_axi_arready));
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rlast 
        = vlSelfRef.s_axi_rlast;
    vlSelfRef.weft_axi_demux_flat__DOT__s_axi_rvalid 
        = vlSelfRef.s_axi_rvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_hs 
        = ((IData)(vlSelfRef.s_axi_rvalid) & vlSelfRef.weft_axi_demux_flat__DOT__slv_req[0U]);
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awid 
        = vlSelfRef.m0_axi_awid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awaddr 
        = vlSelfRef.m0_axi_awaddr;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awlen 
        = vlSelfRef.m0_axi_awlen;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awsize 
        = vlSelfRef.m0_axi_awsize;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awburst 
        = vlSelfRef.m0_axi_awburst;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awlock 
        = vlSelfRef.m0_axi_awlock;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awcache 
        = vlSelfRef.m0_axi_awcache;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awprot 
        = vlSelfRef.m0_axi_awprot;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_awvalid 
        = vlSelfRef.m0_axi_awvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_wdata 
        = vlSelfRef.m0_axi_wdata;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_wstrb 
        = vlSelfRef.m0_axi_wstrb;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_wlast 
        = vlSelfRef.m0_axi_wlast;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_wvalid 
        = vlSelfRef.m0_axi_wvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_bready 
        = vlSelfRef.m0_axi_bready;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arid 
        = vlSelfRef.m0_axi_arid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_araddr 
        = vlSelfRef.m0_axi_araddr;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arlen 
        = vlSelfRef.m0_axi_arlen;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arsize 
        = vlSelfRef.m0_axi_arsize;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arburst 
        = vlSelfRef.m0_axi_arburst;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arlock 
        = vlSelfRef.m0_axi_arlock;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arcache 
        = vlSelfRef.m0_axi_arcache;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arprot 
        = vlSelfRef.m0_axi_arprot;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_arvalid 
        = vlSelfRef.m0_axi_arvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m0_axi_rready 
        = vlSelfRef.m0_axi_rready;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awid 
        = vlSelfRef.m1_axi_awid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awaddr 
        = vlSelfRef.m1_axi_awaddr;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awlen 
        = vlSelfRef.m1_axi_awlen;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awsize 
        = vlSelfRef.m1_axi_awsize;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awburst 
        = vlSelfRef.m1_axi_awburst;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awlock 
        = vlSelfRef.m1_axi_awlock;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awcache 
        = vlSelfRef.m1_axi_awcache;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awprot 
        = vlSelfRef.m1_axi_awprot;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_awvalid 
        = vlSelfRef.m1_axi_awvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_wdata 
        = vlSelfRef.m1_axi_wdata;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_wstrb 
        = vlSelfRef.m1_axi_wstrb;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_wlast 
        = vlSelfRef.m1_axi_wlast;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_wvalid 
        = vlSelfRef.m1_axi_wvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_bready 
        = vlSelfRef.m1_axi_bready;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arid 
        = vlSelfRef.m1_axi_arid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_araddr 
        = vlSelfRef.m1_axi_araddr;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arlen 
        = vlSelfRef.m1_axi_arlen;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arsize 
        = vlSelfRef.m1_axi_arsize;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arburst 
        = vlSelfRef.m1_axi_arburst;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arlock 
        = vlSelfRef.m1_axi_arlock;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arcache 
        = vlSelfRef.m1_axi_arcache;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arprot 
        = vlSelfRef.m1_axi_arprot;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_arvalid 
        = vlSelfRef.m1_axi_arvalid;
    vlSelfRef.weft_axi_demux_flat__DOT__m1_axi_rready 
        = vlSelfRef.m1_axi_rready;
    vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_last_hs 
        = ((IData)(vlSelfRef.weft_axi_demux_flat__DOT__i_demux__DOT__r_hs) 
           & (IData)(vlSelfRef.s_axi_rlast));
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
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/demux/weft_axi_demux_flat.sv", 6, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/demux/weft_axi_demux_flat.sv", 6, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_xbar/test/demux/weft_axi_demux_flat.sv", 6, "", "Active region did not converge.");
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
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_awready & 0xfeU)))) {
        Verilated::overWidthError("m0_axi_awready");}
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_wready & 0xfeU)))) {
        Verilated::overWidthError("m0_axi_wready");}
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_bid & 0xf0U)))) {
        Verilated::overWidthError("m0_axi_bid");}
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_bresp & 0xfcU)))) {
        Verilated::overWidthError("m0_axi_bresp");}
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_bvalid & 0xfeU)))) {
        Verilated::overWidthError("m0_axi_bvalid");}
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_arready & 0xfeU)))) {
        Verilated::overWidthError("m0_axi_arready");}
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_rid & 0xf0U)))) {
        Verilated::overWidthError("m0_axi_rid");}
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_rresp & 0xfcU)))) {
        Verilated::overWidthError("m0_axi_rresp");}
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_rlast & 0xfeU)))) {
        Verilated::overWidthError("m0_axi_rlast");}
    if (VL_UNLIKELY(((vlSelfRef.m0_axi_rvalid & 0xfeU)))) {
        Verilated::overWidthError("m0_axi_rvalid");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_awready & 0xfeU)))) {
        Verilated::overWidthError("m1_axi_awready");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_wready & 0xfeU)))) {
        Verilated::overWidthError("m1_axi_wready");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_bid & 0xf0U)))) {
        Verilated::overWidthError("m1_axi_bid");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_bresp & 0xfcU)))) {
        Verilated::overWidthError("m1_axi_bresp");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_bvalid & 0xfeU)))) {
        Verilated::overWidthError("m1_axi_bvalid");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_arready & 0xfeU)))) {
        Verilated::overWidthError("m1_axi_arready");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_rid & 0xf0U)))) {
        Verilated::overWidthError("m1_axi_rid");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_rresp & 0xfcU)))) {
        Verilated::overWidthError("m1_axi_rresp");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_rlast & 0xfeU)))) {
        Verilated::overWidthError("m1_axi_rlast");}
    if (VL_UNLIKELY(((vlSelfRef.m1_axi_rvalid & 0xfeU)))) {
        Verilated::overWidthError("m1_axi_rvalid");}
}
#endif  // VL_DEBUG
