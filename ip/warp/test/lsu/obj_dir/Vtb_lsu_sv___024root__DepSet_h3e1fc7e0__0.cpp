// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lsu_sv.h for the primary calling header

#include "Vtb_lsu_sv__pch.h"
#include "Vtb_lsu_sv__Syms.h"
#include "Vtb_lsu_sv___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__2(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                             7);
        vlSelfRef.tb_lsu_sv__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_lsu_sv__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lsu_sv___024root___dump_triggers__act(Vtb_lsu_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_lsu_sv___024root___eval_triggers__act(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_triggers__act\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_lsu_sv__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_lsu_sv__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_lsu_sv__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_lsu_sv__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.tb_lsu_sv__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_lsu_sv__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lsu_sv__DOT__clk__0 
        = vlSelfRef.tb_lsu_sv__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lsu_sv__DOT__rst_n__0 
        = vlSelfRef.tb_lsu_sv__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_lsu_sv___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_lsu_sv___024root___nba_sequent__TOP__0(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___nba_sequent__TOP__0\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_lsu_sv__DOT__wa;
    __Vdly__tb_lsu_sv__DOT__wa = 0;
    CData/*2:0*/ __Vdly__tb_lsu_sv__DOT__ws;
    __Vdly__tb_lsu_sv__DOT__ws = 0;
    CData/*1:0*/ __Vdly__tb_lsu_sv__DOT__rdly;
    __Vdly__tb_lsu_sv__DOT__rdly = 0;
    CData/*2:0*/ __Vdly__tb_lsu_sv__DOT__r_s;
    __Vdly__tb_lsu_sv__DOT__r_s = 0;
    CData/*1:0*/ __Vdly__tb_lsu_sv__DOT__dut__DOT__state_q;
    __Vdly__tb_lsu_sv__DOT__dut__DOT__state_q = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu_sv__DOT__mem__v0;
    __VdlyVal__tb_lsu_sv__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_lsu_sv__DOT__mem__v0;
    __VdlyDim0__tb_lsu_sv__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu_sv__DOT__mem__v0;
    __VdlySet__tb_lsu_sv__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu_sv__DOT__mem__v1;
    __VdlyVal__tb_lsu_sv__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_lsu_sv__DOT__mem__v1;
    __VdlyDim0__tb_lsu_sv__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu_sv__DOT__mem__v1;
    __VdlySet__tb_lsu_sv__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu_sv__DOT__mem__v2;
    __VdlyVal__tb_lsu_sv__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tb_lsu_sv__DOT__mem__v2;
    __VdlyDim0__tb_lsu_sv__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu_sv__DOT__mem__v2;
    __VdlySet__tb_lsu_sv__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_lsu_sv__DOT__mem__v3;
    __VdlyVal__tb_lsu_sv__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_lsu_sv__DOT__mem__v3;
    __VdlyDim0__tb_lsu_sv__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_lsu_sv__DOT__mem__v3;
    __VdlySet__tb_lsu_sv__DOT__mem__v3 = 0;
    // Body
    __Vdly__tb_lsu_sv__DOT__dut__DOT__state_q = vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q;
    __Vdly__tb_lsu_sv__DOT__wa = vlSelfRef.tb_lsu_sv__DOT__wa;
    __Vdly__tb_lsu_sv__DOT__rdly = vlSelfRef.tb_lsu_sv__DOT__rdly;
    __Vdly__tb_lsu_sv__DOT__ws = vlSelfRef.tb_lsu_sv__DOT__ws;
    __Vdly__tb_lsu_sv__DOT__r_s = vlSelfRef.tb_lsu_sv__DOT__r_s;
    __VdlySet__tb_lsu_sv__DOT__mem__v0 = 0U;
    __VdlySet__tb_lsu_sv__DOT__mem__v1 = 0U;
    __VdlySet__tb_lsu_sv__DOT__mem__v2 = 0U;
    __VdlySet__tb_lsu_sv__DOT__mem__v3 = 0U;
    if (vlSelfRef.tb_lsu_sv__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q))) {
            if (((IData)(vlSelfRef.tb_lsu_sv__DOT__d_req) 
                 & (~ (IData)(vlSelfRef.tb_lsu_sv__DOT__d_we)))) {
                if ((1U & ((vlSelfRef.tb_lsu_sv__DOT__rq[0U] 
                            >> 1U) & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                              >> 0x29U))))) {
                    __Vdly__tb_lsu_sv__DOT__dut__DOT__state_q = 1U;
                }
            } else if (((IData)(vlSelfRef.tb_lsu_sv__DOT__d_req) 
                        & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_we))) {
                if (vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_hs) {
                    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_ok_q = 1U;
                }
                if (vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_hs) {
                    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_ok_q = 1U;
                }
                if (((IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_done) 
                     & (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_done))) {
                    __Vdly__tb_lsu_sv__DOT__dut__DOT__state_q = 2U;
                    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_ok_q = 0U;
                    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_ok_q = 0U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q))) {
            if ((1U & (vlSelfRef.tb_lsu_sv__DOT__rq[0U] 
                       & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)))) {
                __Vdly__tb_lsu_sv__DOT__dut__DOT__state_q = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q))) {
            if ((1U & ((vlSelfRef.tb_lsu_sv__DOT__rq[2U] 
                        >> 4U) & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                          >> 0x2aU))))) {
                __Vdly__tb_lsu_sv__DOT__dut__DOT__state_q = 0U;
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)))))))) {
            if ((0U == (((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: warp_axi_lsu.sv:69: Assertion failed in %Ntb_lsu_sv.dut: unique case, but none matched for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/../../rtl/warp_axi_lsu.sv", 69, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_axi_lsu.sv:69: Assertion failed in %Ntb_lsu_sv.dut: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/../../rtl/warp_axi_lsu.sv", 69, "");
            }
        }
    } else {
        __Vdly__tb_lsu_sv__DOT__dut__DOT__state_q = 0U;
        vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_ok_q = 0U;
        vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_ok_q = 0U;
    }
    if (vlSelfRef.tb_lsu_sv__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws))) {
            if ((0x1000U & vlSelfRef.tb_lsu_sv__DOT__rq[3U])) {
                __Vdly__tb_lsu_sv__DOT__wa = ((vlSelfRef.tb_lsu_sv__DOT__rq[5U] 
                                               << 0xfU) 
                                              | (vlSelfRef.tb_lsu_sv__DOT__rq[4U] 
                                                 >> 0x11U));
                vlSelfRef.tb_lsu_sv__DOT__wid = (0xfU 
                                                 & (vlSelfRef.tb_lsu_sv__DOT__rq[5U] 
                                                    >> 0x11U));
                __Vdly__tb_lsu_sv__DOT__ws = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws))) {
            if ((0x20U & vlSelfRef.tb_lsu_sv__DOT__rq[2U])) {
                if ((0x100U & vlSelfRef.tb_lsu_sv__DOT__rq[2U])) {
                    __VdlyVal__tb_lsu_sv__DOT__mem__v0 
                        = (0xffU & (vlSelfRef.tb_lsu_sv__DOT__rq[2U] 
                                    >> 0xcU));
                    __VdlyDim0__tb_lsu_sv__DOT__mem__v0 
                        = (0xffU & (vlSelfRef.tb_lsu_sv__DOT__wa 
                                    >> 2U));
                    __VdlySet__tb_lsu_sv__DOT__mem__v0 = 1U;
                }
                __Vdly__tb_lsu_sv__DOT__ws = 2U;
                if ((0x200U & vlSelfRef.tb_lsu_sv__DOT__rq[2U])) {
                    __VdlyVal__tb_lsu_sv__DOT__mem__v1 
                        = (0xffU & (vlSelfRef.tb_lsu_sv__DOT__rq[2U] 
                                    >> 0x14U));
                    __VdlyDim0__tb_lsu_sv__DOT__mem__v1 
                        = (0xffU & (vlSelfRef.tb_lsu_sv__DOT__wa 
                                    >> 2U));
                    __VdlySet__tb_lsu_sv__DOT__mem__v1 = 1U;
                }
                if ((0x400U & vlSelfRef.tb_lsu_sv__DOT__rq[2U])) {
                    __VdlyVal__tb_lsu_sv__DOT__mem__v2 
                        = (0xffU & ((vlSelfRef.tb_lsu_sv__DOT__rq[3U] 
                                     << 4U) | (vlSelfRef.tb_lsu_sv__DOT__rq[2U] 
                                               >> 0x1cU)));
                    __VdlyDim0__tb_lsu_sv__DOT__mem__v2 
                        = (0xffU & (vlSelfRef.tb_lsu_sv__DOT__wa 
                                    >> 2U));
                    __VdlySet__tb_lsu_sv__DOT__mem__v2 = 1U;
                }
                if ((0x800U & vlSelfRef.tb_lsu_sv__DOT__rq[2U])) {
                    __VdlyVal__tb_lsu_sv__DOT__mem__v3 
                        = (0xffU & (vlSelfRef.tb_lsu_sv__DOT__rq[3U] 
                                    >> 4U));
                    __VdlyDim0__tb_lsu_sv__DOT__mem__v3 
                        = (0xffU & (vlSelfRef.tb_lsu_sv__DOT__wa 
                                    >> 2U));
                    __VdlySet__tb_lsu_sv__DOT__mem__v3 = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws))) {
            if ((0x10U & vlSelfRef.tb_lsu_sv__DOT__rq[2U])) {
                __Vdly__tb_lsu_sv__DOT__ws = 0U;
            }
        } else {
            __Vdly__tb_lsu_sv__DOT__ws = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__ws)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_lsu_sv.sv:28: Assertion failed in %Ntb_lsu_sv: unique case, but multiple matches found for '3'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 3,(IData)(vlSelfRef.tb_lsu_sv__DOT__ws));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 28, "");
                }
            }
        }
        if ((3U == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s))) {
            if ((2U & vlSelfRef.tb_lsu_sv__DOT__rq[0U])) {
                vlSelfRef.tb_lsu_sv__DOT__ra = vlSelfRef.tb_lsu_sv__DOT__rq[1U];
                vlSelfRef.tb_lsu_sv__DOT__rid2 = (0xfU 
                                                  & vlSelfRef.tb_lsu_sv__DOT__rq[2U]);
                __Vdly__tb_lsu_sv__DOT__rdly = 1U;
                __Vdly__tb_lsu_sv__DOT__r_s = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s))) {
            if ((0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__rdly))) {
                __Vdly__tb_lsu_sv__DOT__r_s = 5U;
            } else {
                __Vdly__tb_lsu_sv__DOT__rdly = (3U 
                                                & ((IData)(vlSelfRef.tb_lsu_sv__DOT__rdly) 
                                                   - (IData)(1U)));
            }
        } else if ((5U == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s))) {
            if ((1U & vlSelfRef.tb_lsu_sv__DOT__rq[0U])) {
                __Vdly__tb_lsu_sv__DOT__r_s = 3U;
            }
        } else {
            __Vdly__tb_lsu_sv__DOT__r_s = 3U;
        }
        if ((1U & (~ VL_ONEHOT_I((((5U == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s)) 
                                   << 2U) | (((4U == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s)) 
                                              << 1U) 
                                             | (3U 
                                                == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s)))))))) {
            if ((0U != (((5U == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s)) 
                         << 2U) | (((4U == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s)) 
                                    << 1U) | (3U == (IData)(vlSelfRef.tb_lsu_sv__DOT__r_s)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_lsu_sv.sv:37: Assertion failed in %Ntb_lsu_sv: unique case, but multiple matches found for '3'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 3,(IData)(vlSelfRef.tb_lsu_sv__DOT__r_s));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 37, "");
                }
            }
        }
    } else {
        __Vdly__tb_lsu_sv__DOT__ws = 0U;
        __Vdly__tb_lsu_sv__DOT__r_s = 3U;
    }
    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q = __Vdly__tb_lsu_sv__DOT__dut__DOT__state_q;
    vlSelfRef.tb_lsu_sv__DOT__wa = __Vdly__tb_lsu_sv__DOT__wa;
    vlSelfRef.tb_lsu_sv__DOT__rdly = __Vdly__tb_lsu_sv__DOT__rdly;
    vlSelfRef.tb_lsu_sv__DOT__ws = __Vdly__tb_lsu_sv__DOT__ws;
    vlSelfRef.tb_lsu_sv__DOT__r_s = __Vdly__tb_lsu_sv__DOT__r_s;
    if (__VdlySet__tb_lsu_sv__DOT__mem__v0) {
        vlSelfRef.tb_lsu_sv__DOT__mem[__VdlyDim0__tb_lsu_sv__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__mem
                [__VdlyDim0__tb_lsu_sv__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_lsu_sv__DOT__mem__v0));
    }
    if (__VdlySet__tb_lsu_sv__DOT__mem__v1) {
        vlSelfRef.tb_lsu_sv__DOT__mem[__VdlyDim0__tb_lsu_sv__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__mem
                [__VdlyDim0__tb_lsu_sv__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_lsu_sv__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_lsu_sv__DOT__mem__v2) {
        vlSelfRef.tb_lsu_sv__DOT__mem[__VdlyDim0__tb_lsu_sv__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__mem
                [__VdlyDim0__tb_lsu_sv__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_lsu_sv__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb_lsu_sv__DOT__mem__v3) {
        vlSelfRef.tb_lsu_sv__DOT__mem[__VdlyDim0__tb_lsu_sv__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__mem
                [__VdlyDim0__tb_lsu_sv__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_lsu_sv__DOT__mem__v3) 
                  << 0x18U));
    }
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
}
