// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_regfile_sv.h for the primary calling header

#include "Vtb_regfile_sv__pch.h"
#include "Vtb_regfile_sv___024root.h"

VlCoroutine Vtb_regfile_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_regfile_sv___024root* vlSelf);
VlCoroutine Vtb_regfile_sv___024root___eval_initial__TOP__Vtiming__1(Vtb_regfile_sv___024root* vlSelf);

void Vtb_regfile_sv___024root___eval_initial(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___eval_initial\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_regfile_sv___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_regfile_sv___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_regfile_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtask_tb_regfile_sv__DOT__wr__0__a;
    __Vtask_tb_regfile_sv__DOT__wr__0__a = 0;
    IData/*31:0*/ __Vtask_tb_regfile_sv__DOT__wr__0__d;
    __Vtask_tb_regfile_sv__DOT__wr__0__d = 0;
    CData/*4:0*/ __Vtask_tb_regfile_sv__DOT__wr__1__a;
    __Vtask_tb_regfile_sv__DOT__wr__1__a = 0;
    IData/*31:0*/ __Vtask_tb_regfile_sv__DOT__wr__1__d;
    __Vtask_tb_regfile_sv__DOT__wr__1__d = 0;
    CData/*4:0*/ __Vtask_tb_regfile_sv__DOT__wr__2__a;
    __Vtask_tb_regfile_sv__DOT__wr__2__a = 0;
    IData/*31:0*/ __Vtask_tb_regfile_sv__DOT__wr__2__d;
    __Vtask_tb_regfile_sv__DOT__wr__2__d = 0;
    CData/*4:0*/ __Vtask_tb_regfile_sv__DOT__chk__3__a;
    __Vtask_tb_regfile_sv__DOT__chk__3__a = 0;
    IData/*31:0*/ __Vtask_tb_regfile_sv__DOT__chk__3__exp;
    __Vtask_tb_regfile_sv__DOT__chk__3__exp = 0;
    CData/*4:0*/ __Vtask_tb_regfile_sv__DOT__chk__4__a;
    __Vtask_tb_regfile_sv__DOT__chk__4__a = 0;
    IData/*31:0*/ __Vtask_tb_regfile_sv__DOT__chk__4__exp;
    __Vtask_tb_regfile_sv__DOT__chk__4__exp = 0;
    CData/*4:0*/ __Vtask_tb_regfile_sv__DOT__chk__5__a;
    __Vtask_tb_regfile_sv__DOT__chk__5__a = 0;
    IData/*31:0*/ __Vtask_tb_regfile_sv__DOT__chk__5__exp;
    __Vtask_tb_regfile_sv__DOT__chk__5__exp = 0;
    CData/*4:0*/ __Vtask_tb_regfile_sv__DOT__chk__6__a;
    __Vtask_tb_regfile_sv__DOT__chk__6__a = 0;
    IData/*31:0*/ __Vtask_tb_regfile_sv__DOT__chk__6__exp;
    __Vtask_tb_regfile_sv__DOT__chk__6__exp = 0;
    CData/*4:0*/ __Vtask_tb_regfile_sv__DOT__wr__7__a;
    __Vtask_tb_regfile_sv__DOT__wr__7__a = 0;
    IData/*31:0*/ __Vtask_tb_regfile_sv__DOT__wr__7__d;
    __Vtask_tb_regfile_sv__DOT__wr__7__d = 0;
    CData/*4:0*/ __Vtask_tb_regfile_sv__DOT__chk__8__a;
    __Vtask_tb_regfile_sv__DOT__chk__8__a = 0;
    IData/*31:0*/ __Vtask_tb_regfile_sv__DOT__chk__8__exp;
    __Vtask_tb_regfile_sv__DOT__chk__8__exp = 0;
    // Body
    vlSelfRef.tb_regfile_sv__DOT__we = 0U;
    vlSelfRef.tb_regfile_sv__DOT__wa = 0U;
    vlSelfRef.tb_regfile_sv__DOT__wd = 0U;
    vlSelfRef.tb_regfile_sv__DOT__ra1 = 0U;
    vlSelfRef.tb_regfile_sv__DOT__ra2 = 0U;
    __Vtask_tb_regfile_sv__DOT__wr__0__d = 0xdeadbeefU;
    __Vtask_tb_regfile_sv__DOT__wr__0__a = 1U;
    co_await vlSelfRef.__VtrigSched_hbefaadd0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    vlSelfRef.tb_regfile_sv__DOT__we = 1U;
    vlSelfRef.tb_regfile_sv__DOT__wa = __Vtask_tb_regfile_sv__DOT__wr__0__a;
    vlSelfRef.tb_regfile_sv__DOT__wd = __Vtask_tb_regfile_sv__DOT__wr__0__d;
    co_await vlSelfRef.__VtrigSched_hbefaa70d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    co_await vlSelfRef.__VtrigSched_hbefaadd0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    vlSelfRef.tb_regfile_sv__DOT__we = 0U;
    __Vtask_tb_regfile_sv__DOT__wr__1__d = 0x12345678U;
    __Vtask_tb_regfile_sv__DOT__wr__1__a = 0x1fU;
    co_await vlSelfRef.__VtrigSched_hbefaadd0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    vlSelfRef.tb_regfile_sv__DOT__we = 1U;
    vlSelfRef.tb_regfile_sv__DOT__wa = __Vtask_tb_regfile_sv__DOT__wr__1__a;
    vlSelfRef.tb_regfile_sv__DOT__wd = __Vtask_tb_regfile_sv__DOT__wr__1__d;
    co_await vlSelfRef.__VtrigSched_hbefaa70d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    co_await vlSelfRef.__VtrigSched_hbefaadd0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    vlSelfRef.tb_regfile_sv__DOT__we = 0U;
    __Vtask_tb_regfile_sv__DOT__wr__2__d = 0xcafebabeU;
    __Vtask_tb_regfile_sv__DOT__wr__2__a = 0xfU;
    co_await vlSelfRef.__VtrigSched_hbefaadd0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    vlSelfRef.tb_regfile_sv__DOT__we = 1U;
    vlSelfRef.tb_regfile_sv__DOT__wa = __Vtask_tb_regfile_sv__DOT__wr__2__a;
    vlSelfRef.tb_regfile_sv__DOT__wd = __Vtask_tb_regfile_sv__DOT__wr__2__d;
    co_await vlSelfRef.__VtrigSched_hbefaa70d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    co_await vlSelfRef.__VtrigSched_hbefaadd0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    vlSelfRef.tb_regfile_sv__DOT__we = 0U;
    __Vtask_tb_regfile_sv__DOT__chk__3__exp = 0xdeadbeefU;
    __Vtask_tb_regfile_sv__DOT__chk__3__a = 1U;
    vlSelfRef.tb_regfile_sv__DOT__ra1 = __Vtask_tb_regfile_sv__DOT__chk__3__a;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                         9);
    if (VL_UNLIKELY(((vlSelfRef.tb_regfile_sv__DOT__rd1 
                      != __Vtask_tb_regfile_sv__DOT__chk__3__exp)))) {
        vlSelfRef.tb_regfile_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_regfile_sv__DOT__errors);
        VL_WRITEF_NX("R[%0#] exp %x got %x\n",0,5,__Vtask_tb_regfile_sv__DOT__chk__3__a,
                     32,__Vtask_tb_regfile_sv__DOT__chk__3__exp,
                     32,vlSelfRef.tb_regfile_sv__DOT__rd1);
    }
    __Vtask_tb_regfile_sv__DOT__chk__4__exp = 0x12345678U;
    __Vtask_tb_regfile_sv__DOT__chk__4__a = 0x1fU;
    vlSelfRef.tb_regfile_sv__DOT__ra1 = __Vtask_tb_regfile_sv__DOT__chk__4__a;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                         9);
    if (VL_UNLIKELY(((vlSelfRef.tb_regfile_sv__DOT__rd1 
                      != __Vtask_tb_regfile_sv__DOT__chk__4__exp)))) {
        vlSelfRef.tb_regfile_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_regfile_sv__DOT__errors);
        VL_WRITEF_NX("R[%0#] exp %x got %x\n",0,5,__Vtask_tb_regfile_sv__DOT__chk__4__a,
                     32,__Vtask_tb_regfile_sv__DOT__chk__4__exp,
                     32,vlSelfRef.tb_regfile_sv__DOT__rd1);
    }
    __Vtask_tb_regfile_sv__DOT__chk__5__exp = 0xcafebabeU;
    __Vtask_tb_regfile_sv__DOT__chk__5__a = 0xfU;
    vlSelfRef.tb_regfile_sv__DOT__ra1 = __Vtask_tb_regfile_sv__DOT__chk__5__a;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                         9);
    if (VL_UNLIKELY(((vlSelfRef.tb_regfile_sv__DOT__rd1 
                      != __Vtask_tb_regfile_sv__DOT__chk__5__exp)))) {
        vlSelfRef.tb_regfile_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_regfile_sv__DOT__errors);
        VL_WRITEF_NX("R[%0#] exp %x got %x\n",0,5,__Vtask_tb_regfile_sv__DOT__chk__5__a,
                     32,__Vtask_tb_regfile_sv__DOT__chk__5__exp,
                     32,vlSelfRef.tb_regfile_sv__DOT__rd1);
    }
    __Vtask_tb_regfile_sv__DOT__chk__6__exp = 0U;
    __Vtask_tb_regfile_sv__DOT__chk__6__a = 0U;
    vlSelfRef.tb_regfile_sv__DOT__ra1 = __Vtask_tb_regfile_sv__DOT__chk__6__a;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                         9);
    if (VL_UNLIKELY(((vlSelfRef.tb_regfile_sv__DOT__rd1 
                      != __Vtask_tb_regfile_sv__DOT__chk__6__exp)))) {
        vlSelfRef.tb_regfile_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_regfile_sv__DOT__errors);
        VL_WRITEF_NX("R[%0#] exp %x got %x\n",0,5,__Vtask_tb_regfile_sv__DOT__chk__6__a,
                     32,__Vtask_tb_regfile_sv__DOT__chk__6__exp,
                     32,vlSelfRef.tb_regfile_sv__DOT__rd1);
    }
    __Vtask_tb_regfile_sv__DOT__wr__7__d = 0xffffffffU;
    __Vtask_tb_regfile_sv__DOT__wr__7__a = 0U;
    co_await vlSelfRef.__VtrigSched_hbefaadd0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    vlSelfRef.tb_regfile_sv__DOT__we = 1U;
    vlSelfRef.tb_regfile_sv__DOT__wa = __Vtask_tb_regfile_sv__DOT__wr__7__a;
    vlSelfRef.tb_regfile_sv__DOT__wd = __Vtask_tb_regfile_sv__DOT__wr__7__d;
    co_await vlSelfRef.__VtrigSched_hbefaa70d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    co_await vlSelfRef.__VtrigSched_hbefaadd0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_regfile_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                                         7);
    vlSelfRef.tb_regfile_sv__DOT__we = 0U;
    __Vtask_tb_regfile_sv__DOT__chk__8__exp = 0U;
    __Vtask_tb_regfile_sv__DOT__chk__8__a = 0U;
    vlSelfRef.tb_regfile_sv__DOT__ra1 = __Vtask_tb_regfile_sv__DOT__chk__8__a;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                         9);
    if (VL_UNLIKELY(((vlSelfRef.tb_regfile_sv__DOT__rd1 
                      != __Vtask_tb_regfile_sv__DOT__chk__8__exp)))) {
        vlSelfRef.tb_regfile_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_regfile_sv__DOT__errors);
        VL_WRITEF_NX("R[%0#] exp %x got %x\n",0,5,__Vtask_tb_regfile_sv__DOT__chk__8__a,
                     32,__Vtask_tb_regfile_sv__DOT__chk__8__exp,
                     32,vlSelfRef.tb_regfile_sv__DOT__rd1);
    }
    vlSelfRef.tb_regfile_sv__DOT__ra1 = 1U;
    vlSelfRef.tb_regfile_sv__DOT__ra2 = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 
                                         17);
    if (VL_UNLIKELY((((0xdeadbeefU != vlSelfRef.tb_regfile_sv__DOT__rd1) 
                      | (0x12345678U != vlSelfRef.tb_regfile_sv__DOT__rd2))))) {
        vlSelfRef.tb_regfile_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_regfile_sv__DOT__errors);
        VL_WRITEF_NX("dual-read FAIL %x %x\n",0,32,
                     vlSelfRef.tb_regfile_sv__DOT__rd1,
                     32,vlSelfRef.tb_regfile_sv__DOT__rd2);
    }
    VL_WRITEF_NX("regfile SV: errors=%0d -> %s\n",0,
                 32,vlSelfRef.tb_regfile_sv__DOT__errors,
                 32,((0U == vlSelfRef.tb_regfile_sv__DOT__errors)
                      ? 0x50415353U : 0x4641494cU));
    VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 19, "");
}

void Vtb_regfile_sv___024root___act_comb__TOP__0(Vtb_regfile_sv___024root* vlSelf);

void Vtb_regfile_sv___024root___eval_act(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___eval_act\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_regfile_sv___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_regfile_sv___024root___act_comb__TOP__0(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___act_comb__TOP__0\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_regfile_sv__DOT__rd1 = ((0U == (IData)(vlSelfRef.tb_regfile_sv__DOT__ra1))
                                          ? 0U : ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(vlSelfRef.tb_regfile_sv__DOT__ra1) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelfRef.tb_regfile_sv__DOT__dut__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_regfile_sv__DOT__ra1) 
                                                      - (IData)(1U)))]
                                                   : 0U));
    vlSelfRef.tb_regfile_sv__DOT__rd2 = ((0U == (IData)(vlSelfRef.tb_regfile_sv__DOT__ra2))
                                          ? 0U : ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(vlSelfRef.tb_regfile_sv__DOT__ra2) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelfRef.tb_regfile_sv__DOT__dut__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_regfile_sv__DOT__ra2) 
                                                      - (IData)(1U)))]
                                                   : 0U));
}

void Vtb_regfile_sv___024root___nba_sequent__TOP__0(Vtb_regfile_sv___024root* vlSelf);

void Vtb_regfile_sv___024root___eval_nba(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___eval_nba\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_regfile_sv___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_regfile_sv___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_regfile_sv___024root___nba_sequent__TOP__0(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___nba_sequent__TOP__0\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_regfile_sv__DOT__dut__DOT__regs__v0;
    __VdlyVal__tb_regfile_sv__DOT__dut__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_regfile_sv__DOT__dut__DOT__regs__v0;
    __VdlyDim0__tb_regfile_sv__DOT__dut__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_regfile_sv__DOT__dut__DOT__regs__v0;
    __VdlySet__tb_regfile_sv__DOT__dut__DOT__regs__v0 = 0;
    // Body
    __VdlySet__tb_regfile_sv__DOT__dut__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.tb_regfile_sv__DOT__we) 
         & (0U != (IData)(vlSelfRef.tb_regfile_sv__DOT__wa)))) {
        vlSelfRef.tb_regfile_sv__DOT__dut__DOT____Vlvbound_h6a58ae27__0 
            = vlSelfRef.tb_regfile_sv__DOT__wd;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.tb_regfile_sv__DOT__wa) 
                                - (IData)(1U))))) {
            __VdlyVal__tb_regfile_sv__DOT__dut__DOT__regs__v0 
                = vlSelfRef.tb_regfile_sv__DOT__dut__DOT____Vlvbound_h6a58ae27__0;
            __VdlyDim0__tb_regfile_sv__DOT__dut__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelfRef.tb_regfile_sv__DOT__wa) 
                            - (IData)(1U)));
            __VdlySet__tb_regfile_sv__DOT__dut__DOT__regs__v0 = 1U;
        }
    }
    if (__VdlySet__tb_regfile_sv__DOT__dut__DOT__regs__v0) {
        vlSelfRef.tb_regfile_sv__DOT__dut__DOT__regs[__VdlyDim0__tb_regfile_sv__DOT__dut__DOT__regs__v0] 
            = __VdlyVal__tb_regfile_sv__DOT__dut__DOT__regs__v0;
    }
}

void Vtb_regfile_sv___024root___timing_resume(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___timing_resume\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbefaadd0__0.resume(
                                                   "@(negedge tb_regfile_sv.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbefaa70d__0.resume(
                                                   "@(posedge tb_regfile_sv.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_regfile_sv___024root___timing_commit(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___timing_commit\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbefaadd0__0.commit(
                                                   "@(negedge tb_regfile_sv.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbefaa70d__0.commit(
                                                   "@(posedge tb_regfile_sv.clk)");
    }
}

void Vtb_regfile_sv___024root___eval_triggers__act(Vtb_regfile_sv___024root* vlSelf);

bool Vtb_regfile_sv___024root___eval_phase__act(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___eval_phase__act\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_regfile_sv___024root___eval_triggers__act(vlSelf);
    Vtb_regfile_sv___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_regfile_sv___024root___timing_resume(vlSelf);
        Vtb_regfile_sv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_regfile_sv___024root___eval_phase__nba(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___eval_phase__nba\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_regfile_sv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_regfile_sv___024root___dump_triggers__nba(Vtb_regfile_sv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_regfile_sv___024root___dump_triggers__act(Vtb_regfile_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_regfile_sv___024root___eval(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___eval\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_regfile_sv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_regfile_sv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/regfile/tb_regfile_sv.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_regfile_sv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_regfile_sv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_regfile_sv___024root___eval_debug_assertions(Vtb_regfile_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile_sv___024root___eval_debug_assertions\n"); );
    Vtb_regfile_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
