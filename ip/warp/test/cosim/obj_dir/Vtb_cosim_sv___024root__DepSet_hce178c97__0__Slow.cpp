// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cosim_sv.h for the primary calling header

#include "Vtb_cosim_sv__pch.h"
#include "Vtb_cosim_sv__Syms.h"
#include "Vtb_cosim_sv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cosim_sv___024root___dump_triggers__stl(Vtb_cosim_sv___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cosim_sv___024root___eval_triggers__stl(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___eval_triggers__stl\n"); );
    Vtb_cosim_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cosim_sv___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_cosim_sv___024root___stl_sequent__TOP__0(Vtb_cosim_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cosim_sv___024root___stl_sequent__TOP__0\n"); );
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
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i;
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i = 0;
    IData/*31:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout;
    __Vfunc_tb_cosim_sv__DOT__rdw__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__0__k;
    __Vfunc_tb_cosim_sv__DOT__rdw__0__k = 0;
    IData/*31:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout;
    __Vfunc_tb_cosim_sv__DOT__rdw__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cosim_sv__DOT__rdw__1__k;
    __Vfunc_tb_cosim_sv__DOT__rdw__1__k = 0;
    // Body
    vlSelfRef.tb_cosim_sv__DOT__ireq[0U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__ireq[1U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__ireq[2U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__ireq[3U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__ireq[4U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__ireq[5U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__ireq[0U] = (0x480000U 
                                            | (0x7ffffU 
                                               & vlSelfRef.tb_cosim_sv__DOT__ireq[0U]));
    vlSelfRef.tb_cosim_sv__DOT__ireq[1U] = (IData)((QData)((IData)(
                                                                   (0xfffffffcU 
                                                                    & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q))));
    vlSelfRef.tb_cosim_sv__DOT__ireq[2U] = ((0xfffffff0U 
                                             & vlSelfRef.tb_cosim_sv__DOT__ireq[2U]) 
                                            | (IData)(
                                                      ((QData)((IData)(
                                                                       (0xfffffffcU 
                                                                        & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q))) 
                                                       >> 0x20U)));
    vlSelfRef.tb_cosim_sv__DOT__ireq[0U] = ((0xfffffffcU 
                                             & vlSelfRef.tb_cosim_sv__DOT__ireq[0U]) 
                                            | ((2U 
                                                & (((~ (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_if__DOT__state_q)) 
                                                    & (~ (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q))) 
                                                   << 1U)) 
                                               | (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_if__DOT__state_q)));
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
    tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
        = (((- (IData)((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                >> 0x14U));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__f_rvalid 
        = (((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_if__DOT__state_q) 
            & (IData)(vlSelfRef.tb_cosim_sv__DOT__irsp)) 
           & ((~ (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q)) 
              & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_if__DOT__addr_q 
                 == (0xfffffffcU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q))));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[2U] = 0U;
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
        = ((0x3fffffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
           | (0xffc00000U & ((0xf8000000U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                             << 7U)) 
                             | (0x7c00000U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                              << 0xfU)))));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[2U] 
        = (0x1fU & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                    >> 0xfU));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
        = ((0x7fffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
           | ((IData)((1ULL | ((QData)((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                               << 7U))) << 0xfU));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
        = ((0xffc00000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
           | (((IData)((1ULL | ((QData)((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                << 7U))) >> 0x11U) 
              | ((IData)(((1ULL | ((QData)((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                   << 7U)) >> 0x20U)) 
                 << 0xfU)));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
        = ((0xffffc7ffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
           | (0x3800U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                         >> 1U)));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
        = ((0xffffff8fU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
           | (0x70U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                       >> 8U)));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
        = (0xfffffff8U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
    if ((0x40U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        if ((0x20U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((0x10U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            } else if ((8U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((4U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    if ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                        if ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                = ((0x3fffffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                                   | (0xff800000U & 
                                      (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                       << 2U)));
                            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                = ((0xfffffc00U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                                   | (0x3fffffU & (
                                                   ((0x3fcU 
                                                     & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                        >> 0xaU)) 
                                                    | (2U 
                                                       & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                          >> 0x13U))) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                         >> 0x1eU)))));
                            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                = ((0xffc003ffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                                   | (0xfffffc00U & 
                                      ((0x3ff800U & 
                                        ((- (IData)(
                                                    (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                     >> 0x1fU))) 
                                         << 0xbU)) 
                                       | (0x400U & 
                                          (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                           >> 0x15U)))));
                            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                = (0x400U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                = (0xcU | (0xfffffff1U 
                                           & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
                        } else {
                            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                        }
                    } else {
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else if ((4U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    if ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = ((0x3fffffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                               | (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
                                  << 0x16U));
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                            = ((0xffc00000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                               | (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
                                  >> 0xaU));
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (0x200U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (0xcU | (0xfffffff1U 
                                       & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
                    } else {
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else if ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = ((0x3fffffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                           | (0xffc00000U & ((0xf8000000U 
                                              & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                 << 2U)) 
                                             | (0x7800000U 
                                                & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                   << 0xfU)))));
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                        = ((0xfffffffeU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                           | (1U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                    >> 0x1eU)));
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                        = ((0xffc00001U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                           | (0xfffffffeU & ((0x3ffff8U 
                                              & ((- (IData)(
                                                            (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                             >> 0x1fU))) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                    >> 0x1dU)) 
                                                | (2U 
                                                   & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                      >> 6U))))));
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (0x4000U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (0xfffffff7U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                } else {
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        }
    } else if ((0x20U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        if ((0x10U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((8U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            } else if ((4U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    if ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = ((0x7fffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                               | ((IData)((5ULL | ((QData)((IData)(
                                                                   (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                    >> 0xcU))) 
                                                   << 0x13U))) 
                                  << 0xfU));
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                            = ((0xffc00000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                               | (((IData)((5ULL | 
                                            ((QData)((IData)(
                                                             (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                              >> 0xcU))) 
                                             << 0x13U))) 
                                   >> 0x11U) | ((IData)(
                                                        ((5ULL 
                                                          | ((QData)((IData)(
                                                                             (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                              >> 0xcU))) 
                                                             << 0x13U)) 
                                                         >> 0x20U)) 
                                                << 0xfU)));
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (8U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    } else {
                        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else if ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (0xfffc7fffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (8U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = ((0xffc3ffffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                           | (((0x4000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                ? ((0x2000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                    ? ((0x1000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                     ? ((0x40000000U 
                                         & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                         ? 7U : 6U)
                                     : 5U)) : ((0x2000U 
                                                & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                    ? 2U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                     ? 1U
                                                     : 0U)))) 
                              << 0x12U));
                } else {
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else if ((8U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        } else if ((4U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        } else if ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = ((0x7fffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                       | (0xffff8000U & (0x8000U | 
                                         ((0xf8000000U 
                                           & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                              << 2U)) 
                                          | (0x7c00000U 
                                             & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                << 0xfU))))));
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                    = ((0xfffffffcU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                       | (0x7fffU & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                     >> 0x1eU)));
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                    = ((0xffc00003U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                       | (0x3ffffcU & ((- (IData)((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                   >> 0x1fU))) 
                                       << 2U)));
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (0x80U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            } else {
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        }
    } else if ((0x10U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        if ((8U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        } else if ((4U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                if ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = ((0x7fffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                           | ((IData)((3ULL | ((QData)((IData)(
                                                               (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                >> 0xcU))) 
                                               << 0x13U))) 
                              << 0xfU));
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                        = ((0xffc00000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                           | (((IData)((3ULL | ((QData)((IData)(
                                                                (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                 >> 0xcU))) 
                                                << 0x13U))) 
                               >> 0x11U) | ((IData)(
                                                    ((3ULL 
                                                      | ((QData)((IData)(
                                                                         (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q 
                                                                          >> 0xcU))) 
                                                         << 0x13U)) 
                                                     >> 0x20U)) 
                                            << 0xfU)));
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (8U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                } else {
                    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else if ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            if ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = ((0x3fffffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                       | (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
                          << 0x16U));
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                    = ((0xffc00000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                       | (tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i 
                          >> 0xaU));
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (0x8000U | (0xfffc7fffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (8U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = ((0xffc3ffffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                       | (((0x4000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                            ? ((0x2000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                ? ((0x1000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                    ? 7U
                                                    : 6U)
                                                   : 5U))
                            : ((0x2000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                ? ((0x1000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                    ? 4U : 3U) : ((0x1000U 
                                                   & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                                                   ? 2U
                                                   : 0U))) 
                          << 0x12U));
            } else {
                vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        }
    } else if ((8U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
            = ((4U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                ? ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                    ? ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)
                        ? (0xfffffff7U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])
                        : (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]))
                    : (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]))
                : (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
    } else if ((4U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
            = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
    } else if ((2U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
        if ((1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = ((0x7fffU & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]) 
                   | ((IData)((1ULL | ((QData)((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                       << 7U))) << 0xfU));
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                = ((0xffc00000U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U]) 
                   | (((IData)((1ULL | ((QData)((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                        << 7U))) >> 0x11U) 
                      | ((IData)(((1ULL | ((QData)((IData)(tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                           << 7U)) 
                                  >> 0x20U)) << 0xfU)));
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (0x100U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (0xaU | (0xfffffff1U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]));
        } else {
            vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
        }
    } else {
        vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
            = (1U | vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U]);
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                             >> 0x10U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                     >> 0x10U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                    >> 0x10U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                   >> 0x10U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                      >> 0x10U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                       >> 0x10U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:52: Assertion failed in %Ntb_cosim_sv.dut.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      >> 0x10U)));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/../../rtl/warp_core.sv", 52, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((1U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                             >> 4U))) 
                               << 1U) | (0U == (3U 
                                                & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                   >> 4U)))))))) {
        if ((0U != (((1U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                   >> 4U))) << 1U) 
                    | (0U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                    >> 4U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:68: Assertion failed in %Ntb_cosim_sv.dut.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      >> 4U)));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/../../rtl/warp_core.sv", 68, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((1U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                             >> 1U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                     >> 1U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                    >> 1U))))))))) {
        if ((0U != (((1U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                   >> 1U))) << 2U) 
                    | (((2U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                      >> 1U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                       >> 1U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:86: Assertion failed in %Ntb_cosim_sv.dut.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
                                                      >> 1U)));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/cosim/../../rtl/warp_core.sv", 86, "");
            }
        }
    }
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT____VdfgRegularize_h96dfe7f7_0_0 
        = ((vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U] 
            >> 3U) & (0U != (0x1fU & (vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[1U] 
                                      >> 0x16U))));
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__is_mem 
        = (IData)((0U != (0x180U & vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d[0U])));
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
    vlSelfRef.tb_cosim_sv__DOT__dut__DOT__c_req = ((IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q) 
                                                   & (IData)(vlSelfRef.tb_cosim_sv__DOT__dut__DOT__u_core__DOT__is_mem));
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
