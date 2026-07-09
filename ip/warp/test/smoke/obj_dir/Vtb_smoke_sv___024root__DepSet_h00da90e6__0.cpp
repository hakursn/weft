// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_smoke_sv.h for the primary calling header

#include "Vtb_smoke_sv__pch.h"
#include "Vtb_smoke_sv__Syms.h"
#include "Vtb_smoke_sv___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__2(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 
                                             8);
        vlSelfRef.tb_smoke_sv__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_smoke_sv___024root___dump_triggers__act(Vtb_smoke_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_smoke_sv___024root___eval_triggers__act(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_triggers__act\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_smoke_sv__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_smoke_sv__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_smoke_sv__DOT__done) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__done__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__clk__0 
        = vlSelfRef.tb_smoke_sv__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__rst_n__0 
        = vlSelfRef.tb_smoke_sv__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_smoke_sv__DOT__done__0 
        = vlSelfRef.tb_smoke_sv__DOT__done;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_smoke_sv___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_smoke_sv___024root___nba_sequent__TOP__0(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___nba_sequent__TOP__0\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_smoke_sv__DOT__ist;
    __Vdly__tb_smoke_sv__DOT__ist = 0;
    CData/*1:0*/ __Vdly__tb_smoke_sv__DOT__dst;
    __Vdly__tb_smoke_sv__DOT__dst = 0;
    CData/*0:0*/ __Vdly__tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q;
    __Vdly__tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q = 0;
    CData/*1:0*/ __Vdly__tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q;
    __Vdly__tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q = 0;
    CData/*7:0*/ __VdlyVal__tb_smoke_sv__DOT__mem__v0;
    __VdlyVal__tb_smoke_sv__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_smoke_sv__DOT__mem__v0;
    __VdlySet__tb_smoke_sv__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_smoke_sv__DOT__mem__v1;
    __VdlyVal__tb_smoke_sv__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_smoke_sv__DOT__mem__v1;
    __VdlySet__tb_smoke_sv__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_smoke_sv__DOT__mem__v2;
    __VdlyVal__tb_smoke_sv__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_smoke_sv__DOT__mem__v2;
    __VdlySet__tb_smoke_sv__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_smoke_sv__DOT__mem__v3;
    __VdlyVal__tb_smoke_sv__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_smoke_sv__DOT__mem__v3;
    __VdlySet__tb_smoke_sv__DOT__mem__v3 = 0;
    // Body
    __Vdly__tb_smoke_sv__DOT__ist = vlSelfRef.tb_smoke_sv__DOT__ist;
    __Vdly__tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q 
        = vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q;
    vlSelfRef.__Vdly__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q 
        = vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q;
    __Vdly__tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q 
        = vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q;
    __Vdly__tb_smoke_sv__DOT__dst = vlSelfRef.tb_smoke_sv__DOT__dst;
    if (vlSelfRef.tb_smoke_sv__DOT__rst_n) {
        if (vlSelfRef.tb_smoke_sv__DOT__ist) {
            if (vlSelfRef.tb_smoke_sv__DOT__ist) {
                if ((1U & vlSelfRef.tb_smoke_sv__DOT__ireq[0U])) {
                    __Vdly__tb_smoke_sv__DOT__ist = 0U;
                }
            }
        } else if ((2U & vlSelfRef.tb_smoke_sv__DOT__ireq[0U])) {
            vlSelfRef.tb_smoke_sv__DOT__iaddr = vlSelfRef.tb_smoke_sv__DOT__ireq[1U];
            vlSelfRef.tb_smoke_sv__DOT__iid = (0xfU 
                                               & vlSelfRef.tb_smoke_sv__DOT__ireq[2U]);
            __Vdly__tb_smoke_sv__DOT__ist = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_smoke_sv__DOT__ist) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__ist)))))))) {
            if ((0U == (((IData)(vlSelfRef.tb_smoke_sv__DOT__ist) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__ist)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_smoke_sv.sv:27: Assertion failed in %Ntb_smoke_sv: unique case, but none matched for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_smoke_sv__DOT__ist));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 27, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_smoke_sv.sv:27: Assertion failed in %Ntb_smoke_sv: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.tb_smoke_sv__DOT__ist));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 27, "");
            }
        }
    } else {
        __Vdly__tb_smoke_sv__DOT__ist = 0U;
    }
    if (vlSelfRef.tb_smoke_sv__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q))) {
            if (((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__c_req) 
                 & (~ (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                       >> 7U)))) {
                if ((1U & ((vlSelfRef.tb_smoke_sv__DOT__dreq[0U] 
                            >> 1U) & (IData)((vlSelfRef.tb_smoke_sv__DOT__drsp 
                                              >> 0x29U))))) {
                    __Vdly__tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q = 1U;
                }
            } else if (((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__c_req) 
                        & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                           >> 7U))) {
                if (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_hs) {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q = 1U;
                }
                if (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_hs) {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q = 1U;
                }
                if (((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_done) 
                     & (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_done))) {
                    __Vdly__tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q = 2U;
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q = 0U;
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q = 0U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q))) {
            if ((1U & (vlSelfRef.tb_smoke_sv__DOT__dreq[0U] 
                       & (IData)(vlSelfRef.tb_smoke_sv__DOT__drsp)))) {
                __Vdly__tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q))) {
            if ((1U & ((vlSelfRef.tb_smoke_sv__DOT__dreq[2U] 
                        >> 4U) & (IData)((vlSelfRef.tb_smoke_sv__DOT__drsp 
                                          >> 0x2aU))))) {
                __Vdly__tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q = 0U;
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)))))))) {
            if ((0U == (((2U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: warp_axi_lsu.sv:69: Assertion failed in %Ntb_smoke_sv.dut.u_ls: unique case, but none matched for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/../../rtl/warp_axi_lsu.sv", 69, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_axi_lsu.sv:69: Assertion failed in %Ntb_smoke_sv.dut.u_ls: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/../../rtl/warp_axi_lsu.sv", 69, "");
            }
        }
    } else {
        __Vdly__tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q = 0U;
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q = 0U;
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q = 0U;
    }
    if (vlSelfRef.tb_smoke_sv__DOT__rst_n) {
        if (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q) {
            if (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q) {
                if ((1U & (vlSelfRef.tb_smoke_sv__DOT__ireq[0U] 
                           & (IData)(vlSelfRef.tb_smoke_sv__DOT__irsp)))) {
                    __Vdly__tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q = 0U;
                }
            }
        } else if ((1U & ((vlSelfRef.tb_smoke_sv__DOT__ireq[0U] 
                           >> 1U) & (IData)((vlSelfRef.tb_smoke_sv__DOT__irsp 
                                             >> 0x29U))))) {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__addr_q 
                = (0xfffffffcU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q);
            __Vdly__tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q)))))))) {
            if ((0U == (((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: warp_axi_ifetch.sv:50: Assertion failed in %Ntb_smoke_sv.dut.u_if: unique case, but none matched for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/../../rtl/warp_axi_ifetch.sv", 50, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_axi_ifetch.sv:50: Assertion failed in %Ntb_smoke_sv.dut.u_if: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/../../rtl/warp_axi_ifetch.sv", 50, "");
            }
        }
    } else {
        __Vdly__tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q = 0U;
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__addr_q = 0U;
    }
    if (vlSelfRef.tb_smoke_sv__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.tb_smoke_sv__DOT__dst))) {
            if ((1U & (IData)(vlSelfRef.tb_smoke_sv__DOT__dst))) {
                if ((1U & vlSelfRef.tb_smoke_sv__DOT__dreq[0U])) {
                    __Vdly__tb_smoke_sv__DOT__dst = 0U;
                }
            } else if ((0x10U & vlSelfRef.tb_smoke_sv__DOT__dreq[2U])) {
                __Vdly__tb_smoke_sv__DOT__dst = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_smoke_sv__DOT__dst))) {
            if ((0x20U & vlSelfRef.tb_smoke_sv__DOT__dreq[2U])) {
                if ((0x100U & vlSelfRef.tb_smoke_sv__DOT__dreq[2U])) {
                    __VdlyVal__tb_smoke_sv__DOT__mem__v0 
                        = (0xffU & (vlSelfRef.tb_smoke_sv__DOT__dreq[2U] 
                                    >> 0xcU));
                    __VdlySet__tb_smoke_sv__DOT__mem__v0 = 1U;
                }
                __Vdly__tb_smoke_sv__DOT__dst = 2U;
                if ((0x200U & vlSelfRef.tb_smoke_sv__DOT__dreq[2U])) {
                    __VdlyVal__tb_smoke_sv__DOT__mem__v1 
                        = (0xffU & (vlSelfRef.tb_smoke_sv__DOT__dreq[2U] 
                                    >> 0x14U));
                    __VdlySet__tb_smoke_sv__DOT__mem__v1 = 1U;
                }
                if ((0x400U & vlSelfRef.tb_smoke_sv__DOT__dreq[2U])) {
                    __VdlyVal__tb_smoke_sv__DOT__mem__v2 
                        = (0xffU & ((vlSelfRef.tb_smoke_sv__DOT__dreq[3U] 
                                     << 4U) | (vlSelfRef.tb_smoke_sv__DOT__dreq[2U] 
                                               >> 0x1cU)));
                    __VdlySet__tb_smoke_sv__DOT__mem__v2 = 1U;
                }
                if ((0x800U & vlSelfRef.tb_smoke_sv__DOT__dreq[2U])) {
                    __VdlyVal__tb_smoke_sv__DOT__mem__v3 
                        = (0xffU & (vlSelfRef.tb_smoke_sv__DOT__dreq[3U] 
                                    >> 4U));
                    __VdlySet__tb_smoke_sv__DOT__mem__v3 = 1U;
                }
            }
        } else if ((0x1000U & vlSelfRef.tb_smoke_sv__DOT__dreq[3U])) {
            vlSelfRef.tb_smoke_sv__DOT__daddr = ((vlSelfRef.tb_smoke_sv__DOT__dreq[5U] 
                                                  << 0xfU) 
                                                 | (vlSelfRef.tb_smoke_sv__DOT__dreq[4U] 
                                                    >> 0x11U));
            vlSelfRef.tb_smoke_sv__DOT__did = (0xfU 
                                               & (vlSelfRef.tb_smoke_sv__DOT__dreq[5U] 
                                                  >> 0x11U));
            __Vdly__tb_smoke_sv__DOT__dst = 1U;
        } else if ((2U & vlSelfRef.tb_smoke_sv__DOT__dreq[0U])) {
            vlSelfRef.tb_smoke_sv__DOT__daddr = vlSelfRef.tb_smoke_sv__DOT__dreq[1U];
            vlSelfRef.tb_smoke_sv__DOT__did = (0xfU 
                                               & vlSelfRef.tb_smoke_sv__DOT__dreq[2U]);
            __Vdly__tb_smoke_sv__DOT__dst = 3U;
        }
    } else {
        __Vdly__tb_smoke_sv__DOT__dst = 0U;
    }
    vlSelfRef.tb_smoke_sv__DOT__ist = __Vdly__tb_smoke_sv__DOT__ist;
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q 
        = __Vdly__tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q;
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q 
        = __Vdly__tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q;
    vlSelfRef.tb_smoke_sv__DOT__dst = __Vdly__tb_smoke_sv__DOT__dst;
    if (__VdlySet__tb_smoke_sv__DOT__mem__v0) {
        __VdlySet__tb_smoke_sv__DOT__mem__v0 = 0U;
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.tb_smoke_sv__DOT__mem
                        .at((QData)((IData)(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_smoke_sv__DOT__daddr, 2U)))), __VdlyVal__tb_smoke_sv__DOT__mem__v0);
    }
    if (__VdlySet__tb_smoke_sv__DOT__mem__v1) {
        __VdlySet__tb_smoke_sv__DOT__mem__v1 = 0U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.tb_smoke_sv__DOT__mem
                        .at((QData)((IData)(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_smoke_sv__DOT__daddr, 2U)))), __VdlyVal__tb_smoke_sv__DOT__mem__v1);
    }
    if (__VdlySet__tb_smoke_sv__DOT__mem__v2) {
        __VdlySet__tb_smoke_sv__DOT__mem__v2 = 0U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.tb_smoke_sv__DOT__mem
                        .at((QData)((IData)(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_smoke_sv__DOT__daddr, 2U)))), __VdlyVal__tb_smoke_sv__DOT__mem__v2);
    }
    if (__VdlySet__tb_smoke_sv__DOT__mem__v3) {
        __VdlySet__tb_smoke_sv__DOT__mem__v3 = 0U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.tb_smoke_sv__DOT__mem
                        .at((QData)((IData)(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_smoke_sv__DOT__daddr, 2U)))), __VdlyVal__tb_smoke_sv__DOT__mem__v3);
    }
}

VL_INLINE_OPT void Vtb_smoke_sv___024root___nba_sequent__TOP__2(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___nba_sequent__TOP__2\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i;
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i = 0;
    // Body
    if (vlSelfRef.tb_smoke_sv__DOT__rst_n) {
        if (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q) {
            if (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q) {
                if (vlSelfRef.tb_smoke_sv__DOT__rv) {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q 
                        = vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__npc;
                    vlSelfRef.__Vdly__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q = 0U;
                }
            }
        } else if (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__f_rvalid) {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                = (IData)((vlSelfRef.tb_smoke_sv__DOT__irsp 
                           >> 5U));
            vlSelfRef.__Vdly__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q)))))))) {
            if ((0U == (((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:128: Assertion failed in %Ntb_smoke_sv.dut.u_core: unique case, but none matched for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/../../rtl/warp_core.sv", 128, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:128: Assertion failed in %Ntb_smoke_sv.dut.u_core: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/../../rtl/warp_core.sv", 128, "");
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q = 0U;
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q = 0x80000000U;
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q = 0U;
    }
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q 
        = vlSelfRef.__Vdly__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q;
    vlSelfRef.tb_smoke_sv__DOT__ireq[0U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__ireq[1U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__ireq[2U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__ireq[3U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__ireq[4U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__ireq[5U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__ireq[0U] = (0x480000U 
                                            | (0x7ffffU 
                                               & vlSelfRef.tb_smoke_sv__DOT__ireq[0U]));
    vlSelfRef.tb_smoke_sv__DOT__ireq[1U] = (IData)((QData)((IData)(
                                                                   (0xfffffffcU 
                                                                    & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q))));
    vlSelfRef.tb_smoke_sv__DOT__ireq[2U] = ((0xfffffff0U 
                                             & vlSelfRef.tb_smoke_sv__DOT__ireq[2U]) 
                                            | (IData)(
                                                      ((QData)((IData)(
                                                                       (0xfffffffcU 
                                                                        & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q))) 
                                                       >> 0x20U)));
    vlSelfRef.tb_smoke_sv__DOT__ireq[0U] = ((0xfffffffcU 
                                             & vlSelfRef.tb_smoke_sv__DOT__ireq[0U]) 
                                            | ((2U 
                                                & (((~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q)) 
                                                    & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q))) 
                                                   << 1U)) 
                                               | (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q)));
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
        = (((- (IData)((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                >> 0x14U));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[2U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
        = ((0x3fffffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
           | (0xffc00000U & ((0xf8000000U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                             << 7U)) 
                             | (0x7c00000U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                              << 0xfU)))));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[2U] 
        = (0x1fU & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                    >> 0xfU));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
        = ((0x7fffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
           | ((IData)((1ULL | ((QData)((IData)(tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                               << 7U))) << 0xfU));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
        = ((0xffc00000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
           | (((IData)((1ULL | ((QData)((IData)(tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                << 7U))) >> 0x11U) 
              | ((IData)(((1ULL | ((QData)((IData)(tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                   << 7U)) >> 0x20U)) 
                 << 0xfU)));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
        = ((0xffffc7ffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
           | (0x3800U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                         >> 1U)));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
        = ((0xffffff8fU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
           | (0x70U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                       >> 8U)));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
        = (0xfffffff8U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
    if ((0x40U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        if ((0x20U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((0x10U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            } else if ((8U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((4U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    if ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                        if ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                = ((0x3fffffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                                   | (0xff800000U & 
                                      (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                       << 2U)));
                            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                = ((0xfffffc00U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                                   | (0x3fffffU & (
                                                   ((0x3fcU 
                                                     & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                        >> 0xaU)) 
                                                    | (2U 
                                                       & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                          >> 0x13U))) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                         >> 0x1eU)))));
                            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                = ((0xffc003ffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                                   | (0xfffffc00U & 
                                      ((0x3ff800U & 
                                        ((- (IData)(
                                                    (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                     >> 0x1fU))) 
                                         << 0xbU)) 
                                       | (0x400U & 
                                          (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                           >> 0x15U)))));
                            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                = (0x400U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                = (0xcU | (0xfffffff1U 
                                           & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
                        } else {
                            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                        }
                    } else {
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else if ((4U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    if ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = ((0x3fffffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                               | (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
                                  << 0x16U));
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                            = ((0xffc00000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                               | (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
                                  >> 0xaU));
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (0x200U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (0xcU | (0xfffffff1U 
                                       & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
                    } else {
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else if ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = ((0x3fffffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                           | (0xffc00000U & ((0xf8000000U 
                                              & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                 << 2U)) 
                                             | (0x7800000U 
                                                & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                   << 0xfU)))));
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                        = ((0xfffffffeU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                           | (1U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                    >> 0x1eU)));
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                        = ((0xffc00001U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                           | (0xfffffffeU & ((0x3ffff8U 
                                              & ((- (IData)(
                                                            (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                             >> 0x1fU))) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                    >> 0x1dU)) 
                                                | (2U 
                                                   & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                      >> 6U))))));
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (0x4000U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (0xfffffff7U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                } else {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        }
    } else if ((0x20U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        if ((0x10U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((8U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            } else if ((4U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    if ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = ((0x7fffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                               | ((IData)((5ULL | ((QData)((IData)(
                                                                   (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                    >> 0xcU))) 
                                                   << 0x13U))) 
                                  << 0xfU));
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                            = ((0xffc00000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                               | (((IData)((5ULL | 
                                            ((QData)((IData)(
                                                             (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                              >> 0xcU))) 
                                             << 0x13U))) 
                                   >> 0x11U) | ((IData)(
                                                        ((5ULL 
                                                          | ((QData)((IData)(
                                                                             (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                              >> 0xcU))) 
                                                             << 0x13U)) 
                                                         >> 0x20U)) 
                                                << 0xfU)));
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (8U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    } else {
                        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else if ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (0xfffc7fffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (8U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = ((0xffc3ffffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                           | (((0x4000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                ? ((0x2000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                    ? ((0x1000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                     ? ((0x40000000U 
                                         & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                         ? 7U : 6U)
                                     : 5U)) : ((0x2000U 
                                                & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                    ? 2U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                     ? 1U
                                                     : 0U)))) 
                              << 0x12U));
                } else {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else if ((8U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        } else if ((4U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        } else if ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = ((0x7fffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                       | (0xffff8000U & (0x8000U | 
                                         ((0xf8000000U 
                                           & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                              << 2U)) 
                                          | (0x7c00000U 
                                             & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                << 0xfU))))));
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                    = ((0xfffffffcU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                       | (0x7fffU & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                     >> 0x1eU)));
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                    = ((0xffc00003U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                       | (0x3ffffcU & ((- (IData)((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                   >> 0x1fU))) 
                                       << 2U)));
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (0x80U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            } else {
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        }
    } else if ((0x10U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        if ((8U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        } else if ((4U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = ((0x7fffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                           | ((IData)((3ULL | ((QData)((IData)(
                                                               (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                >> 0xcU))) 
                                               << 0x13U))) 
                              << 0xfU));
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                        = ((0xffc00000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                           | (((IData)((3ULL | ((QData)((IData)(
                                                                (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                 >> 0xcU))) 
                                                << 0x13U))) 
                               >> 0x11U) | ((IData)(
                                                    ((3ULL 
                                                      | ((QData)((IData)(
                                                                         (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                          >> 0xcU))) 
                                                         << 0x13U)) 
                                                     >> 0x20U)) 
                                            << 0xfU)));
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (8U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                } else {
                    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else if ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = ((0x3fffffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                       | (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
                          << 0x16U));
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                    = ((0xffc00000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                       | (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
                          >> 0xaU));
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (0x8000U | (0xfffc7fffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (8U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = ((0xffc3ffffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                       | (((0x4000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                            ? ((0x2000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                ? ((0x1000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                    ? 7U
                                                    : 6U)
                                                   : 5U))
                            : ((0x2000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                ? ((0x1000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                    ? 4U : 3U) : ((0x1000U 
                                                   & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                   ? 2U
                                                   : 0U))) 
                          << 0x12U));
            } else {
                vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        }
    } else if ((8U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
            = ((4U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                ? ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                    ? ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                        ? (0xfffffff7U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                        : (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]))
                    : (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]))
                : (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
    } else if ((4U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
            = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
    } else if ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        if ((1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = ((0x7fffU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                   | ((IData)((1ULL | ((QData)((IData)(tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                       << 7U))) << 0xfU));
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                = ((0xffc00000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                   | (((IData)((1ULL | ((QData)((IData)(tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                        << 7U))) >> 0x11U) 
                      | ((IData)(((1ULL | ((QData)((IData)(tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                           << 7U)) 
                                  >> 0x20U)) << 0xfU)));
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (0x100U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (0xaU | (0xfffffff1U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
        } else {
            vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        }
    } else {
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
            = (1U | vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                             >> 0x10U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                     >> 0x10U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                    >> 0x10U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                   >> 0x10U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                      >> 0x10U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                       >> 0x10U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:52: Assertion failed in %Ntb_smoke_sv.dut.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      >> 0x10U)));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/../../rtl/warp_core.sv", 52, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((1U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                             >> 4U))) 
                               << 1U) | (0U == (3U 
                                                & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                   >> 4U)))))))) {
        if ((0U != (((1U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                   >> 4U))) << 1U) 
                    | (0U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                    >> 4U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:68: Assertion failed in %Ntb_smoke_sv.dut.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      >> 4U)));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/../../rtl/warp_core.sv", 68, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((1U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                             >> 1U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                     >> 1U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                    >> 1U))))))))) {
        if ((0U != (((1U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                   >> 1U))) << 2U) 
                    | (((2U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                      >> 1U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                       >> 1U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:86: Assertion failed in %Ntb_smoke_sv.dut.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      >> 1U)));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/../../rtl/warp_core.sv", 86, "");
            }
        }
    }
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__is_mem 
        = (IData)((0U != (0x180U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__c_req = ((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q) 
                                                   & (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__is_mem));
}
