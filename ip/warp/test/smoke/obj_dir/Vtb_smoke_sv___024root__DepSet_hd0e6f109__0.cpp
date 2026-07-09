// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_smoke_sv.h for the primary calling header

#include "Vtb_smoke_sv__pch.h"
#include "Vtb_smoke_sv___024root.h"

VlCoroutine Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_smoke_sv___024root* vlSelf);
VlCoroutine Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__1(Vtb_smoke_sv___024root* vlSelf);
VlCoroutine Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__2(Vtb_smoke_sv___024root* vlSelf);

void Vtb_smoke_sv___024root___eval_initial(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_initial\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xbebc200ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 
                                         58);
    VL_WRITEF_NX("smoke SV: WATCHDOG (retired=%0d)\n",0,
                 32,vlSelfRef.tb_smoke_sv__DOT__retired);
    VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 58, "");
}

VL_INLINE_OPT VlCoroutine Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__1(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__2__Vfuncout;
    __Vfunc_tb_smoke_sv__DOT__rdw__2__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__2__k;
    __Vfunc_tb_smoke_sv__DOT__rdw__2__k = 0;
    IData/*31:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__3__Vfuncout;
    __Vfunc_tb_smoke_sv__DOT__rdw__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__3__k;
    __Vfunc_tb_smoke_sv__DOT__rdw__3__k = 0;
    // Body
    VL_READMEM_N(true, 32, 64, 0, std::string{"prog.hex"}
                 ,  &(vlSelfRef.tb_smoke_sv__DOT__prog)
                 , 0, ~0ULL);
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000000ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000001ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[1U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000002ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[2U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000003ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[3U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000004ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[4U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000005ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[5U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000006ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[6U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000007ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[7U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000008ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[8U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000009ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[9U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000000aULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0xaU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000000bULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0xbU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000000cULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0xcU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000000dULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0xdU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000000eULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0xeU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000000fULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0xfU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000010ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x10U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000011ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x11U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000012ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x12U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000013ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x13U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000014ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x14U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000015ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x15U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000016ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x16U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000017ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x17U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000018ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x18U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000019ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x19U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000001aULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x1aU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000001bULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x1bU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000001cULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x1cU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000001dULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x1dU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000001eULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x1eU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000001fULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x1fU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000020ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x20U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000021ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x21U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000022ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x22U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000023ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x23U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000024ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x24U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000025ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x25U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000026ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x26U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000027ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x27U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000028ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x28U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000029ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x29U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000002aULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x2aU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000002bULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x2bU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000002cULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x2cU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000002dULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x2dU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000002eULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x2eU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000002fULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x2fU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000030ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x30U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000031ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x31U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000032ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x32U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000033ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x33U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000034ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x34U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000035ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x35U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000036ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x36U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000037ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x37U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000038ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x38U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x20000039ULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x39U];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000003aULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x3aU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000003bULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x3bU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000003cULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x3cU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000003dULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x3dU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000003eULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x3eU];
    vlSelfRef.tb_smoke_sv__DOT__mem.at(0x2000003fULL) 
        = vlSelfRef.tb_smoke_sv__DOT__prog[0x3fU];
    co_await vlSelfRef.__VtrigSched_hbb58ac00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_smoke_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_hbb58ac00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_smoke_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_hbb58ac00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_smoke_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 
                                                         62);
    vlSelfRef.tb_smoke_sv__DOT__rst_n = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_hff3d415b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_smoke_sv.done)", 
                                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 
                                                             63);
    }
    co_await vlSelfRef.__VtrigSched_hbb58ac00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_smoke_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 
                                                         63);
    if ((0x37U == ([&]() {
                    __Vfunc_tb_smoke_sv__DOT__rdw__2__k = 0x40ULL;
                    __Vfunc_tb_smoke_sv__DOT__rdw__2__Vfuncout 
                        = (vlSelfRef.tb_smoke_sv__DOT__mem.exists(__Vfunc_tb_smoke_sv__DOT__rdw__2__k)
                            ? vlSelfRef.tb_smoke_sv__DOT__mem
                           .at(__Vfunc_tb_smoke_sv__DOT__rdw__2__k)
                            : 0U);
                }(), __Vfunc_tb_smoke_sv__DOT__rdw__2__Vfuncout))) {
        VL_WRITEF_NX("smoke SV: PASS  (x1 sum 1..10 = 55 stored at 0x100; retired=%0d)\n",0,
                     32,vlSelfRef.tb_smoke_sv__DOT__retired);
    } else {
        VL_WRITEF_NX("smoke SV: FAIL  mem[0x100]=%0# (expected 55)\n",0,
                     32,([&]() {
                        __Vfunc_tb_smoke_sv__DOT__rdw__3__k = 0x40ULL;
                        __Vfunc_tb_smoke_sv__DOT__rdw__3__Vfuncout 
                            = (vlSelfRef.tb_smoke_sv__DOT__mem.exists(__Vfunc_tb_smoke_sv__DOT__rdw__3__k)
                                ? vlSelfRef.tb_smoke_sv__DOT__mem
                               .at(__Vfunc_tb_smoke_sv__DOT__rdw__3__k)
                                : 0U);
                    }(), __Vfunc_tb_smoke_sv__DOT__rdw__3__Vfuncout));
    }
    VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 66, "");
}

void Vtb_smoke_sv___024root___act_comb__TOP__0(Vtb_smoke_sv___024root* vlSelf);

void Vtb_smoke_sv___024root___eval_act(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_act\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((9ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_smoke_sv___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_smoke_sv___024root___act_comb__TOP__0(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___act_comb__TOP__0\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__0__Vfuncout;
    __Vfunc_tb_smoke_sv__DOT__rdw__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__0__k;
    __Vfunc_tb_smoke_sv__DOT__rdw__0__k = 0;
    IData/*31:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__1__Vfuncout;
    __Vfunc_tb_smoke_sv__DOT__rdw__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__1__k;
    __Vfunc_tb_smoke_sv__DOT__rdw__1__k = 0;
    // Body
    vlSelfRef.tb_smoke_sv__DOT__irsp = 0ULL;
    vlSelfRef.tb_smoke_sv__DOT__irsp = ((0xffdffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__irsp) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__ist))))) 
                                           << 0x29U));
    vlSelfRef.tb_smoke_sv__DOT__irsp = ((0xffffffffffffeULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__irsp) 
                                        | (IData)((IData)(vlSelfRef.tb_smoke_sv__DOT__ist)));
    vlSelfRef.tb_smoke_sv__DOT__irsp = ((0xffe1fffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__irsp) 
                                        | ((QData)((IData)(vlSelfRef.tb_smoke_sv__DOT__iid)) 
                                           << 0x25U));
    __Vfunc_tb_smoke_sv__DOT__rdw__0__k = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_smoke_sv__DOT__iaddr)), 2U);
    __Vfunc_tb_smoke_sv__DOT__rdw__0__Vfuncout = (vlSelfRef.tb_smoke_sv__DOT__mem.exists(__Vfunc_tb_smoke_sv__DOT__rdw__0__k)
                                                   ? vlSelfRef.tb_smoke_sv__DOT__mem
                                                  .at(__Vfunc_tb_smoke_sv__DOT__rdw__0__k)
                                                   : 0U);
    vlSelfRef.tb_smoke_sv__DOT__irsp = ((0xfffe000000003ULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__irsp) 
                                        | (4ULL | ((QData)((IData)(__Vfunc_tb_smoke_sv__DOT__rdw__0__Vfuncout)) 
                                                   << 5U)));
    vlSelfRef.tb_smoke_sv__DOT__drsp = 0ULL;
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0x3ffffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (((0U 
                                                              == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst)) 
                                                             << 1U) 
                                                            | (1U 
                                                               == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst))))) 
                                           << 0x32U));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xffbffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst)))) 
                                           << 0x2aU));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xc0fffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelfRef.tb_smoke_sv__DOT__did) 
                                                            << 2U))) 
                                           << 0x2cU));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xffdffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (0U 
                                                            == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst)))) 
                                           << 0x29U));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xffffffffffffeULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | (IData)((IData)(
                                                          (3U 
                                                           == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst)))));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xffe1fffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(vlSelfRef.tb_smoke_sv__DOT__did)) 
                                           << 0x25U));
    __Vfunc_tb_smoke_sv__DOT__rdw__1__k = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_smoke_sv__DOT__daddr)), 2U);
    __Vfunc_tb_smoke_sv__DOT__rdw__1__Vfuncout = (vlSelfRef.tb_smoke_sv__DOT__mem.exists(__Vfunc_tb_smoke_sv__DOT__rdw__1__k)
                                                   ? vlSelfRef.tb_smoke_sv__DOT__mem
                                                  .at(__Vfunc_tb_smoke_sv__DOT__rdw__1__k)
                                                   : 0U);
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xfffe000000003ULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | (4ULL | ((QData)((IData)(__Vfunc_tb_smoke_sv__DOT__rdw__1__Vfuncout)) 
                                                   << 5U)));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__f_rvalid 
        = (((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q) 
            & (IData)(vlSelfRef.tb_smoke_sv__DOT__irsp)) 
           & ((~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q)) 
              & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__addr_q 
                 == (0xfffffffcU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q))));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_byte 
        = (0xffU & (IData)((vlSelfRef.tb_smoke_sv__DOT__drsp 
                            >> ((IData)(5U) + (0x1fU 
                                               & VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr), 3U))))));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_half 
        = (0xffffU & ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr)
                       ? (IData)((vlSelfRef.tb_smoke_sv__DOT__drsp 
                                  >> 0x15U)) : (IData)(
                                                       (vlSelfRef.tb_smoke_sv__DOT__drsp 
                                                        >> 5U))));
    vlSelfRef.tb_smoke_sv__DOT__rv = ((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q) 
                                      & ((~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__is_mem)) 
                                         | (((1U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                             & (IData)(vlSelfRef.tb_smoke_sv__DOT__drsp)) 
                                            | ((2U 
                                                == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_smoke_sv__DOT__drsp 
                                                          >> 0x2aU))))));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_hs 
        = ((vlSelfRef.tb_smoke_sv__DOT__dreq[3U] >> 0xcU) 
           & (vlSelfRef.tb_smoke_sv__DOT__drsp >> 0x33U));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_hs 
        = (1U & ((vlSelfRef.tb_smoke_sv__DOT__dreq[2U] 
                  >> 5U) & (IData)((vlSelfRef.tb_smoke_sv__DOT__drsp 
                                    >> 0x32U))));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_done 
        = ((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q) 
           | (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_hs));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_done 
        = ((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q) 
           | (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_hs));
}

void Vtb_smoke_sv___024root___nba_sequent__TOP__0(Vtb_smoke_sv___024root* vlSelf);
void Vtb_smoke_sv___024root___nba_sequent__TOP__1(Vtb_smoke_sv___024root* vlSelf);
void Vtb_smoke_sv___024root___nba_comb__TOP__0(Vtb_smoke_sv___024root* vlSelf);
void Vtb_smoke_sv___024root___nba_sequent__TOP__2(Vtb_smoke_sv___024root* vlSelf);
void Vtb_smoke_sv___024root___nba_comb__TOP__1(Vtb_smoke_sv___024root* vlSelf);
void Vtb_smoke_sv___024root___nba_comb__TOP__2(Vtb_smoke_sv___024root* vlSelf);
void Vtb_smoke_sv___024root___nba_comb__TOP__3(Vtb_smoke_sv___024root* vlSelf);

void Vtb_smoke_sv___024root___eval_nba(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_nba\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_smoke_sv___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_smoke_sv___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_smoke_sv___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_smoke_sv___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_smoke_sv___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_smoke_sv___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0xbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_smoke_sv___024root___nba_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_smoke_sv___024root___nba_sequent__TOP__1(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___nba_sequent__TOP__1\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
    __VdlyVal__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
    __VdlyDim0__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
    __VdlySet__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0U;
    if (vlSelfRef.tb_smoke_sv__DOT__rv) {
        vlSelfRef.tb_smoke_sv__DOT__retired = ((IData)(1U) 
                                               + vlSelfRef.tb_smoke_sv__DOT__retired);
        if ((((IData)(vlSelfRef.tb_smoke_sv__DOT__rv) 
              & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                 >> 7U)) & (0x1000U == (0xfffffffcU 
                                        & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr)))) {
            vlSelfRef.tb_smoke_sv__DOT__done = 1U;
        }
    }
    if ((((IData)(vlSelfRef.tb_smoke_sv__DOT__rv) & 
          ((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
            >> 3U) & (0U != (0x1fU & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                      >> 0x16U))))) 
         & (0U != (0x1fU & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                            >> 0x16U))))) {
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT____Vlvbound_h6a58ae27__0 
            = ((0U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                             >> 1U))) ? vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__alu_res
                : ((2U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                 >> 1U))) ? ((IData)(4U) 
                                             + vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q)
                    : ((1U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                     >> 1U))) ? ((0x40U 
                                                  & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                  ? 
                                                 ((0x20U 
                                                   & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                   ? (IData)(
                                                             (vlSelfRef.tb_smoke_sv__DOT__drsp 
                                                              >> 5U))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                    ? (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_half)
                                                    : (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_byte)))
                                                  : 
                                                 ((0x20U 
                                                   & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                   ? (IData)(
                                                             (vlSelfRef.tb_smoke_sv__DOT__drsp 
                                                              >> 5U))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_half) 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_half))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_byte) 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_byte)))))
                        : vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__alu_res)));
        if ((0x1eU >= (0x1fU & (((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                  << 0xaU) | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                              >> 0x16U)) 
                                - (IData)(1U))))) {
            __VdlyVal__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 
                = vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT____Vlvbound_h6a58ae27__0;
            __VdlyDim0__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 
                = (0x1fU & (((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                              << 0xaU) | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                          >> 0x16U)) 
                            - (IData)(1U)));
            __VdlySet__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 1U;
        }
    }
    if (__VdlySet__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0) {
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[__VdlyDim0__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0] 
            = __VdlyVal__tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
    }
}

VL_INLINE_OPT void Vtb_smoke_sv___024root___nba_comb__TOP__0(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___nba_comb__TOP__0\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__1__Vfuncout;
    __Vfunc_tb_smoke_sv__DOT__rdw__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__1__k;
    __Vfunc_tb_smoke_sv__DOT__rdw__1__k = 0;
    // Body
    vlSelfRef.tb_smoke_sv__DOT__drsp = 0ULL;
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0x3ffffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (((0U 
                                                              == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst)) 
                                                             << 1U) 
                                                            | (1U 
                                                               == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst))))) 
                                           << 0x32U));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xffbffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst)))) 
                                           << 0x2aU));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xc0fffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelfRef.tb_smoke_sv__DOT__did) 
                                                            << 2U))) 
                                           << 0x2cU));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xffdffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (0U 
                                                            == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst)))) 
                                           << 0x29U));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xffffffffffffeULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | (IData)((IData)(
                                                          (3U 
                                                           == (IData)(vlSelfRef.tb_smoke_sv__DOT__dst)))));
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xffe1fffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | ((QData)((IData)(vlSelfRef.tb_smoke_sv__DOT__did)) 
                                           << 0x25U));
    __Vfunc_tb_smoke_sv__DOT__rdw__1__k = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_smoke_sv__DOT__daddr)), 2U);
    __Vfunc_tb_smoke_sv__DOT__rdw__1__Vfuncout = (vlSelfRef.tb_smoke_sv__DOT__mem.exists(__Vfunc_tb_smoke_sv__DOT__rdw__1__k)
                                                   ? vlSelfRef.tb_smoke_sv__DOT__mem
                                                  .at(__Vfunc_tb_smoke_sv__DOT__rdw__1__k)
                                                   : 0U);
    vlSelfRef.tb_smoke_sv__DOT__drsp = ((0xfffe000000003ULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__drsp) 
                                        | (4ULL | ((QData)((IData)(__Vfunc_tb_smoke_sv__DOT__rdw__1__Vfuncout)) 
                                                   << 5U)));
}

VL_INLINE_OPT void Vtb_smoke_sv___024root___nba_comb__TOP__1(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___nba_comb__TOP__1\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__0__Vfuncout;
    __Vfunc_tb_smoke_sv__DOT__rdw__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_smoke_sv__DOT__rdw__0__k;
    __Vfunc_tb_smoke_sv__DOT__rdw__0__k = 0;
    // Body
    vlSelfRef.tb_smoke_sv__DOT__irsp = 0ULL;
    vlSelfRef.tb_smoke_sv__DOT__irsp = ((0xffdffffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__irsp) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.tb_smoke_sv__DOT__ist))))) 
                                           << 0x29U));
    vlSelfRef.tb_smoke_sv__DOT__irsp = ((0xffffffffffffeULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__irsp) 
                                        | (IData)((IData)(vlSelfRef.tb_smoke_sv__DOT__ist)));
    vlSelfRef.tb_smoke_sv__DOT__irsp = ((0xffe1fffffffffULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__irsp) 
                                        | ((QData)((IData)(vlSelfRef.tb_smoke_sv__DOT__iid)) 
                                           << 0x25U));
    __Vfunc_tb_smoke_sv__DOT__rdw__0__k = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_smoke_sv__DOT__iaddr)), 2U);
    __Vfunc_tb_smoke_sv__DOT__rdw__0__Vfuncout = (vlSelfRef.tb_smoke_sv__DOT__mem.exists(__Vfunc_tb_smoke_sv__DOT__rdw__0__k)
                                                   ? vlSelfRef.tb_smoke_sv__DOT__mem
                                                  .at(__Vfunc_tb_smoke_sv__DOT__rdw__0__k)
                                                   : 0U);
    vlSelfRef.tb_smoke_sv__DOT__irsp = ((0xfffe000000003ULL 
                                         & vlSelfRef.tb_smoke_sv__DOT__irsp) 
                                        | (4ULL | ((QData)((IData)(__Vfunc_tb_smoke_sv__DOT__rdw__0__Vfuncout)) 
                                                   << 5U)));
    vlSelfRef.tb_smoke_sv__DOT__rv = ((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q) 
                                      & ((~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__is_mem)) 
                                         | (((1U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                             & (IData)(vlSelfRef.tb_smoke_sv__DOT__drsp)) 
                                            | ((2U 
                                                == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_smoke_sv__DOT__drsp 
                                                          >> 0x2aU))))));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__f_rvalid 
        = (((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__state_q) 
            & (IData)(vlSelfRef.tb_smoke_sv__DOT__irsp)) 
           & ((~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_q)) 
              & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_if__DOT__addr_q 
                 == (0xfffffffcU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q))));
}

VL_INLINE_OPT void Vtb_smoke_sv___024root___nba_comb__TOP__2(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___nba_comb__TOP__2\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v;
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v = 0;
    IData/*31:0*/ tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v;
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v = 0;
    IData/*31:0*/ tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa;
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa = 0;
    IData/*31:0*/ tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb;
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb = 0;
    IData/*31:0*/ tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_wdata;
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_wdata = 0;
    // Body
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
        = ((0U == (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                   >> 0x1bU)) ? 0U : ((0x1eU >= (0x1fU 
                                                 & (((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                                      << 5U) 
                                                     | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                                        >> 0x1bU)) 
                                                    - (IData)(1U))))
                                       ? vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs
                                      [(0x1fU & (((
                                                   vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                                   << 5U) 
                                                  | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                                     >> 0x1bU)) 
                                                 - (IData)(1U)))]
                                       : 0U));
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
        = ((0U == (0x1fU & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[2U]))
            ? 0U : ((0x1eU >= (0x1fU & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[2U] 
                                        - (IData)(1U))))
                     ? vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs
                    [(0x1fU & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[2U] 
                               - (IData)(1U)))] : 0U));
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb = 
        ((0x8000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
          ? ((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
              << 0xaU) | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                          >> 0x16U)) : tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v);
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_wdata 
        = ((0U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                         >> 4U))) ? ((tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v))))
            : ((1U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                             >> 4U))) ? ((tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v))
                : tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__npc 
        = ((IData)(4U) + vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q);
    if (((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
          >> 0xeU) & ((0x2000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                       ? ((0x1000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                           ? ((0x800U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                               ? (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                                  >= tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v)
                               : (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                                  < tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v))
                           : ((0x800U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                               ? VL_GTES_III(32, tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v, tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v)
                               : VL_LTS_III(32, tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v, tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v)))
                       : ((~ (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                              >> 0xcU)) & ((0x800U 
                                            & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                            ? (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                                               != tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v)
                                            : (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                                               == tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs2_v)))))) {
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__npc 
            = (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q 
               + ((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                   << 0xaU) | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                               >> 0x16U)));
    } else if ((0x400U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])) {
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__npc 
            = (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q 
               + ((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                   << 0xaU) | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                               >> 0x16U)));
    } else if ((0x200U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])) {
        vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__npc 
            = (0xfffffffeU & (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                              + ((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                  << 0xaU) | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                              >> 0x16U))));
    }
    tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa = 
        ((0U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                       >> 0x10U))) ? tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v
          : ((1U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                           >> 0x10U))) ? vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__pc_q
              : ((2U == (3U & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                               >> 0x10U))) ? 0U : tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v)));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr 
        = (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
           + ((vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
               << 0xaU) | (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                           >> 0x16U)));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__alu_res 
        = ((0x200000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
            ? ((0x100000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                ? 0U : ((0x80000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                         ? 0U : ((0x40000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                  ? (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa 
                                     & tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb)
                                  : (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa 
                                     | tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb))))
            : ((0x100000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                ? ((0x80000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                    ? ((0x40000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                        ? VL_SHIFTRS_III(32,32,5, tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa, 
                                         (0x1fU & tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb))
                        : (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa 
                           >> (0x1fU & tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb)))
                    : ((0x40000U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                        ? (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa 
                           ^ tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb)
                        : ((tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa 
                            < tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb)
                            ? 1U : 0U))) : ((0x80000U 
                                             & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                             ? ((0x40000U 
                                                 & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                 ? 
                                                (VL_LTS_III(32, tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa, tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa 
                                                 << 
                                                 (0x1fU 
                                                  & tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb)))
                                             : ((0x40000U 
                                                 & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                 ? 
                                                (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa 
                                                 - tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb)
                                                 : 
                                                (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opa 
                                                 + tb_smoke_sv__DOT__dut__DOT__u_core__DOT__opb)))));
    vlSelfRef.tb_smoke_sv__DOT__dreq[0U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__dreq[1U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__dreq[2U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__dreq[3U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__dreq[4U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__dreq[5U] = 0U;
    vlSelfRef.tb_smoke_sv__DOT__dreq[0U] = ((0x7ffffU 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[0U]) 
                                            | ((IData)(
                                                       (9ULL 
                                                        | ((QData)((IData)(
                                                                           (0xfffffffcU 
                                                                            & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                           << 0xdU))) 
                                               << 0x13U));
    vlSelfRef.tb_smoke_sv__DOT__dreq[1U] = (((IData)(
                                                     (9ULL 
                                                      | ((QData)((IData)(
                                                                         (0xfffffffcU 
                                                                          & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                         << 0xdU))) 
                                             >> 0xdU) 
                                            | ((IData)(
                                                       ((9ULL 
                                                         | ((QData)((IData)(
                                                                            (0xfffffffcU 
                                                                             & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                            << 0xdU)) 
                                                        >> 0x20U)) 
                                               << 0x13U));
    vlSelfRef.tb_smoke_sv__DOT__dreq[2U] = ((0xfffffff0U 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[2U]) 
                                            | ((IData)(
                                                       ((9ULL 
                                                         | ((QData)((IData)(
                                                                            (0xfffffffcU 
                                                                             & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                            << 0xdU)) 
                                                        >> 0x20U)) 
                                               >> 0xdU));
    vlSelfRef.tb_smoke_sv__DOT__dreq[0U] = ((0xfffffffdU 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[0U]) 
                                            | ((((0U 
                                                  == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                                 & (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__c_req)) 
                                                & (~ 
                                                   (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                    >> 7U))) 
                                               << 1U));
    vlSelfRef.tb_smoke_sv__DOT__dreq[0U] = ((0xfffffffeU 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[0U]) 
                                            | (1U == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)));
    vlSelfRef.tb_smoke_sv__DOT__dreq[4U] = ((0xfU & 
                                             vlSelfRef.tb_smoke_sv__DOT__dreq[4U]) 
                                            | ((IData)(
                                                       (9ULL 
                                                        | ((QData)((IData)(
                                                                           (0xfffffffcU 
                                                                            & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                           << 0xdU))) 
                                               << 4U));
    vlSelfRef.tb_smoke_sv__DOT__dreq[5U] = (0x1fffffU 
                                            & (((IData)(
                                                        (9ULL 
                                                         | ((QData)((IData)(
                                                                            (0xfffffffcU 
                                                                             & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                            << 0xdU))) 
                                                >> 0x1cU) 
                                               | ((IData)(
                                                          ((9ULL 
                                                            | ((QData)((IData)(
                                                                               (0xfffffffcU 
                                                                                & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                               << 0xdU)) 
                                                           >> 0x20U)) 
                                                  << 4U)));
    vlSelfRef.tb_smoke_sv__DOT__dreq[3U] = ((0xffffefffU 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[3U]) 
                                            | (0xfffff000U 
                                               & (((((0U 
                                                      == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                                     & (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__c_req)) 
                                                    << 0xcU) 
                                                   & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      << 5U)) 
                                                  & ((~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q)) 
                                                     << 0xcU))));
    vlSelfRef.tb_smoke_sv__DOT__dreq[2U] = ((0xfffff07fU 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[2U]) 
                                            | (0xffffff80U 
                                               & (0x80U 
                                                  | (0xf00U 
                                                     & (((0U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                              >> 4U)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr))
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                               >> 4U)))
                                                           ? 
                                                          ((IData)(3U) 
                                                           << 
                                                           (3U 
                                                            & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr))
                                                           : 0xfU)) 
                                                        << 8U)))));
    vlSelfRef.tb_smoke_sv__DOT__dreq[2U] = ((0xfffU 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[2U]) 
                                            | (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_wdata 
                                               << 0xcU));
    vlSelfRef.tb_smoke_sv__DOT__dreq[3U] = ((0xfffff000U 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[3U]) 
                                            | (tb_smoke_sv__DOT__dut__DOT__u_core__DOT__st_wdata 
                                               >> 0x14U));
    vlSelfRef.tb_smoke_sv__DOT__dreq[2U] = ((0xffffffdfU 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[2U]) 
                                            | (0x3fffffe0U 
                                               & (((((0U 
                                                      == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                                     & (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__c_req)) 
                                                    << 5U) 
                                                   & (vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      >> 2U)) 
                                                  & ((~ (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q)) 
                                                     << 5U))));
    vlSelfRef.tb_smoke_sv__DOT__dreq[2U] = ((0xffffffefU 
                                             & vlSelfRef.tb_smoke_sv__DOT__dreq[2U]) 
                                            | ((2U 
                                                == (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                               << 4U));
}

VL_INLINE_OPT void Vtb_smoke_sv___024root___nba_comb__TOP__3(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___nba_comb__TOP__3\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_byte 
        = (0xffU & (IData)((vlSelfRef.tb_smoke_sv__DOT__drsp 
                            >> ((IData)(5U) + (0x1fU 
                                               & VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr), 3U))))));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__ld_half 
        = (0xffffU & ((2U & vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_core__DOT__eaddr)
                       ? (IData)((vlSelfRef.tb_smoke_sv__DOT__drsp 
                                  >> 0x15U)) : (IData)(
                                                       (vlSelfRef.tb_smoke_sv__DOT__drsp 
                                                        >> 5U))));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_hs 
        = ((vlSelfRef.tb_smoke_sv__DOT__dreq[3U] >> 0xcU) 
           & (vlSelfRef.tb_smoke_sv__DOT__drsp >> 0x33U));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_hs 
        = (1U & ((vlSelfRef.tb_smoke_sv__DOT__dreq[2U] 
                  >> 5U) & (IData)((vlSelfRef.tb_smoke_sv__DOT__drsp 
                                    >> 0x32U))));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_done 
        = ((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q) 
           | (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__aw_hs));
    vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_done 
        = ((IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q) 
           | (IData)(vlSelfRef.tb_smoke_sv__DOT__dut__DOT__u_ls__DOT__w_hs));
}

void Vtb_smoke_sv___024root___timing_resume(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___timing_resume\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbb58ac00__0.resume(
                                                   "@(posedge tb_smoke_sv.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hff3d415b__0.resume(
                                                   "@( tb_smoke_sv.done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_smoke_sv___024root___timing_commit(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___timing_commit\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbb58ac00__0.commit(
                                                   "@(posedge tb_smoke_sv.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hff3d415b__0.commit(
                                                   "@( tb_smoke_sv.done)");
    }
}

void Vtb_smoke_sv___024root___eval_triggers__act(Vtb_smoke_sv___024root* vlSelf);

bool Vtb_smoke_sv___024root___eval_phase__act(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_phase__act\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_smoke_sv___024root___eval_triggers__act(vlSelf);
    Vtb_smoke_sv___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_smoke_sv___024root___timing_resume(vlSelf);
        Vtb_smoke_sv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_smoke_sv___024root___eval_phase__nba(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_phase__nba\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_smoke_sv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_smoke_sv___024root___dump_triggers__nba(Vtb_smoke_sv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_smoke_sv___024root___dump_triggers__act(Vtb_smoke_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_smoke_sv___024root___eval(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_smoke_sv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_smoke_sv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/smoke/tb_smoke_sv.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_smoke_sv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_smoke_sv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_smoke_sv___024root___eval_debug_assertions(Vtb_smoke_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_smoke_sv___024root___eval_debug_assertions\n"); );
    Vtb_smoke_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
