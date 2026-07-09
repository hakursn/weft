// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ifetch_sv.h for the primary calling header

#include "Vtb_ifetch_sv__pch.h"
#include "Vtb_ifetch_sv___024root.h"

VlCoroutine Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_ifetch_sv___024root* vlSelf);
VlCoroutine Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__1(Vtb_ifetch_sv___024root* vlSelf);
VlCoroutine Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__2(Vtb_ifetch_sv___024root* vlSelf);

void Vtb_ifetch_sv___024root___eval_initial(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_initial\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1312d00ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                         47);
    VL_WRITEF_NX("ifetch SV: WATCHDOG\n",0);
    VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 47, "");
}

VL_INLINE_OPT VlCoroutine Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__1(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc = 0;
    IData/*31:0*/ __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__2__addr;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__addr = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__3__Vfuncout;
    __Vfunc_tb_ifetch_sv__DOT__imem__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__3__addr;
    __Vfunc_tb_ifetch_sv__DOT__imem__3__addr = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__4__Vfuncout;
    __Vfunc_tb_ifetch_sv__DOT__imem__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__4__addr;
    __Vfunc_tb_ifetch_sv__DOT__imem__4__addr = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__5__Vfuncout;
    __Vfunc_tb_ifetch_sv__DOT__imem__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__5__addr;
    __Vfunc_tb_ifetch_sv__DOT__imem__5__addr = 0;
    IData/*31:0*/ __Vtask_tb_ifetch_sv__DOT__fetch_check__6__pc;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__6__pc = 0;
    IData/*31:0*/ __Vtask_tb_ifetch_sv__DOT__fetch_check__6__exp;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__6__exp = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__7__Vfuncout;
    __Vfunc_tb_ifetch_sv__DOT__imem__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__7__addr;
    __Vfunc_tb_ifetch_sv__DOT__imem__7__addr = 0;
    // Body
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = 0x80000000U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         50);
    vlSelfRef.tb_ifetch_sv__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         50);
    __Vfunc_tb_ifetch_sv__DOT__imem__2__addr = 0x80000000U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout = 
        ((IData)(0xaabb0000U) + VL_SHIFTR_III(32,32,32, 
                                              (__Vfunc_tb_ifetch_sv__DOT__imem__2__addr 
                                               - (IData)(0x80000000U)), 2U));
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp 
        = __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc = 0x80000000U;
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         41);
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc;
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 1U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         42);
    while ((1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_rvalid)))) {
        co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ifetch_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                             42);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                               >> 5U)) != __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp)))) {
        vlSelfRef.tb_ifetch_sv__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.tb_ifetch_sv__DOT__errors);
        VL_WRITEF_NX("FETCH @%x exp %x got %x\n",0,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp,
                     32,(IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                                 >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         44);
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 0U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__addr = 0x80000004U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout = 
        ((IData)(0xaabb0000U) + VL_SHIFTR_III(32,32,32, 
                                              (__Vfunc_tb_ifetch_sv__DOT__imem__2__addr 
                                               - (IData)(0x80000000U)), 2U));
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp 
        = __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc = 0x80000004U;
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         41);
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc;
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 1U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         42);
    while ((1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_rvalid)))) {
        co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ifetch_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                             42);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                               >> 5U)) != __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp)))) {
        vlSelfRef.tb_ifetch_sv__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.tb_ifetch_sv__DOT__errors);
        VL_WRITEF_NX("FETCH @%x exp %x got %x\n",0,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp,
                     32,(IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                                 >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         44);
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 0U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__addr = 0x80000008U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout = 
        ((IData)(0xaabb0000U) + VL_SHIFTR_III(32,32,32, 
                                              (__Vfunc_tb_ifetch_sv__DOT__imem__2__addr 
                                               - (IData)(0x80000000U)), 2U));
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp 
        = __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc = 0x80000008U;
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         41);
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc;
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 1U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         42);
    while ((1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_rvalid)))) {
        co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ifetch_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                             42);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                               >> 5U)) != __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp)))) {
        vlSelfRef.tb_ifetch_sv__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.tb_ifetch_sv__DOT__errors);
        VL_WRITEF_NX("FETCH @%x exp %x got %x\n",0,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp,
                     32,(IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                                 >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         44);
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 0U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__addr = 0x8000000cU;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout = 
        ((IData)(0xaabb0000U) + VL_SHIFTR_III(32,32,32, 
                                              (__Vfunc_tb_ifetch_sv__DOT__imem__2__addr 
                                               - (IData)(0x80000000U)), 2U));
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp 
        = __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc = 0x8000000cU;
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         41);
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc;
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 1U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         42);
    while ((1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_rvalid)))) {
        co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ifetch_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                             42);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                               >> 5U)) != __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp)))) {
        vlSelfRef.tb_ifetch_sv__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.tb_ifetch_sv__DOT__errors);
        VL_WRITEF_NX("FETCH @%x exp %x got %x\n",0,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp,
                     32,(IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                                 >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         44);
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 0U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__addr = 0x80000010U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout = 
        ((IData)(0xaabb0000U) + VL_SHIFTR_III(32,32,32, 
                                              (__Vfunc_tb_ifetch_sv__DOT__imem__2__addr 
                                               - (IData)(0x80000000U)), 2U));
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp 
        = __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc = 0x80000010U;
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         41);
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc;
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 1U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         42);
    while ((1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_rvalid)))) {
        co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ifetch_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                             42);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                               >> 5U)) != __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp)))) {
        vlSelfRef.tb_ifetch_sv__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.tb_ifetch_sv__DOT__errors);
        VL_WRITEF_NX("FETCH @%x exp %x got %x\n",0,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp,
                     32,(IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                                 >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         44);
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 0U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__addr = 0x80000014U;
    __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout = 
        ((IData)(0xaabb0000U) + VL_SHIFTR_III(32,32,32, 
                                              (__Vfunc_tb_ifetch_sv__DOT__imem__2__addr 
                                               - (IData)(0x80000000U)), 2U));
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp 
        = __Vfunc_tb_ifetch_sv__DOT__imem__2__Vfuncout;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc = 0x80000014U;
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         41);
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = __Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc;
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 1U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         42);
    while ((1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_rvalid)))) {
        co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ifetch_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                             42);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                               >> 5U)) != __Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp)))) {
        vlSelfRef.tb_ifetch_sv__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.tb_ifetch_sv__DOT__errors);
        VL_WRITEF_NX("FETCH @%x exp %x got %x\n",0,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__pc,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__1__exp,
                     32,(IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                                 >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         44);
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 0U;
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         57);
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = 0x80000008U;
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 1U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         58);
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         58);
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = 0x80000050U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         60);
    while ((1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_rvalid)))) {
        co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ifetch_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                             60);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                               >> 5U)) != ([&]() {
                            __Vfunc_tb_ifetch_sv__DOT__imem__3__addr = 0x80000050U;
                            __Vfunc_tb_ifetch_sv__DOT__imem__3__Vfuncout 
                                = ((IData)(0xaabb0000U) 
                                   + VL_SHIFTR_III(32,32,32, 
                                                   (__Vfunc_tb_ifetch_sv__DOT__imem__3__addr 
                                                    - (IData)(0x80000000U)), 2U));
                        }(), __Vfunc_tb_ifetch_sv__DOT__imem__3__Vfuncout))))) {
        vlSelfRef.tb_ifetch_sv__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.tb_ifetch_sv__DOT__errors);
        VL_WRITEF_NX("REDIRECT exp %x got %x\n",0,32,
                     ([&]() {
                        __Vfunc_tb_ifetch_sv__DOT__imem__4__addr = 0x80000050U;
                        __Vfunc_tb_ifetch_sv__DOT__imem__4__Vfuncout 
                            = ((IData)(0xaabb0000U) 
                               + VL_SHIFTR_III(32,32,32, 
                                               (__Vfunc_tb_ifetch_sv__DOT__imem__4__addr 
                                                - (IData)(0x80000000U)), 2U));
                    }(), __Vfunc_tb_ifetch_sv__DOT__imem__4__Vfuncout),
                     32,(IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                                 >> 5U)));
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                               >> 5U)) == ([&]() {
                            __Vfunc_tb_ifetch_sv__DOT__imem__5__addr = 0x80000008U;
                            __Vfunc_tb_ifetch_sv__DOT__imem__5__Vfuncout 
                                = ((IData)(0xaabb0000U) 
                                   + VL_SHIFTR_III(32,32,32, 
                                                   (__Vfunc_tb_ifetch_sv__DOT__imem__5__addr 
                                                    - (IData)(0x80000000U)), 2U));
                        }(), __Vfunc_tb_ifetch_sv__DOT__imem__5__Vfuncout))))) {
        vlSelfRef.tb_ifetch_sv__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.tb_ifetch_sv__DOT__errors);
        VL_WRITEF_NX("REDIRECT delivered STALE pcA data\n",0);
    }
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         63);
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 0U;
    __Vfunc_tb_ifetch_sv__DOT__imem__7__addr = 0x80000054U;
    __Vfunc_tb_ifetch_sv__DOT__imem__7__Vfuncout = 
        ((IData)(0xaabb0000U) + VL_SHIFTR_III(32,32,32, 
                                              (__Vfunc_tb_ifetch_sv__DOT__imem__7__addr 
                                               - (IData)(0x80000000U)), 2U));
    __Vtask_tb_ifetch_sv__DOT__fetch_check__6__exp 
        = __Vfunc_tb_ifetch_sv__DOT__imem__7__Vfuncout;
    __Vtask_tb_ifetch_sv__DOT__fetch_check__6__pc = 0x80000054U;
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         41);
    vlSelfRef.tb_ifetch_sv__DOT__f_pc = __Vtask_tb_ifetch_sv__DOT__fetch_check__6__pc;
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 1U;
    co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         42);
    while ((1U & (~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_rvalid)))) {
        co_await vlSelfRef.__VtrigSched_h434713d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ifetch_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                             42);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                               >> 5U)) != __Vtask_tb_ifetch_sv__DOT__fetch_check__6__exp)))) {
        vlSelfRef.tb_ifetch_sv__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.tb_ifetch_sv__DOT__errors);
        VL_WRITEF_NX("FETCH @%x exp %x got %x\n",0,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__6__pc,
                     32,__Vtask_tb_ifetch_sv__DOT__fetch_check__6__exp,
                     32,(IData)((vlSelfRef.tb_ifetch_sv__DOT__rs 
                                 >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h43471396__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ifetch_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 
                                                         44);
    vlSelfRef.tb_ifetch_sv__DOT__f_req = 0U;
    VL_WRITEF_NX("ifetch SV: errors=%0d -> %s\n",0,
                 32,vlSelfRef.tb_ifetch_sv__DOT__errors,
                 32,((0U == vlSelfRef.tb_ifetch_sv__DOT__errors)
                      ? 0x50415353U : 0x4641494cU));
    VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 68, "");
}

void Vtb_ifetch_sv___024root___act_comb__TOP__0(Vtb_ifetch_sv___024root* vlSelf);

void Vtb_ifetch_sv___024root___eval_act(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_act\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((9ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_ifetch_sv___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ifetch_sv___024root___act_comb__TOP__0(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___act_comb__TOP__0\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ifetch_sv__DOT__rq[0U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[1U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[2U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[3U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[4U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[5U] = 0U;
    vlSelfRef.tb_ifetch_sv__DOT__rq[0U] = (0x480000U 
                                           | (0x7ffffU 
                                              & vlSelfRef.tb_ifetch_sv__DOT__rq[0U]));
    vlSelfRef.tb_ifetch_sv__DOT__rq[1U] = (IData)((QData)((IData)(
                                                                  (0xfffffffcU 
                                                                   & vlSelfRef.tb_ifetch_sv__DOT__f_pc))));
    vlSelfRef.tb_ifetch_sv__DOT__rq[2U] = ((0xfffffff0U 
                                            & vlSelfRef.tb_ifetch_sv__DOT__rq[2U]) 
                                           | (IData)(
                                                     ((QData)((IData)(
                                                                      (0xfffffffcU 
                                                                       & vlSelfRef.tb_ifetch_sv__DOT__f_pc))) 
                                                      >> 0x20U)));
    vlSelfRef.tb_ifetch_sv__DOT__rq[0U] = ((0xfffffffcU 
                                            & vlSelfRef.tb_ifetch_sv__DOT__rq[0U]) 
                                           | ((((~ (IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q)) 
                                                & (IData)(vlSelfRef.tb_ifetch_sv__DOT__f_req)) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q)));
    vlSelfRef.tb_ifetch_sv__DOT__f_rvalid = (((IData)(vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__state_q) 
                                              & (IData)(vlSelfRef.tb_ifetch_sv__DOT__rs)) 
                                             & ((IData)(vlSelfRef.tb_ifetch_sv__DOT__f_req) 
                                                & (vlSelfRef.tb_ifetch_sv__DOT__dut__DOT__addr_q 
                                                   == 
                                                   (0xfffffffcU 
                                                    & vlSelfRef.tb_ifetch_sv__DOT__f_pc))));
}

void Vtb_ifetch_sv___024root___nba_sequent__TOP__0(Vtb_ifetch_sv___024root* vlSelf);

void Vtb_ifetch_sv___024root___eval_nba(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_nba\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ifetch_sv___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ifetch_sv___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_ifetch_sv___024root___timing_resume(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___timing_resume\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h434713d7__0.resume(
                                                   "@(posedge tb_ifetch_sv.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h43471396__0.resume(
                                                   "@(negedge tb_ifetch_sv.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ifetch_sv___024root___timing_commit(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___timing_commit\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h434713d7__0.commit(
                                                   "@(posedge tb_ifetch_sv.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h43471396__0.commit(
                                                   "@(negedge tb_ifetch_sv.clk)");
    }
}

void Vtb_ifetch_sv___024root___eval_triggers__act(Vtb_ifetch_sv___024root* vlSelf);

bool Vtb_ifetch_sv___024root___eval_phase__act(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_phase__act\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ifetch_sv___024root___eval_triggers__act(vlSelf);
    Vtb_ifetch_sv___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ifetch_sv___024root___timing_resume(vlSelf);
        Vtb_ifetch_sv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ifetch_sv___024root___eval_phase__nba(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_phase__nba\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ifetch_sv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ifetch_sv___024root___dump_triggers__nba(Vtb_ifetch_sv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ifetch_sv___024root___dump_triggers__act(Vtb_ifetch_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ifetch_sv___024root___eval(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_ifetch_sv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_ifetch_sv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/ifetch/tb_ifetch_sv.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ifetch_sv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ifetch_sv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ifetch_sv___024root___eval_debug_assertions(Vtb_ifetch_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ifetch_sv___024root___eval_debug_assertions\n"); );
    Vtb_ifetch_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
