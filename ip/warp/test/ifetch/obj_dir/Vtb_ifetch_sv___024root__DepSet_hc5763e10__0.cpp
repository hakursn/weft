// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ifetch_sv.h for the primary calling header

#include "Vtb_ifetch_sv__pch.h"
#include "Vtb_ifetch_sv__Syms.h"
#include "Vtb_ifetch_sv___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__2(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                             8);
        vlSelfRef.tb_ifetch_sv__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ifetch_sv___024root___dump_triggers__act(Vtb_ifetch_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ifetch_sv___024root___eval_triggers__act(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_triggers__act\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_ifetch_sv__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__clk__0 
        = vlSelfRef.tb_ifetch_sv__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__rst_n__0 
        = vlSelfRef.tb_ifetch_sv__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ifetch_sv___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_ifetch_sv___024root___nba_sequent__TOP__0(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___nba_sequent__TOP__0\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__tb_ifetch_sv__DOT__dly;
    __Vdly__tb_ifetch_sv__DOT__dly = 0;
    CData/*1:0*/ __Vdly__tb_ifetch_sv__DOT__st;
    __Vdly__tb_ifetch_sv__DOT__st = 0;
    CData/*0:0*/ __Vdly__tb_ifetch_sv__DOT__dut__DOT__state_q;
    __Vdly__tb_ifetch_sv__DOT__dut__DOT__state_q = 0;
    // Body
    __Vdly__tb_ifetch_sv__DOT__dut__DOT__state_q = vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q;
    __Vdly__tb_ifetch_sv__DOT__dly = vlSelfRef.tb_ifetch_sv__DOT__dly;
    __Vdly__tb_ifetch_sv__DOT__st = vlSelfRef.tb_ifetch_sv__DOT__st;
    if (vlSelfRef.tb_ifetch_sv__DOT__rst_n) {
        if (vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q) {
            if (vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q) {
                if ((1U & (vlSelfRef.tb_ifetch_sv__DOT__rq[0U] 
                           & (IData)(vlSelfRef.tb_ifetch_sv__DOT__rs)))) {
                    __Vdly__tb_ifetch_sv__DOT__dut__DOT__state_q = 0U;
                }
            }
        } else if ((1U & ((vlSelfRef.tb_ifetch_sv__DOT__rq[0U] 
                           >> 1U) & (IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                                             >> 0x29U))))) {
            vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__addr_q 
                = (0xfffffffcU & vlSelfRef.tb_ifetch_sv__DOT__f_pc);
            __Vdly__tb_ifetch_sv__DOT__dut__DOT__state_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q)))))))) {
            if ((0U == (((IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: warp_axi_ifetch.sv:50: Assertion failed in %Ntb_ifetch_sv.dut: unique case, but none matched for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/../../rtl/warp_axi_ifetch.sv", 50, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_axi_ifetch.sv:50: Assertion failed in %Ntb_ifetch_sv.dut: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/../../rtl/warp_axi_ifetch.sv", 50, "");
            }
        }
    } else {
        __Vdly__tb_ifetch_sv__DOT__dut__DOT__state_q = 0U;
        vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__addr_q = 0U;
    }
    if (vlSelfRef.tb_ifetch_sv__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st))) {
            if ((2U & vlSelfRef.tb_ifetch_sv__DOT__rq[0U])) {
                vlSelfRef.tb_ifetch_sv__DOT__raddr 
                    = vlSelfRef.tb_ifetch_sv__DOT__rq[1U];
                vlSelfRef.tb_ifetch_sv__DOT__rid = 
                    (0xfU & vlSelfRef.tb_ifetch_sv__DOT__rq[2U]);
                __Vdly__tb_ifetch_sv__DOT__dly = 2U;
                __Vdly__tb_ifetch_sv__DOT__st = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st))) {
            if ((0U == (IData)(vlSelfRef.tb_ifetch_sv__DOT__dly))) {
                __Vdly__tb_ifetch_sv__DOT__st = 2U;
            } else {
                __Vdly__tb_ifetch_sv__DOT__dly = (3U 
                                                  & ((IData)(vlSelfRef.tb_ifetch_sv__DOT__dly) 
                                                     - (IData)(1U)));
            }
        } else if ((2U == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st))) {
            if ((1U & vlSelfRef.tb_ifetch_sv__DOT__rq[0U])) {
                __Vdly__tb_ifetch_sv__DOT__st = 0U;
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st)))))))) {
            if ((0U == (((2U == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_ifetch_sv__DOT__st)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_ifetch_sv.sv:32: Assertion failed in %Ntb_ifetch_sv: unique case, but none matched for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.tb_ifetch_sv__DOT__st));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 32, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_ifetch_sv.sv:32: Assertion failed in %Ntb_ifetch_sv: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.tb_ifetch_sv__DOT__st));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 32, "");
            }
        }
    } else {
        __Vdly__tb_ifetch_sv__DOT__st = 0U;
        __Vdly__tb_ifetch_sv__DOT__dly = 0U;
    }
    vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q 
        = __Vdly__tb_ifetch_sv__DOT__dut__DOT__state_q;
    vlSelfRef.tb_ifetch_sv__DOT__dly = __Vdly__tb_ifetch_sv__DOT__dly;
    vlSelfRef.tb_ifetch_sv__DOT__st = __Vdly__tb_ifetch_sv__DOT__st;
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
}
