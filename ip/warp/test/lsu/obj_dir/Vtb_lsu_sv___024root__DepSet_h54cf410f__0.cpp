// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lsu_sv.h for the primary calling header

#include "Vtb_lsu_sv__pch.h"
#include "Vtb_lsu_sv___024root.h"

VlCoroutine Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_lsu_sv___024root* vlSelf);
VlCoroutine Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__1(Vtb_lsu_sv___024root* vlSelf);
VlCoroutine Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__2(Vtb_lsu_sv___024root* vlSelf);

void Vtb_lsu_sv___024root___eval_initial(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_initial\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2625a00ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                         59);
    VL_WRITEF_NX("lsu SV: WATCHDOG\n",0);
    VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 59, "");
}

VL_INLINE_OPT VlCoroutine Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__1(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_lsu_sv__DOT__unnamedblk3__DOT__i;
    tb_lsu_sv__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__0__wd;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__wd = 0;
    CData/*3:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__0__be;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__be = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__0__unnamedblk2__DOT__b;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__unnamedblk2__DOT__b = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_rd_check__1__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__2__wd;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__wd = 0;
    CData/*3:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__2__be;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__be = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__2__unnamedblk2__DOT__b;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__unnamedblk2__DOT__b = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_rd_check__3__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__3__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__4__wd;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__wd = 0;
    CData/*3:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__4__be;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__be = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__4__unnamedblk2__DOT__b;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__unnamedblk2__DOT__b = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_rd_check__5__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__5__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__6__wd;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__wd = 0;
    CData/*3:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__6__be;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__be = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__6__unnamedblk2__DOT__b;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__unnamedblk2__DOT__b = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_rd_check__7__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__8__wd;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__wd = 0;
    CData/*3:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__8__be;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__be = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__8__unnamedblk2__DOT__b;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__unnamedblk2__DOT__b = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_rd_check__9__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__9__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_rd_check__10__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__10__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd = 0;
    CData/*3:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 0;
    IData/*31:0*/ __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr = 0;
    // Body
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_addr = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = 0U;
    tb_lsu_sv__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, tb_lsu_sv__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & tb_lsu_sv__DOT__unnamedblk3__DOT__i)] = 0U;
        tb_lsu_sv__DOT__unnamedblk3__DOT__i = ((IData)(1U) 
                                               + tb_lsu_sv__DOT__unnamedblk3__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         63);
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         63);
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         63);
    vlSelfRef.tb_lsu_sv__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         63);
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__wd = 0xcafebabeU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__0__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__0__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__0__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__0__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__unnamedblk2__DOT__b = 1U;
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__0__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__0__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__unnamedblk2__DOT__b = 2U;
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__0__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__0__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__unnamedblk2__DOT__b = 3U;
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__0__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__0__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__0__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__0__unnamedblk2__DOT__b = 4U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__1__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__1__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__1__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__1__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__1__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__wd = 0x11223344U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr = 4U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__2__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__2__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__2__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__2__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__unnamedblk2__DOT__b = 1U;
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__2__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__2__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__unnamedblk2__DOT__b = 2U;
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__2__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__2__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__unnamedblk2__DOT__b = 3U;
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__2__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__2__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__2__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__2__unnamedblk2__DOT__b = 4U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__3__addr = 4U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__3__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__3__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__3__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__3__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__be = 2U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__wd = 0xaa00U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr = 4U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__4__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__4__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__4__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__4__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__unnamedblk2__DOT__b = 1U;
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__4__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__4__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__unnamedblk2__DOT__b = 2U;
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__4__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__4__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__unnamedblk2__DOT__b = 3U;
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__4__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__4__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__4__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__4__unnamedblk2__DOT__b = 4U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__5__addr = 4U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__5__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__5__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__5__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__5__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__be = 9U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__wd = 0xdeadbeefU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr = 8U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__6__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__6__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__6__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__6__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__unnamedblk2__DOT__b = 1U;
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__6__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__6__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__unnamedblk2__DOT__b = 2U;
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__6__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__6__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__unnamedblk2__DOT__b = 3U;
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__6__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__6__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__6__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__6__unnamedblk2__DOT__b = 4U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__7__addr = 8U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__7__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__7__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__7__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__7__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__wd = 0x5a5a5a5aU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr = 0x20U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__8__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__8__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__8__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__8__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__unnamedblk2__DOT__b = 1U;
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__8__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__8__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__unnamedblk2__DOT__b = 2U;
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__8__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__8__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__unnamedblk2__DOT__b = 3U;
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__8__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__8__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__8__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__8__unnamedblk2__DOT__b = 4U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__9__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__9__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__9__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__9__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__9__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__10__addr = 0x20U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__10__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__10__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__10__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__10__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd = 0xa0000000U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr = 0x40U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 1U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 2U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 3U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 4U;
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd = 0xa0000001U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr = 0x44U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 1U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 2U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 3U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 4U;
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd = 0xa0000002U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr = 0x48U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 1U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 2U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 3U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 4U;
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd = 0xa0000003U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr = 0x4cU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 1U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 2U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 3U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 4U;
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd = 0xa0000004U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr = 0x50U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 1U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 2U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 3U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 4U;
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd = 0xa0000005U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr = 0x54U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 1U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 2U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 3U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 4U;
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd = 0xa0000006U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr = 0x58U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 1U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 2U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 3U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 4U;
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be = 0xfU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd = 0xa0000007U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr = 0x5cU;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 0;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         47);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_wdata = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd;
    vlSelfRef.tb_lsu_sv__DOT__d_wstrb = __Vtask_tb_lsu_sv__DOT__lsu_wr__11__be;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 1U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         48);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         49);
    if ((1U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xffU & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((2U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff00U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((4U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff0000U & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    if ((8U & (IData)(__Vtask_tb_lsu_sv__DOT__lsu_wr__11__be))) {
        vlSelfRef.tb_lsu_sv__DOT__shadow[(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelfRef.tb_lsu_sv__DOT__shadow
                [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_wr__11__addr 
                           >> 2U))]) | (0xff000000U 
                                        & __Vtask_tb_lsu_sv__DOT__lsu_wr__11__wd));
    }
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 1U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 2U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 3U;
    __Vtask_tb_lsu_sv__DOT__lsu_wr__11__unnamedblk2__DOT__b = 4U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr = 0x40U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr = 0x44U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr = 0x48U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr = 0x4cU;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr = 0x50U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr = 0x54U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr = 0x58U;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr = 0x5cU;
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         53);
    vlSelfRef.tb_lsu_sv__DOT__d_addr = __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr;
    vlSelfRef.tb_lsu_sv__DOT__d_we = 0U;
    vlSelfRef.tb_lsu_sv__DOT__d_req = 1U;
    co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         54);
    while ((1U & (~ (((1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                      & (IData)(vlSelfRef.tb_lsu_sv__DOT__rs)) 
                     | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                        & (IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                                   >> 0x2aU))))))) {
        co_await vlSelfRef.__VtrigSched_h94f8816d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lsu_sv.clk)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                             54);
    }
    if (VL_UNLIKELY((((IData)((vlSelfRef.tb_lsu_sv__DOT__rs 
                               >> 5U)) != vlSelfRef.tb_lsu_sv__DOT__shadow
                      [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                 >> 2U))])))) {
        vlSelfRef.tb_lsu_sv__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_lsu_sv__DOT__errors);
        VL_WRITEF_NX("LD @%x exp %x got %x\n",0,32,
                     __Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr,
                     32,vlSelfRef.tb_lsu_sv__DOT__shadow
                     [(0xffU & (__Vtask_tb_lsu_sv__DOT__lsu_rd_check__12__addr 
                                >> 2U))],32,(IData)(
                                                    (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                     >> 5U)));
    }
    co_await vlSelfRef.__VtrigSched_h94f88130__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_lsu_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 
                                                         56);
    vlSelfRef.tb_lsu_sv__DOT__d_req = 0U;
    VL_WRITEF_NX("lsu SV: errors=%0d -> %s\n",0,32,
                 vlSelfRef.tb_lsu_sv__DOT__errors,32,
                 ((0U == vlSelfRef.tb_lsu_sv__DOT__errors)
                   ? 0x50415353U : 0x4641494cU));
    VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 71, "");
}

void Vtb_lsu_sv___024root___act_comb__TOP__0(Vtb_lsu_sv___024root* vlSelf);

void Vtb_lsu_sv___024root___eval_act(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_act\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((9ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_lsu_sv___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_lsu_sv___024root___act_comb__TOP__0(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___act_comb__TOP__0\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lsu_sv__DOT__rq[0U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[1U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[3U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[4U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[5U] = 0U;
    vlSelfRef.tb_lsu_sv__DOT__rq[0U] = ((0x7ffffU & 
                                         vlSelfRef.tb_lsu_sv__DOT__rq[0U]) 
                                        | ((IData)(
                                                   (9ULL 
                                                    | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                       << 0xdU))) 
                                           << 0x13U));
    vlSelfRef.tb_lsu_sv__DOT__rq[1U] = (((IData)((9ULL 
                                                  | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                     << 0xdU))) 
                                         >> 0xdU) | 
                                        ((IData)(((9ULL 
                                                   | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                      << 0xdU)) 
                                                  >> 0x20U)) 
                                         << 0x13U));
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = ((0xfffffff0U 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[2U]) 
                                        | ((IData)(
                                                   ((9ULL 
                                                     | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                        << 0xdU)) 
                                                    >> 0x20U)) 
                                           >> 0xdU));
    vlSelfRef.tb_lsu_sv__DOT__rq[0U] = ((0xfffffffdU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[0U]) 
                                        | ((((0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                             & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_req)) 
                                            & (~ (IData)(vlSelfRef.tb_lsu_sv__DOT__d_we))) 
                                           << 1U));
    vlSelfRef.tb_lsu_sv__DOT__rq[0U] = ((0xfffffffeU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[0U]) 
                                        | (1U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)));
    vlSelfRef.tb_lsu_sv__DOT__rq[4U] = ((0xfU & vlSelfRef.tb_lsu_sv__DOT__rq[4U]) 
                                        | ((IData)(
                                                   (9ULL 
                                                    | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                       << 0xdU))) 
                                           << 4U));
    vlSelfRef.tb_lsu_sv__DOT__rq[5U] = (0x1fffffU & 
                                        (((IData)((9ULL 
                                                   | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                      << 0xdU))) 
                                          >> 0x1cU) 
                                         | ((IData)(
                                                    ((9ULL 
                                                      | ((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_addr)) 
                                                         << 0xdU)) 
                                                     >> 0x20U)) 
                                            << 4U)));
    vlSelfRef.tb_lsu_sv__DOT__rq[3U] = ((0xffffefffU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[3U]) 
                                        | (((((0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                              & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_req)) 
                                             & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_we)) 
                                            & (~ (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_ok_q))) 
                                           << 0xcU));
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = ((0x7fU & vlSelfRef.tb_lsu_sv__DOT__rq[2U]) 
                                        | ((IData)(
                                                   (((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wdata)) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      (1U 
                                                                       | ((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wstrb) 
                                                                          << 1U)))))) 
                                           << 7U));
    vlSelfRef.tb_lsu_sv__DOT__rq[3U] = ((0xfffff000U 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[3U]) 
                                        | (((IData)(
                                                    (((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wdata)) 
                                                      << 5U) 
                                                     | (QData)((IData)(
                                                                       (1U 
                                                                        | ((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wstrb) 
                                                                           << 1U)))))) 
                                            >> 0x19U) 
                                           | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wdata)) 
                                                         << 5U) 
                                                        | (QData)((IData)(
                                                                          (1U 
                                                                           | ((IData)(vlSelfRef.tb_lsu_sv__DOT__d_wstrb) 
                                                                              << 1U))))) 
                                                       >> 0x20U)) 
                                              << 7U)));
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = ((0xffffffdfU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[2U]) 
                                        | (((((0U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                              & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_req)) 
                                             & (IData)(vlSelfRef.tb_lsu_sv__DOT__d_we)) 
                                            & (~ (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_ok_q))) 
                                           << 5U));
    vlSelfRef.tb_lsu_sv__DOT__rq[2U] = ((0xffffffefU 
                                         & vlSelfRef.tb_lsu_sv__DOT__rq[2U]) 
                                        | ((2U == (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__state_q)) 
                                           << 4U));
    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_hs = ((vlSelfRef.tb_lsu_sv__DOT__rq[3U] 
                                                  >> 0xcU) 
                                                 & (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                    >> 0x33U));
    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_hs = (1U 
                                                & ((vlSelfRef.tb_lsu_sv__DOT__rq[2U] 
                                                    >> 5U) 
                                                   & (IData)(
                                                             (vlSelfRef.tb_lsu_sv__DOT__rs 
                                                              >> 0x32U))));
    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_done = ((IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_ok_q) 
                                                   | (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__aw_hs));
    vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_done = ((IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_ok_q) 
                                                  | (IData)(vlSelfRef.tb_lsu_sv__DOT__dut__DOT__w_hs));
}

void Vtb_lsu_sv___024root___nba_sequent__TOP__0(Vtb_lsu_sv___024root* vlSelf);

void Vtb_lsu_sv___024root___eval_nba(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_nba\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_lsu_sv___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_lsu_sv___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_lsu_sv___024root___timing_resume(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___timing_resume\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h94f8816d__0.resume(
                                                   "@(posedge tb_lsu_sv.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h94f88130__0.resume(
                                                   "@(negedge tb_lsu_sv.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_lsu_sv___024root___timing_commit(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___timing_commit\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h94f8816d__0.commit(
                                                   "@(posedge tb_lsu_sv.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h94f88130__0.commit(
                                                   "@(negedge tb_lsu_sv.clk)");
    }
}

void Vtb_lsu_sv___024root___eval_triggers__act(Vtb_lsu_sv___024root* vlSelf);

bool Vtb_lsu_sv___024root___eval_phase__act(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_phase__act\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_lsu_sv___024root___eval_triggers__act(vlSelf);
    Vtb_lsu_sv___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_lsu_sv___024root___timing_resume(vlSelf);
        Vtb_lsu_sv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_lsu_sv___024root___eval_phase__nba(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_phase__nba\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_lsu_sv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lsu_sv___024root___dump_triggers__nba(Vtb_lsu_sv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lsu_sv___024root___dump_triggers__act(Vtb_lsu_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_lsu_sv___024root___eval(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_lsu_sv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_lsu_sv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/lsu/tb_lsu_sv.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_lsu_sv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_lsu_sv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_lsu_sv___024root___eval_debug_assertions(Vtb_lsu_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lsu_sv___024root___eval_debug_assertions\n"); );
    Vtb_lsu_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
