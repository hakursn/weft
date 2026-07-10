// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_sv.h for the primary calling header

#include "Vtb_uart_sv__pch.h"
#include "Vtb_uart_sv__Syms.h"
#include "Vtb_uart_sv___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_uart_sv___024root___eval_initial__TOP__Vtiming__2(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/uart/test/uart/tb_uart_sv.sv", 
                                             8);
        vlSelfRef.tb_uart_sv__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_uart_sv__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_sv___024root___dump_triggers__act(Vtb_uart_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_uart_sv___024root___eval_triggers__act(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___eval_triggers__act\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_uart_sv__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_uart_sv__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.tb_uart_sv__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((~ (IData)(vlSelfRef.tb_uart_sv__DOT__tx)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__tx__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__clk__0 
        = vlSelfRef.tb_uart_sv__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__rst_n__0 
        = vlSelfRef.tb_uart_sv__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_sv__DOT__tx__0 
        = vlSelfRef.tb_uart_sv__DOT__tx;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_uart_sv___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_uart_sv___024root___nba_sequent__TOP__0(Vtb_uart_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_sv___024root___nba_sequent__TOP__0\n"); );
    Vtb_uart_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__tb_uart_sv__DOT__dut__DOT__tx_sh;
    __Vdly__tb_uart_sv__DOT__dut__DOT__tx_sh = 0;
    CData/*3:0*/ __Vdly__tb_uart_sv__DOT__dut__DOT__tx_bits;
    __Vdly__tb_uart_sv__DOT__dut__DOT__tx_bits = 0;
    SData/*15:0*/ __Vdly__tb_uart_sv__DOT__dut__DOT__tx_div;
    __Vdly__tb_uart_sv__DOT__dut__DOT__tx_div = 0;
    CData/*1:0*/ __Vdly__tb_uart_sv__DOT__dut__DOT__w_q;
    __Vdly__tb_uart_sv__DOT__dut__DOT__w_q = 0;
    CData/*0:0*/ __Vdly__tb_uart_sv__DOT__dut__DOT__r_q;
    __Vdly__tb_uart_sv__DOT__dut__DOT__r_q = 0;
    // Body
    __Vdly__tb_uart_sv__DOT__dut__DOT__w_q = vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q;
    __Vdly__tb_uart_sv__DOT__dut__DOT__r_q = vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q;
    __Vdly__tb_uart_sv__DOT__dut__DOT__tx_div = vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_div;
    __Vdly__tb_uart_sv__DOT__dut__DOT__tx_sh = vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_sh;
    __Vdly__tb_uart_sv__DOT__dut__DOT__tx_bits = vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_bits;
    if (vlSelfRef.tb_uart_sv__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_bits))) {
            if (((1U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)) 
                 & ((vlSelfRef.tb_uart_sv__DOT__req[2U] 
                     >> 6U) & (0U == (0xcU & (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__waddr_q)))))) {
                __Vdly__tb_uart_sv__DOT__dut__DOT__tx_sh 
                    = (0x200U | (0x1feU & (vlSelfRef.tb_uart_sv__DOT__req[2U] 
                                           >> 0xcU)));
                __Vdly__tb_uart_sv__DOT__dut__DOT__tx_bits = 0xaU;
                __Vdly__tb_uart_sv__DOT__dut__DOT__tx_div = 7U;
            }
        } else if ((0U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_div))) {
            __Vdly__tb_uart_sv__DOT__dut__DOT__tx_sh 
                = (0x200U | (0x1ffU & ((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_sh) 
                                       >> 1U)));
            __Vdly__tb_uart_sv__DOT__dut__DOT__tx_bits 
                = (0xfU & ((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_bits) 
                           - (IData)(1U)));
            __Vdly__tb_uart_sv__DOT__dut__DOT__tx_div = 7U;
        } else {
            __Vdly__tb_uart_sv__DOT__dut__DOT__tx_div 
                = (0xffffU & ((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_div) 
                              - (IData)(1U)));
        }
    } else {
        __Vdly__tb_uart_sv__DOT__dut__DOT__tx_sh = 0x3ffU;
        __Vdly__tb_uart_sv__DOT__dut__DOT__tx_bits = 0U;
        __Vdly__tb_uart_sv__DOT__dut__DOT__tx_div = 0U;
    }
    vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_div = __Vdly__tb_uart_sv__DOT__dut__DOT__tx_div;
    vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_sh = __Vdly__tb_uart_sv__DOT__dut__DOT__tx_sh;
    vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_bits = __Vdly__tb_uart_sv__DOT__dut__DOT__tx_bits;
    vlSelfRef.tb_uart_sv__DOT__tx = (1U & ((0U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_bits)) 
                                           | (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_sh)));
    if (vlSelfRef.tb_uart_sv__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q))) {
            if ((0x2000U & vlSelfRef.tb_uart_sv__DOT__req[3U])) {
                vlSelfRef.tb_uart_sv__DOT__dut__DOT__waddr_q 
                    = (0xfffU & (vlSelfRef.tb_uart_sv__DOT__req[4U] 
                                 >> 0x12U));
                vlSelfRef.tb_uart_sv__DOT__dut__DOT__wid_q 
                    = (0x1fU & (vlSelfRef.tb_uart_sv__DOT__req[5U] 
                                >> 0x12U));
                __Vdly__tb_uart_sv__DOT__dut__DOT__w_q = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q))) {
            if ((IData)((0x140U == (0x140U & vlSelfRef.tb_uart_sv__DOT__req[2U])))) {
                __Vdly__tb_uart_sv__DOT__dut__DOT__w_q = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q))) {
            if ((0x20U & vlSelfRef.tb_uart_sv__DOT__req[2U])) {
                __Vdly__tb_uart_sv__DOT__dut__DOT__w_q = 0U;
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)))))))) {
            if ((0U == (((2U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_uart.sv:64: Assertion failed in %Ntb_uart_sv.dut: unique case, but none matched for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/uart/test/uart/../../rtl/weft_uart.sv", 64, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: weft_uart.sv:64: Assertion failed in %Ntb_uart_sv.dut: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/uart/test/uart/../../rtl/weft_uart.sv", 64, "");
            }
        }
        if (vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q) {
            if (vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q) {
                if ((1U & vlSelfRef.tb_uart_sv__DOT__req[0U])) {
                    __Vdly__tb_uart_sv__DOT__dut__DOT__r_q = 0U;
                }
            }
        } else if ((2U & vlSelfRef.tb_uart_sv__DOT__req[0U])) {
            vlSelfRef.tb_uart_sv__DOT__dut__DOT__raddr_q 
                = (0xfffU & vlSelfRef.tb_uart_sv__DOT__req[1U]);
            vlSelfRef.tb_uart_sv__DOT__dut__DOT__rid_q 
                = (0x1fU & vlSelfRef.tb_uart_sv__DOT__req[2U]);
            __Vdly__tb_uart_sv__DOT__dut__DOT__r_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q)))))))) {
            if ((0U == (((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_uart.sv:69: Assertion failed in %Ntb_uart_sv.dut: unique case, but none matched for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/uart/test/uart/../../rtl/weft_uart.sv", 69, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: weft_uart.sv:69: Assertion failed in %Ntb_uart_sv.dut: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/uart/test/uart/../../rtl/weft_uart.sv", 69, "");
            }
        }
    } else {
        __Vdly__tb_uart_sv__DOT__dut__DOT__w_q = 0U;
        __Vdly__tb_uart_sv__DOT__dut__DOT__r_q = 0U;
    }
    vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q = __Vdly__tb_uart_sv__DOT__dut__DOT__w_q;
    vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q = __Vdly__tb_uart_sv__DOT__dut__DOT__r_q;
    vlSelfRef.tb_uart_sv__DOT__rsp = 0ULL;
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0xfffffffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         (((0U 
                                                            == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)) 
                                                           << 1U) 
                                                          | (1U 
                                                             == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q))))) 
                                         << 0x34U));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3ff7ffffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         (2U 
                                                          == (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__w_q)))) 
                                         << 0x2bU));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x301fffffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         ((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__wid_q) 
                                                          << 2U))) 
                                         << 0x2dU));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3ffbffffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q))))) 
                                         << 0x2aU));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3ffffffffffffeULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | (IData)((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__r_q)));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3ffc1fffffffffULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__rid_q)) 
                                         << 0x25U));
    vlSelfRef.tb_uart_sv__DOT__rsp = ((0x3fffe00000001fULL 
                                       & vlSelfRef.tb_uart_sv__DOT__rsp) 
                                      | ((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__raddr_q) 
                                                               >> 2U)))
                                                           ? 
                                                          (0U 
                                                           != (IData)(vlSelfRef.tb_uart_sv__DOT__dut__DOT__tx_bits))
                                                           : 0U))) 
                                         << 5U));
    vlSelfRef.tb_uart_sv__DOT__rsp = (4ULL | (0x3fffffffffffe3ULL 
                                              & vlSelfRef.tb_uart_sv__DOT__rsp));
}
