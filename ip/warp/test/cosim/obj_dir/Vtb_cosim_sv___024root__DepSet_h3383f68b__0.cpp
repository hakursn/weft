// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cosim_sv.h for the primary calling header

#include "Vtb_cosim_sv__pch.h"
#include "Vtb_cosim_sv___024root.h"

VlCoroutine Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_cosim_sv___024root* vlSelf);
VlCoroutine Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__1(Vtb_cosim_sv___024root* vlSelf);
VlCoroutine Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__2(Vtb_cosim_sv___024root* vlSelf);

void Vtb_cosim_sv___024root___eval_initial(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_initial\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1dcd6500ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/tb_cosim_sv.sv", 
                                         50);
    VL_WRITEF_NX("COSIM WATCHDOG retired=%0d\n",0,32,
                 vlSelfRef.tb_cosim_sv__DOT__retired);
    VL_FCLOSE_I(vlSelfRef.tb_cosim_sv__DOT__ftr); VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/tb_cosim_sv.sv", 50, "");
}

VL_INLINE_OPT VlCoroutine Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__1(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_cosim_sv__DOT__unnamedblk3__DOT__i;
    tb_cosim_sv__DOT__unnamedblk3__DOT__i = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x72616365U;
    __Vtemp_1[2U] = 0x746c5f74U;
    __Vtemp_1[3U] = 0x72U;
    vlSelfRef.tb_cosim_sv__DOT__ftr = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                                                  , 
                                                  std::string{"w"});
    ;
    VL_READMEM_N(true, 32, 256, 0, std::string{"prog.hex"}
                 ,  &(vlSelfRef.tb_cosim_sv__DOT__prog)
                 , 0, ~0ULL);
    tb_cosim_sv__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTES_III(32, 0xffU, tb_cosim_sv__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.tb_cosim_sv__DOT__mem.at((QData)((IData)(
                                                           ((IData)(0x20000000U) 
                                                            + tb_cosim_sv__DOT__unnamedblk3__DOT__i)))) 
            = vlSelfRef.tb_cosim_sv__DOT__prog[(0xffU 
                                                & tb_cosim_sv__DOT__unnamedblk3__DOT__i)];
        tb_cosim_sv__DOT__unnamedblk3__DOT__i = ((IData)(1U) 
                                                 + tb_cosim_sv__DOT__unnamedblk3__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_he91541b6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cosim_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/tb_cosim_sv.sv", 
                                                         55);
    co_await vlSelfRef.__VtrigSched_he91541b6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cosim_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/tb_cosim_sv.sv", 
                                                         55);
    co_await vlSelfRef.__VtrigSched_he91541b6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cosim_sv.clk)", 
                                                         "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/tb_cosim_sv.sv", 
                                                         55);
    vlSelfRef.tb_cosim_sv__DOT__rst_n = 1U;
}

void Vtb_cosim_sv___024root___act_sequent__TOP__0(Vtb_cosim_sv___024root* vlSelf);

void Vtb_cosim_sv___024root___eval_act(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_act\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_cosim_sv___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_cosim_sv___024root___act_sequent__TOP__0(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___act_sequent__TOP__0\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte = 0;
    SData/*15:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half = 0;
    IData/*31:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout;
    __Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__0__k;
    __Vfunc_tb_cosim_sv__DOT__rdw__0__k = 0;
    IData/*31:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout;
    __Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__1__k;
    __Vfunc_tb_cosim_sv__DOT__rdw__1__k = 0;
    // Body
    vlSelfRef.tb_cosim_sv__DOT__irsp = 0ULL;
    vlSelfRef.tb_cosim_sv__DOT__irsp = ((0xffdffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__irsp) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.tb_cosim_sv__DOT__ist))))) 
                                           << 0x29U));
    vlSelfRef.tb_cosim_sv__DOT__irsp = ((0xffffffffffffeULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__irsp) 
                                        | (IData)((IData)(vlSelfRef.tb_cosim_sv__DOT__ist)));
    vlSelfRef.tb_cosim_sv__DOT__irsp = ((0xffe1fffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__irsp) 
                                        | ((QData)((IData)(vlSelfRef.tb_cosim_sv__DOT__iid)) 
                                           << 0x25U));
    __Vfunc_tb_cosim_sv__DOT__rdw__0__k = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_cosim_sv__DOT__iaddr)), 2U);
    __Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout = (vlSelfRef.tb_cosim_sv__DOT__mem.exists(__Vfunc_tb_cosim_sv__DOT__rdw__0__k)
                                                   ? vlSelfRef.tb_cosim_sv__DOT__mem
                                                  .at(__Vfunc_tb_cosim_sv__DOT__rdw__0__k)
                                                   : 0U);
    vlSelfRef.tb_cosim_sv__DOT__irsp = ((0xfffe000000003ULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__irsp) 
                                        | (4ULL | ((QData)((IData)(__Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout)) 
                                                   << 5U)));
    vlSelfRef.tb_cosim_sv__DOT__drsp = 0ULL;
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0x3ffffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (((0U 
                                                              == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst)) 
                                                             << 1U) 
                                                            | (1U 
                                                               == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst))))) 
                                           << 0x32U));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xffbffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst)))) 
                                           << 0x2aU));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xc0fffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelfRef.tb_cosim_sv__DOT__did) 
                                                            << 2U))) 
                                           << 0x2cU));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xffdffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (0U 
                                                            == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst)))) 
                                           << 0x29U));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xffffffffffffeULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | (IData)((IData)(
                                                          (3U 
                                                           == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst)))));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xffe1fffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(vlSelfRef.tb_cosim_sv__DOT__did)) 
                                           << 0x25U));
    __Vfunc_tb_cosim_sv__DOT__rdw__1__k = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_cosim_sv__DOT__daddr)), 2U);
    __Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout = (vlSelfRef.tb_cosim_sv__DOT__mem.exists(__Vfunc_tb_cosim_sv__DOT__rdw__1__k)
                                                   ? vlSelfRef.tb_cosim_sv__DOT__mem
                                                  .at(__Vfunc_tb_cosim_sv__DOT__rdw__1__k)
                                                   : 0U);
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xfffe000000003ULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | (4ULL | ((QData)((IData)(__Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout)) 
                                                   << 5U)));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__f_rvalid 
        = (((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_if__DOT__state_q) 
            & (IData)(vlSelfRef.tb_cosim_sv__DOT__irsp)) 
           & ((~ (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q)) 
              & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_if__DOT__addr_q 
                 == (0xfffffffcU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q))));
    vlSelfRef.tb_cosim_sv__DOT__rv = ((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q) 
                                      & ((~ (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__is_mem)) 
                                         | (((1U == (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                             & (IData)(vlSelfRef.tb_cosim_sv__DOT__drsp)) 
                                            | ((2U 
                                                == (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_cosim_sv__DOT__drsp 
                                                          >> 0x2aU))))));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_hs 
        = ((vlSelfRef.tb_cosim_sv__DOT__dreq[3U] >> 0xcU) 
           & (vlSelfRef.tb_cosim_sv__DOT__drsp >> 0x33U));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_hs 
        = (1U & ((vlSelfRef.tb_cosim_sv__DOT__dreq[2U] 
                  >> 5U) & (IData)((vlSelfRef.tb_cosim_sv__DOT__drsp 
                                    >> 0x32U))));
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte 
        = (0xffU & (IData)((vlSelfRef.tb_cosim_sv__DOT__drsp 
                            >> ((IData)(5U) + (0x1fU 
                                               & VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr), 3U))))));
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half 
        = (0xffffU & ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr)
                       ? (IData)((vlSelfRef.tb_cosim_sv__DOT__drsp 
                                  >> 0x15U)) : (IData)(
                                                       (vlSelfRef.tb_cosim_sv__DOT__drsp 
                                                        >> 5U))));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_done 
        = ((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q) 
           | (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_hs));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_done 
        = ((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q) 
           | (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_hs));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rf_wd 
        = ((0U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                         >> 1U))) ? vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__alu_res
            : ((2U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                             >> 1U))) ? ((IData)(4U) 
                                         + vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q)
                : ((1U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                 >> 1U))) ? ((0x40U 
                                              & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                              ? ((0x20U 
                                                  & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                  ? (IData)(
                                                            (vlSelfRef.tb_cosim_sv__DOT__drsp 
                                                             >> 5U))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                   ? (IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half)
                                                   : (IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte)))
                                              : ((0x20U 
                                                  & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                  ? (IData)(
                                                            (vlSelfRef.tb_cosim_sv__DOT__drsp 
                                                             >> 5U))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half) 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte)))))
                    : vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__alu_res)));
}

void Vtb_cosim_sv___024root___nba_sequent__TOP__0(Vtb_cosim_sv___024root* vlSelf);
void Vtb_cosim_sv___024root___nba_sequent__TOP__1(Vtb_cosim_sv___024root* vlSelf);
void Vtb_cosim_sv___024root___nba_sequent__TOP__2(Vtb_cosim_sv___024root* vlSelf);
void Vtb_cosim_sv___024root___nba_comb__TOP__0(Vtb_cosim_sv___024root* vlSelf);

void Vtb_cosim_sv___024root___eval_nba(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_nba\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_cosim_sv___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_cosim_sv___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_cosim_sv___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_cosim_sv___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_cosim_sv___024root___nba_sequent__TOP__1(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___nba_sequent__TOP__1\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_cosim_sv__DOT__dump_mem_and_finish__2__unnamedblk2__DOT__i;
    __Vtask_tb_cosim_sv__DOT__dump_mem_and_finish__2__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__3__Vfuncout;
    __Vfunc_tb_cosim_sv__DOT__rdw__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__3__k;
    __Vfunc_tb_cosim_sv__DOT__rdw__3__k = 0;
    IData/*31:0*/ __VdlyVal__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
    __VdlyVal__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
    __VdlyDim0__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
    __VdlySet__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __VdlySet__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cosim_sv__DOT__rst_n) 
                      & (IData)(vlSelfRef.tb_cosim_sv__DOT__rv))))) {
        VL_FWRITEF_NX(vlSelfRef.tb_cosim_sv__DOT__ftr,"%08x %08x %02x %08x\n",0,
                      32,vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q,
                      32,vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q,
                      5,((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT____VdfgRegularize_h96dfe7f7_0_0)
                          ? (0x1fU & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                      >> 0x16U)) : 0U),
                      32,((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT____VdfgRegularize_h96dfe7f7_0_0)
                           ? vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rf_wd
                           : 0U));
        vlSelfRef.tb_cosim_sv__DOT__retired = ((IData)(1U) 
                                               + vlSelfRef.tb_cosim_sv__DOT__retired);
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_cosim_sv__DOT__rv) 
                           & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                              >> 7U)) & (0x1000U == 
                                         (0xfffffffcU 
                                          & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr)))))) {
            __Vtemp_2[0U] = 0x2e747874U;
            __Vtemp_2[1U] = 0x5f6d656dU;
            __Vtemp_2[2U] = 0x72746cU;
            vlSelfRef.tb_cosim_sv__DOT__fmem = VL_FOPEN_NN(
                                                           VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                                                           , 
                                                           std::string{"w"});
            ;
            __Vtask_tb_cosim_sv__DOT__dump_mem_and_finish__2__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x200U, __Vtask_tb_cosim_sv__DOT__dump_mem_and_finish__2__unnamedblk2__DOT__i)) {
                VL_FWRITEF_NX(vlSelfRef.tb_cosim_sv__DOT__fmem,"%08x\n",0,
                              32,([&]() {
                                __Vfunc_tb_cosim_sv__DOT__rdw__3__k 
                                    = VL_EXTENDS_QI(64,32, __Vtask_tb_cosim_sv__DOT__dump_mem_and_finish__2__unnamedblk2__DOT__i);
                                __Vfunc_tb_cosim_sv__DOT__rdw__3__Vfuncout 
                                    = (vlSelfRef.tb_cosim_sv__DOT__mem.exists(__Vfunc_tb_cosim_sv__DOT__rdw__3__k)
                                        ? vlSelfRef.tb_cosim_sv__DOT__mem
                                       .at(__Vfunc_tb_cosim_sv__DOT__rdw__3__k)
                                        : 0U);
                            }(), __Vfunc_tb_cosim_sv__DOT__rdw__3__Vfuncout));
                __Vtask_tb_cosim_sv__DOT__dump_mem_and_finish__2__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_cosim_sv__DOT__dump_mem_and_finish__2__unnamedblk2__DOT__i);
            }
            VL_FCLOSE_I(vlSelfRef.tb_cosim_sv__DOT__fmem); VL_FCLOSE_I(vlSelfRef.tb_cosim_sv__DOT__ftr); VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/tb_cosim_sv.sv", 41, "");
        }
    }
    if ((((IData)(vlSelfRef.tb_cosim_sv__DOT__rv) & (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT____VdfgRegularize_h96dfe7f7_0_0)) 
         & (0U != (0x1fU & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                            >> 0x16U))))) {
        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT____Vlvbound_h6a58ae27__0 
            = vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rf_wd;
        if ((0x1eU >= (0x1fU & (((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                  << 0xaU) | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                              >> 0x16U)) 
                                - (IData)(1U))))) {
            __VdlyVal__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 
                = vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT____Vlvbound_h6a58ae27__0;
            __VdlyDim0__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 
                = (0x1fU & (((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                              << 0xaU) | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                          >> 0x16U)) 
                            - (IData)(1U)));
            __VdlySet__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 1U;
        }
    }
    if (__VdlySet__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0) {
        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[__VdlyDim0__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0] 
            = __VdlyVal__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
    }
}

VL_INLINE_OPT void Vtb_cosim_sv___024root___nba_comb__TOP__0(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___nba_comb__TOP__0\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v = 0;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v = 0;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa = 0;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb = 0;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_wdata;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_wdata = 0;
    CData/*7:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte = 0;
    SData/*15:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half = 0;
    IData/*31:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout;
    __Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__0__k;
    __Vfunc_tb_cosim_sv__DOT__rdw__0__k = 0;
    IData/*31:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout;
    __Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__1__k;
    __Vfunc_tb_cosim_sv__DOT__rdw__1__k = 0;
    // Body
    vlSelfRef.tb_cosim_sv__DOT__drsp = 0ULL;
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0x3ffffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (((0U 
                                                              == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst)) 
                                                             << 1U) 
                                                            | (1U 
                                                               == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst))))) 
                                           << 0x32U));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xffbffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst)))) 
                                           << 0x2aU));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xc0fffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelfRef.tb_cosim_sv__DOT__did) 
                                                            << 2U))) 
                                           << 0x2cU));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xffdffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(
                                                           (0U 
                                                            == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst)))) 
                                           << 0x29U));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xffffffffffffeULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | (IData)((IData)(
                                                          (3U 
                                                           == (IData)(vlSelfRef.tb_cosim_sv__DOT__dst)))));
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xffe1fffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | ((QData)((IData)(vlSelfRef.tb_cosim_sv__DOT__did)) 
                                           << 0x25U));
    __Vfunc_tb_cosim_sv__DOT__rdw__1__k = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_cosim_sv__DOT__daddr)), 2U);
    __Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout = (vlSelfRef.tb_cosim_sv__DOT__mem.exists(__Vfunc_tb_cosim_sv__DOT__rdw__1__k)
                                                   ? vlSelfRef.tb_cosim_sv__DOT__mem
                                                  .at(__Vfunc_tb_cosim_sv__DOT__rdw__1__k)
                                                   : 0U);
    vlSelfRef.tb_cosim_sv__DOT__drsp = ((0xfffe000000003ULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__drsp) 
                                        | (4ULL | ((QData)((IData)(__Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout)) 
                                                   << 5U)));
    vlSelfRef.tb_cosim_sv__DOT__irsp = 0ULL;
    vlSelfRef.tb_cosim_sv__DOT__irsp = ((0xffdffffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__irsp) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.tb_cosim_sv__DOT__ist))))) 
                                           << 0x29U));
    vlSelfRef.tb_cosim_sv__DOT__irsp = ((0xffffffffffffeULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__irsp) 
                                        | (IData)((IData)(vlSelfRef.tb_cosim_sv__DOT__ist)));
    vlSelfRef.tb_cosim_sv__DOT__irsp = ((0xffe1fffffffffULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__irsp) 
                                        | ((QData)((IData)(vlSelfRef.tb_cosim_sv__DOT__iid)) 
                                           << 0x25U));
    __Vfunc_tb_cosim_sv__DOT__rdw__0__k = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_cosim_sv__DOT__iaddr)), 2U);
    __Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout = (vlSelfRef.tb_cosim_sv__DOT__mem.exists(__Vfunc_tb_cosim_sv__DOT__rdw__0__k)
                                                   ? vlSelfRef.tb_cosim_sv__DOT__mem
                                                  .at(__Vfunc_tb_cosim_sv__DOT__rdw__0__k)
                                                   : 0U);
    vlSelfRef.tb_cosim_sv__DOT__irsp = ((0xfffe000000003ULL 
                                         & vlSelfRef.tb_cosim_sv__DOT__irsp) 
                                        | (4ULL | ((QData)((IData)(__Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout)) 
                                                   << 5U)));
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
        = ((0U == (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                   >> 0x1bU)) ? 0U : ((0x1eU >= (0x1fU 
                                                 & (((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                                      << 5U) 
                                                     | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                                        >> 0x1bU)) 
                                                    - (IData)(1U))))
                                       ? vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs
                                      [(0x1fU & (((
                                                   vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                                   << 5U) 
                                                  | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                                     >> 0x1bU)) 
                                                 - (IData)(1U)))]
                                       : 0U));
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
        = ((0U == (0x1fU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[2U]))
            ? 0U : ((0x1eU >= (0x1fU & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[2U] 
                                        - (IData)(1U))))
                     ? vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs
                    [(0x1fU & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[2U] 
                               - (IData)(1U)))] : 0U));
    vlSelfRef.tb_cosim_sv__DOT__rv = ((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q) 
                                      & ((~ (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__is_mem)) 
                                         | (((1U == (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                             & (IData)(vlSelfRef.tb_cosim_sv__DOT__drsp)) 
                                            | ((2U 
                                                == (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_cosim_sv__DOT__drsp 
                                                          >> 0x2aU))))));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__f_rvalid 
        = (((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_if__DOT__state_q) 
            & (IData)(vlSelfRef.tb_cosim_sv__DOT__irsp)) 
           & ((~ (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q)) 
              & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_if__DOT__addr_q 
                 == (0xfffffffcU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q))));
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb = 
        ((0x8000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
          ? ((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
              << 0xaU) | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                          >> 0x16U)) : tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v);
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_wdata 
        = ((0U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                         >> 4U))) ? ((tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v))))
            : ((1U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                             >> 4U))) ? ((tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v))
                : tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__npc 
        = ((IData)(4U) + vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q);
    if (((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
          >> 0xeU) & ((0x2000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                       ? ((0x1000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                           ? ((0x800U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                               ? (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                                  >= tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v)
                               : (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                                  < tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v))
                           : ((0x800U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                               ? VL_GTES_III(32, tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v, tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v)
                               : VL_LTS_III(32, tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v, tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v)))
                       : ((~ (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                              >> 0xcU)) & ((0x800U 
                                            & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                            ? (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                                               != tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v)
                                            : (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                                               == tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs2_v)))))) {
        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__npc 
            = (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q 
               + ((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                   << 0xaU) | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                               >> 0x16U)));
    } else if ((0x400U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])) {
        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__npc 
            = (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q 
               + ((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                   << 0xaU) | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                               >> 0x16U)));
    } else if ((0x200U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])) {
        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__npc 
            = (0xfffffffeU & (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
                              + ((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                  << 0xaU) | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                              >> 0x16U))));
    }
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa = 
        ((0U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                       >> 0x10U))) ? tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v
          : ((1U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                           >> 0x10U))) ? vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q
              : ((2U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                               >> 0x10U))) ? 0U : tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v)));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr 
        = (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rs1_v 
           + ((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
               << 0xaU) | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                           >> 0x16U)));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__alu_res 
        = ((0x200000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
            ? ((0x100000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                ? 0U : ((0x80000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                         ? 0U : ((0x40000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                  ? (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa 
                                     & tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb)
                                  : (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa 
                                     | tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb))))
            : ((0x100000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                ? ((0x80000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                    ? ((0x40000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                        ? VL_SHIFTRS_III(32,32,5, tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa, 
                                         (0x1fU & tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb))
                        : (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa 
                           >> (0x1fU & tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb)))
                    : ((0x40000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                        ? (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa 
                           ^ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb)
                        : ((tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa 
                            < tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb)
                            ? 1U : 0U))) : ((0x80000U 
                                             & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                             ? ((0x40000U 
                                                 & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                 ? 
                                                (VL_LTS_III(32, tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa, tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa 
                                                 << 
                                                 (0x1fU 
                                                  & tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb)))
                                             : ((0x40000U 
                                                 & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                 ? 
                                                (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa 
                                                 - tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb)
                                                 : 
                                                (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opa 
                                                 + tb_cosim_sv__DOT__dut__DOT__u_core__DOT__opb)))));
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte 
        = (0xffU & (IData)((vlSelfRef.tb_cosim_sv__DOT__drsp 
                            >> ((IData)(5U) + (0x1fU 
                                               & VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr), 3U))))));
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half 
        = (0xffffU & ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr)
                       ? (IData)((vlSelfRef.tb_cosim_sv__DOT__drsp 
                                  >> 0x15U)) : (IData)(
                                                       (vlSelfRef.tb_cosim_sv__DOT__drsp 
                                                        >> 5U))));
    vlSelfRef.tb_cosim_sv__DOT__dreq[0U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__dreq[1U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__dreq[2U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__dreq[3U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__dreq[4U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__dreq[5U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__dreq[0U] = ((0x7ffffU 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[0U]) 
                                            | ((IData)(
                                                       (9ULL 
                                                        | ((QData)((IData)(
                                                                           (0xfffffffcU 
                                                                            & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                           << 0xdU))) 
                                               << 0x13U));
    vlSelfRef.tb_cosim_sv__DOT__dreq[1U] = (((IData)(
                                                     (9ULL 
                                                      | ((QData)((IData)(
                                                                         (0xfffffffcU 
                                                                          & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                         << 0xdU))) 
                                             >> 0xdU) 
                                            | ((IData)(
                                                       ((9ULL 
                                                         | ((QData)((IData)(
                                                                            (0xfffffffcU 
                                                                             & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                            << 0xdU)) 
                                                        >> 0x20U)) 
                                               << 0x13U));
    vlSelfRef.tb_cosim_sv__DOT__dreq[2U] = ((0xfffffff0U 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[2U]) 
                                            | ((IData)(
                                                       ((9ULL 
                                                         | ((QData)((IData)(
                                                                            (0xfffffffcU 
                                                                             & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                            << 0xdU)) 
                                                        >> 0x20U)) 
                                               >> 0xdU));
    vlSelfRef.tb_cosim_sv__DOT__dreq[0U] = ((0xfffffffdU 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[0U]) 
                                            | ((((0U 
                                                  == (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                                 & (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__c_req)) 
                                                & (~ 
                                                   (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                    >> 7U))) 
                                               << 1U));
    vlSelfRef.tb_cosim_sv__DOT__dreq[0U] = ((0xfffffffeU 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[0U]) 
                                            | (1U == (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q)));
    vlSelfRef.tb_cosim_sv__DOT__dreq[4U] = ((0xfU & 
                                             vlSelfRef.tb_cosim_sv__DOT__dreq[4U]) 
                                            | ((IData)(
                                                       (9ULL 
                                                        | ((QData)((IData)(
                                                                           (0xfffffffcU 
                                                                            & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                           << 0xdU))) 
                                               << 4U));
    vlSelfRef.tb_cosim_sv__DOT__dreq[5U] = (0x1fffffU 
                                            & (((IData)(
                                                        (9ULL 
                                                         | ((QData)((IData)(
                                                                            (0xfffffffcU 
                                                                             & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                            << 0xdU))) 
                                                >> 0x1cU) 
                                               | ((IData)(
                                                          ((9ULL 
                                                            | ((QData)((IData)(
                                                                               (0xfffffffcU 
                                                                                & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr))) 
                                                               << 0xdU)) 
                                                           >> 0x20U)) 
                                                  << 4U)));
    vlSelfRef.tb_cosim_sv__DOT__dreq[3U] = ((0xffffefffU 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[3U]) 
                                            | (0xfffff000U 
                                               & (((((0U 
                                                      == (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                                     & (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__c_req)) 
                                                    << 0xcU) 
                                                   & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      << 5U)) 
                                                  & ((~ (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q)) 
                                                     << 0xcU))));
    vlSelfRef.tb_cosim_sv__DOT__dreq[2U] = ((0xfffff07fU 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[2U]) 
                                            | (0xffffff80U 
                                               & (0x80U 
                                                  | (0xf00U 
                                                     & (((0U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                              >> 4U)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr))
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                               >> 4U)))
                                                           ? 
                                                          ((IData)(3U) 
                                                           << 
                                                           (3U 
                                                            & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr))
                                                           : 0xfU)) 
                                                        << 8U)))));
    vlSelfRef.tb_cosim_sv__DOT__dreq[2U] = ((0xfffU 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[2U]) 
                                            | (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_wdata 
                                               << 0xcU));
    vlSelfRef.tb_cosim_sv__DOT__dreq[3U] = ((0xfffff000U 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[3U]) 
                                            | (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_wdata 
                                               >> 0x14U));
    vlSelfRef.tb_cosim_sv__DOT__dreq[2U] = ((0xffffffdfU 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[2U]) 
                                            | (0x3fffffe0U 
                                               & (((((0U 
                                                      == (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                                     & (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__c_req)) 
                                                    << 5U) 
                                                   & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      >> 2U)) 
                                                  & ((~ (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q)) 
                                                     << 5U))));
    vlSelfRef.tb_cosim_sv__DOT__dreq[2U] = ((0xffffffefU 
                                             & vlSelfRef.tb_cosim_sv__DOT__dreq[2U]) 
                                            | ((2U 
                                                == (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q)) 
                                               << 4U));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rf_wd 
        = ((0U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                         >> 1U))) ? vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__alu_res
            : ((2U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                             >> 1U))) ? ((IData)(4U) 
                                         + vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q)
                : ((1U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                 >> 1U))) ? ((0x40U 
                                              & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                              ? ((0x20U 
                                                  & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                  ? (IData)(
                                                            (vlSelfRef.tb_cosim_sv__DOT__drsp 
                                                             >> 5U))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                   ? (IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half)
                                                   : (IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte)))
                                              : ((0x20U 
                                                  & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                  ? (IData)(
                                                            (vlSelfRef.tb_cosim_sv__DOT__drsp 
                                                             >> 5U))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half) 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_half))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__ld_byte)))))
                    : vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__alu_res)));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_hs 
        = ((vlSelfRef.tb_cosim_sv__DOT__dreq[3U] >> 0xcU) 
           & (vlSelfRef.tb_cosim_sv__DOT__drsp >> 0x33U));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_hs 
        = (1U & ((vlSelfRef.tb_cosim_sv__DOT__dreq[2U] 
                  >> 5U) & (IData)((vlSelfRef.tb_cosim_sv__DOT__drsp 
                                    >> 0x32U))));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_done 
        = ((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q) 
           | (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_hs));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_done 
        = ((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q) 
           | (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_hs));
}

void Vtb_cosim_sv___024root___timing_resume(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___timing_resume\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he91541b6__0.resume(
                                                   "@(posedge tb_cosim_sv.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cosim_sv___024root___timing_commit(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___timing_commit\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he91541b6__0.commit(
                                                   "@(posedge tb_cosim_sv.clk)");
    }
}

void Vtb_cosim_sv___024root___eval_triggers__act(Vtb_cosim_sv___024root* vlSelf);

bool Vtb_cosim_sv___024root___eval_phase__act(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_phase__act\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cosim_sv___024root___eval_triggers__act(vlSelf);
    Vtb_cosim_sv___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_cosim_sv___024root___timing_resume(vlSelf);
        Vtb_cosim_sv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cosim_sv___024root___eval_phase__nba(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_phase__nba\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_cosim_sv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cosim_sv___024root___dump_triggers__nba(Vtb_cosim_sv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cosim_sv___024root___dump_triggers__act(Vtb_cosim_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cosim_sv___024root___eval(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_cosim_sv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/tb_cosim_sv.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_cosim_sv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/tb_cosim_sv.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_cosim_sv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_cosim_sv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_cosim_sv___024root___eval_debug_assertions(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_debug_assertions\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
