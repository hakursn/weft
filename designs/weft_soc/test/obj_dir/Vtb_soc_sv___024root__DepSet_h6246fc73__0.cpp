// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_soc_sv.h for the primary calling header

#include "Vtb_soc_sv__pch.h"
#include "Vtb_soc_sv__Syms.h"
#include "Vtb_soc_sv___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_soc_sv___024root___eval_initial__TOP__Vtiming__2(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/tb_soc_sv.sv", 
                                             4);
        vlSelfRef.tb_soc_sv__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc_sv___024root___dump_triggers__act(Vtb_soc_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_soc_sv___024root___eval_triggers__act(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_triggers__act\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__arst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__arst_n__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_soc_sv__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__dut__DOT__rst_n2__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(4U, ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__tx)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__tx__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__arst_n__0 
        = vlSelfRef.tb_soc_sv__DOT__arst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__clk__0 
        = vlSelfRef.tb_soc_sv__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__dut__DOT__rst_n2__0 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_sv__DOT__tx__0 
        = vlSelfRef.tb_soc_sv__DOT__tx;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_soc_sv___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_soc_sv___024root___nba_sequent__TOP__0(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___nba_sequent__TOP__0\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*51:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o = 0;
    QData/*51:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o = 0;
    SData/*13:0*/ __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__1__Vfuncout;
    __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__1__a;
    __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__1__a = 0;
    SData/*13:0*/ __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__2__Vfuncout;
    __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__2__a;
    __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__2__a = 0;
    CData/*0:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q = 0;
    CData/*1:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q = 0;
    CData/*1:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 0;
    CData/*0:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 0;
    CData/*1:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 0;
    CData/*0:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 0;
    SData/*13:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q = 0;
    CData/*1:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q = 0;
    CData/*0:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q = 0;
    SData/*9:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh = 0;
    CData/*3:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits = 0;
    SData/*15:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div = 0;
    CData/*1:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q = 0;
    CData/*0:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q = 0;
    CData/*7:0*/ __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0;
    __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0;
    __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0;
    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1;
    __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1 = 0;
    SData/*13:0*/ __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1;
    __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1;
    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2;
    __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2 = 0;
    SData/*13:0*/ __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2;
    __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2;
    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3;
    __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3 = 0;
    SData/*13:0*/ __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3;
    __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3;
    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3 = 0;
    // Body
    vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
    vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q;
    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0 = 0U;
    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1 = 0U;
    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2 = 0U;
    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3 = 0U;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q;
    vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q;
    __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q;
    if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2) {
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push) {
            vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
                = ((7U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))));
        }
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push) {
            vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
                = ((7U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q))));
        }
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q 
                = ((7U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))));
        }
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q 
                = ((7U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q))));
        }
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q 
            = (0xfU & (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q) 
                        + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push)) 
                       - (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop)));
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q 
            = (0xfU & (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q) 
                        + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push)) 
                       - (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop)));
        if ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits))) {
            if (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q)) 
                 & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U] 
                     >> 6U) & (0U == (0xcU & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__waddr_q)))))) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh 
                    = (0x200U | (0x1feU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U] 
                                           >> 0xcU)));
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits = 0xaU;
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div = 7U;
            }
        } else if ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div))) {
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh 
                = (0x200U | (0x1ffU & ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh) 
                                       >> 1U)));
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits 
                = (0xfU & ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits) 
                           - (IData)(1U)));
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div = 7U;
        } else {
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div 
                = (0xffffU & ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div) 
                              - (IData)(1U)));
        }
        if (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req)) 
             & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_hs))) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel))));
        }
        if (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req)) 
             & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_hs))) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel))));
        }
        if (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req)) 
             & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[0U] 
                 >> 1U) & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                   >> 0x2aU))))) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel))));
        }
        if (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req)) 
             & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[0U] 
                 >> 1U) & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                   >> 0x2aU))))) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q 
                = (1U & ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel)) 
                         & ((IData)(1U) + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel))));
        }
    } else {
        vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = 0U;
        vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q = 0U;
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh = 0x3ffU;
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits = 0U;
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q = 0U;
    }
    if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2) {
        if ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q))) {
            if ((0x2000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[3U])) {
                __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__1__a 
                    = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[5U] 
                        << 0xeU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[4U] 
                                    >> 0x12U));
                __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__1__Vfuncout 
                    = (0x3fffU & (__Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__1__a 
                                  >> 2U));
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__wid_q 
                    = (0x1fU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[5U] 
                                >> 0x12U));
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q 
                    = __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__1__Vfuncout;
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q))) {
            if ((0x40U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U])) {
                if ((0x200U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U])) {
                    __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0 
                        = (0xffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U] 
                                    >> 0xdU));
                    __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0 
                        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q;
                    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0 = 1U;
                }
                if ((0x100U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U])) {
                    __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q = 2U;
                }
                if ((0x400U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U])) {
                    __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1 
                        = (0xffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U] 
                                    >> 0x15U));
                    __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1 
                        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q;
                    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1 = 1U;
                }
                if ((0x800U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U])) {
                    __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2 
                        = (0xffU & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[3U] 
                                     << 3U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U] 
                                               >> 0x1dU)));
                    __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2 
                        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q;
                    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2 = 1U;
                }
                if ((0x1000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U])) {
                    __VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3 
                        = (0xffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[3U] 
                                    >> 5U));
                    __VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3 
                        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q;
                    __VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3 = 1U;
                }
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q 
                    = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q)));
            }
        } else if ((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q))) {
            if ((0x20U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U])) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q = 0U;
            }
        } else {
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_bram.sv:63: Assertion failed in %Ntb_soc_sv.dut.u_bram: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/axi_bram/rtl/weft_axi_bram.sv", 63, "");
                }
            }
        }
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q) {
            if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q) {
                if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[0U])) {
                    if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rcnt_q) 
                         == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rlen_q))) {
                        __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q = 0U;
                    } else {
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rcnt_q 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rcnt_q)));
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__raddr_q 
                            = (0x3fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__raddr_q)));
                    }
                }
            } else {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q = 0U;
            }
        } else if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[0U])) {
            __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__2__a 
                = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[1U];
            __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__2__Vfuncout 
                = (0x3fffU & (__Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__2__a 
                              >> 2U));
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rcnt_q = 0U;
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rid_q 
                = (0x1fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U]);
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__raddr_q 
                = __Vfunc_tb_soc_sv__DOT__dut__DOT__u_bram__DOT__word_idx__2__Vfuncout;
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rlen_q 
                = (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[0U] 
                   >> 0x18U);
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_bram.sv:78: Assertion failed in %Ntb_soc_sv.dut.u_bram: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/axi_bram/rtl/weft_axi_bram.sv", 78, "");
                }
            }
        }
    } else {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rcnt_q = 0U;
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q = 0U;
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q = 0U;
    }
    if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2) {
        if ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q))) {
            if ((0x1000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                 [0U][2U][3U])) {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_id_q 
                    = (0xfU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                               [0U][2U][5U] >> 0x11U));
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q))) {
            if ((1U & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                        [0U][2U][2U] >> 5U) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                                               [0U]
                                               [2U][2U] 
                                               >> 7U)))) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q))) {
            if ((0x10U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                 [0U][2U][2U])) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 0U;
            }
        } else {
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_err_slv.sv:54: Assertion failed in %Ntb_soc_sv.dut.u_xbar.g_slv[0].i_err: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/axi_xbar/rtl/weft_axi_err_slv.sv", 54, "");
                }
            }
        }
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q) {
            if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q) {
                if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                     [0U][2U][0U])) {
                    if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q) 
                         == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_len_q))) {
                        __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 0U;
                    } else {
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q)));
                    }
                }
            } else {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 0U;
            }
        } else if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                    [0U][2U][0U])) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_id_q 
                = (0xfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                   [0U][2U][2U]);
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_len_q 
                = (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                   [0U][2U][0U] >> 0x18U);
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q = 0U;
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_err_slv.sv:64: Assertion failed in %Ntb_soc_sv.dut.u_xbar.g_slv[0].i_err: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/axi_xbar/rtl/weft_axi_err_slv.sv", 64, "");
                }
            }
        }
    } else {
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q = 0U;
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q = 0U;
    }
    if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2) {
        if ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q))) {
            if ((0x1000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                 [1U][2U][3U])) {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_id_q 
                    = (0xfU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                               [1U][2U][5U] >> 0x11U));
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q))) {
            if ((1U & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                        [1U][2U][2U] >> 5U) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                                               [1U]
                                               [2U][2U] 
                                               >> 7U)))) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q))) {
            if ((0x10U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                 [1U][2U][2U])) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 0U;
            }
        } else {
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_err_slv.sv:54: Assertion failed in %Ntb_soc_sv.dut.u_xbar.g_slv[1].i_err: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/axi_xbar/rtl/weft_axi_err_slv.sv", 54, "");
                }
            }
        }
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q) {
            if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q) {
                if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                     [1U][2U][0U])) {
                    if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q) 
                         == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_len_q))) {
                        __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 0U;
                    } else {
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q)));
                    }
                }
            } else {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 0U;
            }
        } else if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                    [1U][2U][0U])) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_id_q 
                = (0xfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                   [1U][2U][2U]);
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_len_q 
                = (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
                   [1U][2U][0U] >> 0x18U);
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q = 0U;
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_err_slv.sv:64: Assertion failed in %Ntb_soc_sv.dut.u_xbar.g_slv[1].i_err: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/axi_xbar/rtl/weft_axi_err_slv.sv", 64, "");
                }
            }
        }
    } else {
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q = 0U;
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q = 0U;
    }
    if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2) {
        if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_hs) 
             & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)))) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q 
                = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel;
        }
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q) 
                        + ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_hs)
                            ? 1U : 0U)) - ((1U & ((IData)(
                                                          (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
                                                           >> 0x2aU)) 
                                                  & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
                                                     >> 4U)))
                                            ? 1U : 0U)));
        if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_hs) 
             & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)))) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q 
                = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel;
        }
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q) 
                        + ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_hs)
                            ? 1U : 0U)) - ((IData)(
                                                   ((5ULL 
                                                     == 
                                                     (5ULL 
                                                      & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o)) 
                                                    & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U]))
                                            ? 1U : 0U)));
        if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_hs) 
             & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)))) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q 
                = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel;
        }
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q) 
                        + ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_hs)
                            ? 1U : 0U)) - ((IData)(
                                                   ((5ULL 
                                                     == 
                                                     (5ULL 
                                                      & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o)) 
                                                    & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U]))
                                            ? 1U : 0U)));
        if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs) 
             & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)))) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q 
                = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel;
        }
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q 
            = (0xfU & (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q) 
                        + ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs)
                            ? 1U : 0U)) - ((1U & ((IData)(
                                                          (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
                                                           >> 0x2aU)) 
                                                  & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
                                                     >> 4U)))
                                            ? 1U : 0U)));
    } else {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q = 0U;
    }
    if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2) {
        if ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q))) {
            if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__c_req) 
                 & (~ (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                       >> 7U)))) {
                if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_hs) {
                    __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q = 1U;
                }
            } else if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__c_req) 
                        & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                           >> 7U))) {
                if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs) {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_ok_q = 1U;
                }
                if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_hs) {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_ok_q = 1U;
                }
                if (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_done) 
                     & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_done))) {
                    __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q = 2U;
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_ok_q = 0U;
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_ok_q = 0U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q))) {
            if ((1U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
                       & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o)))) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q))) {
            if ((1U & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
                        >> 4U) & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
                                          >> 0x2aU))))) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q = 0U;
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)))))))) {
            if ((0U == (((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: warp_axi_lsu.sv:69: Assertion failed in %Ntb_soc_sv.dut.u_cpu.u_ls: unique case, but none matched for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/warp/rtl/warp_axi_lsu.sv", 69, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_axi_lsu.sv:69: Assertion failed in %Ntb_soc_sv.dut.u_cpu.u_ls: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/warp/rtl/warp_axi_lsu.sv", 69, "");
            }
        }
    } else {
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_ok_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_ok_q = 0U;
    }
    if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2) {
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q) {
            if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q) {
                if ((1U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
                           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o)))) {
                    __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q = 0U;
                }
            }
        } else if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_hs) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__addr_q 
                = (0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q);
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q)))))))) {
            if ((0U == (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: warp_axi_ifetch.sv:50: Assertion failed in %Ntb_soc_sv.dut.u_cpu.u_if: unique case, but none matched for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/warp/rtl/warp_axi_ifetch.sv", 50, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_axi_ifetch.sv:50: Assertion failed in %Ntb_soc_sv.dut.u_cpu.u_if: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/warp/rtl/warp_axi_ifetch.sv", 50, "");
            }
        }
    } else {
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__addr_q = 0U;
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q;
    if (__VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem[__VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem
                [__VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v0));
    }
    if (__VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem[__VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem
                [__VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem[__VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem
                [__VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem[__VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem
                [__VdlyDim0__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q;
    vlSelfRef.tb_soc_sv__DOT__tx = (1U & ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits)) 
                                          | (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh)));
    if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2) {
        if ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q))) {
            if ((0x2000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[3U])) {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__waddr_q 
                    = (0xfffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[4U] 
                                 >> 0x12U));
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__wid_q 
                    = (0x1fU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[5U] 
                                >> 0x12U));
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q))) {
            if ((IData)((0x140U == (0x140U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U])))) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q))) {
            if ((0x20U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U])) {
                __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q = 0U;
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q)))))))) {
            if ((0U == (((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_uart.sv:64: Assertion failed in %Ntb_soc_sv.dut.u_uart: unique case, but none matched for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/uart/rtl/weft_uart.sv", 64, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: weft_uart.sv:64: Assertion failed in %Ntb_soc_sv.dut.u_uart: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/uart/rtl/weft_uart.sv", 64, "");
            }
        }
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q) {
            if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q) {
                if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[0U])) {
                    __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q = 0U;
                }
            }
        } else if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[0U])) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__raddr_q 
                = (0xfffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[1U]);
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__rid_q 
                = (0x1fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U]);
            __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q)))))))) {
            if ((0U == (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_uart.sv:69: Assertion failed in %Ntb_soc_sv.dut.u_uart: unique case, but none matched for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/uart/rtl/weft_uart.sv", 69, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: weft_uart.sv:69: Assertion failed in %Ntb_soc_sv.dut.u_uart: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/uart/rtl/weft_uart.sv", 69, "");
            }
        }
    } else {
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q = 0U;
        __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q = 0U;
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o = 0ULL;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
        = ((0xfffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o) 
           | ((QData)((IData)((((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q)) 
                                << 1U) | (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q))))) 
              << 0x34U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
        = ((0x3ff7ffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o) 
           | ((QData)((IData)((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q)))) 
              << 0x2bU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
        = ((0x301fffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__wid_q) 
                               << 2U))) << 0x2dU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
        = ((0x3ffbffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o) 
           | ((QData)((IData)((1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q))))) 
              << 0x2aU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
        = ((0x3ffffffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o) 
           | (IData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
        = ((0x3ffc0000000007ULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o) 
           | (((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rid_q)) 
               << 0x25U) | ((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem
                                            [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__raddr_q])) 
                            << 5U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
        = ((0x3ffffffffffffbULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rcnt_q) 
                               == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rlen_q)))) 
              << 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o = 0ULL;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o 
        = ((0x3ffffffffffffULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o) 
           | ((QData)((IData)((((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)) 
                                << 1U) | (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q))))) 
              << 0x32U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o 
        = ((0xffbffffffffffULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o) 
           | ((QData)((IData)((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q)))) 
              << 0x2aU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o 
        = ((0xc0fffffffffffULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o) 
           | ((QData)((IData)((3U | ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_id_q) 
                                     << 2U)))) << 0x2cU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o 
        = ((0xffdffffffffffULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o) 
           | ((QData)((IData)((1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q))))) 
              << 0x29U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o 
        = ((0xffffffffffffeULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o) 
           | (IData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o 
        = ((0xffe0000000003ULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o) 
           | (0x18ULL | (((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_id_q)) 
                          << 0x25U) | ((QData)((IData)(
                                                       ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q) 
                                                        == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_len_q)))) 
                                       << 2U))));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o = 0ULL;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o 
        = ((0x3ffffffffffffULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o) 
           | ((QData)((IData)((((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)) 
                                << 1U) | (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q))))) 
              << 0x32U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o 
        = ((0xffbffffffffffULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o) 
           | ((QData)((IData)((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q)))) 
              << 0x2aU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o 
        = ((0xc0fffffffffffULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o) 
           | ((QData)((IData)((3U | ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_id_q) 
                                     << 2U)))) << 0x2cU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o 
        = ((0xffdffffffffffULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o) 
           | ((QData)((IData)((1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q))))) 
              << 0x29U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o 
        = ((0xffffffffffffeULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o) 
           | (IData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o 
        = ((0xffe0000000003ULL & tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o) 
           | (0x18ULL | (((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_id_q)) 
                          << 0x25U) | ((QData)((IData)(
                                                       ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q) 
                                                        == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_len_q)))) 
                                       << 2U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q 
        = __Vdly__tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp[0U][2U] 
        = tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp[1U][2U] 
        = tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o = 0ULL;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
        = ((0xfffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o) 
           | ((QData)((IData)((((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q)) 
                                << 1U) | (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q))))) 
              << 0x34U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
        = ((0x3ff7ffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o) 
           | ((QData)((IData)((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q)))) 
              << 0x2bU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
        = ((0x301fffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__wid_q) 
                               << 2U))) << 0x2dU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
        = ((0x3ffbffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o) 
           | ((QData)((IData)((1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q))))) 
              << 0x2aU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
        = ((0x3ffffffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o) 
           | (IData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
        = ((0x3ffc1fffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o) 
           | ((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__rid_q)) 
              << 0x25U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
        = ((0x3fffe00000001fULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o) 
           | ((QData)((IData)(((1U == (3U & ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__raddr_q) 
                                             >> 2U)))
                                ? (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits))
                                : 0U))) << 5U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
        = (4ULL | (0x3fffffffffffe3ULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o));
}

VL_INLINE_OPT void Vtb_soc_sv___024root___nba_sequent__TOP__2(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___nba_sequent__TOP__2\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i;
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_idx;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_idx = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_idx;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_idx = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_err;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_err = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_err;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_err = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__dec_valid_o;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__dec_valid_o = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__dec_valid_o;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__dec_valid_o = 0;
    VlWide<3>/*71:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0;
    VL_ZERO_W(72, tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0);
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0 = 0;
    QData/*37:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0 = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0 = 0;
    VlWide<3>/*65:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0;
    VL_ZERO_W(66, tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0);
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0 = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0 = 0;
    // Body
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
        = vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q 
        = vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
    if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__rst_n2) {
        if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q) {
            if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q) {
                if (vlSelfRef.tb_soc_sv__DOT__rvalid) {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q 
                        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__npc;
                    vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q = 0U;
                }
            }
        } else if (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__f_rvalid) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                = (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
                           >> 5U));
            vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q)))))))) {
            if ((0U == (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:128: Assertion failed in %Ntb_soc_sv.dut.u_cpu.u_core: unique case, but none matched for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/warp/rtl/warp_core.sv", 128, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:128: Assertion failed in %Ntb_soc_sv.dut.u_cpu.u_core: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/warp/rtl/warp_core.sv", 128, "");
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q = 0U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q = 0x80000000U;
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q = 0U;
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q 
        = vlSelfRef.__Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
        = (0x480000U | (0x7ffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U]));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U] 
        = (IData)((QData)((IData)((0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
        = ((0xfffffff0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U]) 
           | (IData)(((QData)((IData)((0xfffffffcU 
                                       & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q))) 
                      >> 0x20U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
        = ((0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U]) 
           | ((2U & (((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q)) 
                      & (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q))) 
                     << 1U)) | (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q)));
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i 
        = (((- (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                >> 0x14U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_idx = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__dec_valid_o = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_err = 1U;
    if (((0x80000000U <= ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
                           << 0xfU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
                                       >> 0x11U))) 
         & (0x80010000U > ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
                            << 0xfU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
                                        >> 0x11U))))) {
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_idx = 0U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__dec_valid_o = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_err = 0U;
    }
    if ((((~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__dec_valid_o)) 
          & (0x10000000U <= ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
                              << 0xfU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
                                          >> 0x11U)))) 
         & (0x10001000U > ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
                            << 0xfU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
                                        >> 0x11U))))) {
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_idx = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__dec_valid_o = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_err = 0U;
    }
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_idx = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__dec_valid_o = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_err = 1U;
    if (((0x80000000U <= vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U]) 
         & (0x80010000U > vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U]))) {
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_idx = 0U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__dec_valid_o = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_err = 0U;
    }
    if ((((~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__dec_valid_o)) 
          & (0x10000000U <= vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U])) 
         & (0x10001000U > vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U]))) {
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_idx = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__dec_valid_o = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_err = 0U;
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
        = ((0x3fffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
           | (0xffc00000U & ((0xf8000000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                             << 7U)) 
                             | (0x7c00000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                              << 0xfU)))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[2U] 
        = (0x1fU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                    >> 0xfU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
        = ((0x7fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
           | ((IData)((1ULL | ((QData)((IData)(tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                               << 7U))) << 0xfU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
        = ((0xffc00000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
           | (((IData)((1ULL | ((QData)((IData)(tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                << 7U))) >> 0x11U) 
              | ((IData)(((1ULL | ((QData)((IData)(tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                   << 7U)) >> 0x20U)) 
                 << 0xfU)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
        = ((0xffffc7ffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
           | (0x3800U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                         >> 1U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
        = ((0xffffff8fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
           | (0x70U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                       >> 8U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
        = (0xfffffff8U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
    if ((0x40U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
        if ((0x20U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
            if ((0x10U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
            } else if ((8U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                if ((4U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                    if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                        if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                = ((0x3fffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                                   | (0xff800000U & 
                                      (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                       << 2U)));
                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                                = ((0xfffffc00U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                                   | (0x3fffffU & (
                                                   ((0x3fcU 
                                                     & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                        >> 0xaU)) 
                                                    | (2U 
                                                       & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                          >> 0x13U))) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                         >> 0x1eU)))));
                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                                = ((0xffc003ffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                                   | (0xfffffc00U & 
                                      ((0x3ff800U & 
                                        ((- (IData)(
                                                    (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                     >> 0x1fU))) 
                                         << 0xbU)) 
                                       | (0x400U & 
                                          (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                           >> 0x15U)))));
                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                = (0x400U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                = (0xcU | (0xfffffff1U 
                                           & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]));
                        } else {
                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                        }
                    } else {
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                }
            } else if ((4U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                    if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                            = ((0x3fffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                               | (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i 
                                  << 0x16U));
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                            = ((0xffc00000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                               | (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i 
                                  >> 0xaU));
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                            = (0x200U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                            = (0xcU | (0xfffffff1U 
                                       & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]));
                    } else {
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                }
            } else if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = ((0x3fffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                           | (0xffc00000U & ((0xf8000000U 
                                              & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                 << 2U)) 
                                             | (0x7800000U 
                                                & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                   << 0xfU)))));
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                        = ((0xfffffffeU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                           | (1U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                    >> 0x1eU)));
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                        = ((0xffc00001U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                           | (0xfffffffeU & ((0x3ffff8U 
                                              & ((- (IData)(
                                                            (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                             >> 0x1fU))) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                    >> 0x1dU)) 
                                                | (2U 
                                                   & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                      >> 6U))))));
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (0x4000U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (0xfffffff7U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                } else {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
        }
    } else if ((0x20U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
        if ((0x10U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
            if ((8U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
            } else if ((4U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                    if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                            = ((0x7fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                               | ((IData)((5ULL | ((QData)((IData)(
                                                                   (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                                    >> 0xcU))) 
                                                   << 0x13U))) 
                                  << 0xfU));
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                            = ((0xffc00000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                               | (((IData)((5ULL | 
                                            ((QData)((IData)(
                                                             (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                              >> 0xcU))) 
                                             << 0x13U))) 
                                   >> 0x11U) | ((IData)(
                                                        ((5ULL 
                                                          | ((QData)((IData)(
                                                                             (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                                              >> 0xcU))) 
                                                             << 0x13U)) 
                                                         >> 0x20U)) 
                                                << 0xfU)));
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                            = (8U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                    } else {
                        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                }
            } else if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (0xfffc7fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (8U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = ((0xffc3ffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                           | (((0x4000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                ? ((0x2000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                    ? ((0x1000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                     ? ((0x40000000U 
                                         & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                         ? 7U : 6U)
                                     : 5U)) : ((0x2000U 
                                                & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                                    ? 2U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                                     ? 1U
                                                     : 0U)))) 
                              << 0x12U));
                } else {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
            }
        } else if ((8U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
        } else if ((4U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
        } else if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
            if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = ((0x7fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                       | (0xffff8000U & (0x8000U | 
                                         ((0xf8000000U 
                                           & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                              << 2U)) 
                                          | (0x7c00000U 
                                             & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                << 0xfU))))));
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                    = ((0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                       | (0x7fffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                     >> 0x1eU)));
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                    = ((0xffc00003U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                       | (0x3ffffcU & ((- (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                   >> 0x1fU))) 
                                       << 2U)));
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (0x80U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
            } else {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
        }
    } else if ((0x10U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
        if ((8U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
        } else if ((4U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
            if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = ((0x7fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                           | ((IData)((3ULL | ((QData)((IData)(
                                                               (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                                >> 0xcU))) 
                                               << 0x13U))) 
                              << 0xfU));
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                        = ((0xffc00000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                           | (((IData)((3ULL | ((QData)((IData)(
                                                                (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                                 >> 0xcU))) 
                                                << 0x13U))) 
                               >> 0x11U) | ((IData)(
                                                    ((3ULL 
                                                      | ((QData)((IData)(
                                                                         (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q 
                                                                          >> 0xcU))) 
                                                         << 0x13U)) 
                                                     >> 0x20U)) 
                                            << 0xfU)));
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (8U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                } else {
                    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
            }
        } else if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
            if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = ((0x3fffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                       | (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i 
                          << 0x16U));
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                    = ((0xffc00000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                       | (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i 
                          >> 0xaU));
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (0x8000U | (0xfffc7fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]));
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (8U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = ((0xffc3ffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                       | (((0x4000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                            ? ((0x2000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                ? ((0x1000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                                    ? 7U
                                                    : 6U)
                                                   : 5U))
                            : ((0x2000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                ? ((0x1000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                    ? 4U : 3U) : ((0x1000U 
                                                   & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                                                   ? 2U
                                                   : 0U))) 
                          << 0x12U));
            } else {
                vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
        }
    } else if ((8U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
            = ((4U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                ? ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                    ? ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)
                        ? (0xfffffff7U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                        : (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]))
                    : (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]))
                : (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]));
    } else if ((4U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
            = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
    } else if ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
        if ((1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q)) {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = ((0x7fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]) 
                   | ((IData)((1ULL | ((QData)((IData)(tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                       << 7U))) << 0xfU));
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                = ((0xffc00000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U]) 
                   | (((IData)((1ULL | ((QData)((IData)(tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                        << 7U))) >> 0x11U) 
                      | ((IData)(((1ULL | ((QData)((IData)(tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_dec__DOT__imm_i)) 
                                           << 7U)) 
                                  >> 0x20U)) << 0xfU)));
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = (0x100U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = (0xaU | (0xfffffff1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]));
        } else {
            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
        }
    } else {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
            = (1U | vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U]);
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel 
        = ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_err)
            ? 2U : (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_idx));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel 
        = ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_err)
            ? 2U : (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_idx));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                             >> 0x10U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                     >> 0x10U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                    >> 0x10U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                   >> 0x10U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                      >> 0x10U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                       >> 0x10U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:52: Assertion failed in %Ntb_soc_sv.dut.u_cpu.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                      >> 0x10U)));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/warp/rtl/warp_core.sv", 52, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((1U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                             >> 4U))) 
                               << 1U) | (0U == (3U 
                                                & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                   >> 4U)))))))) {
        if ((0U != (((1U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                   >> 4U))) << 1U) 
                    | (0U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                    >> 4U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:68: Assertion failed in %Ntb_soc_sv.dut.u_cpu.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                      >> 4U)));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/warp/rtl/warp_core.sv", 68, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((1U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                             >> 1U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                     >> 1U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                    >> 1U))))))))) {
        if ((0U != (((1U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                   >> 1U))) << 2U) 
                    | (((2U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                      >> 1U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                       >> 1U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: warp_core.sv:86: Assertion failed in %Ntb_soc_sv.dut.u_cpu.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                      >> 1U)));
                VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/designs/weft_soc/test/../../../ip/warp/rtl/warp_core.sv", 86, "");
            }
        }
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__is_mem 
        = (IData)((0U != (0x180U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed 
        = ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)) 
           | (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel) 
               == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q)) 
              & (8U > (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed 
        = ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)) 
           | (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q) 
               == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel)) 
              & (8U > (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__c_req 
        = ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q) 
           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__is_mem));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][5U] = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
        = (0xffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
                    >> 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][3U] 
        = ((0x1fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][3U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][4U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
            >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][5U] 
        = (0x1fffffU & ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
                                      << 0xdU)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U] 
             >> 0xcU) & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel))) 
           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][3U] 
        = ((0xffffefffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][3U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0) 
                         << 0xcU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U])) 
                                            >> 6U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = ((0x3fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                         << 6U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][3U] 
        = ((0xfffff000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][3U]) | (((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                          >> 0x1aU) | ((IData)((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
                                                >> 0x20U)) 
                                       << 6U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
             >> 5U) & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = ((0xffffffdfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0) 
                         << 5U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
             >> 4U) & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = ((0xffffffefU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0) 
                         << 4U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
        = (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
                 >> 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][0U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][0U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][1U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
            >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = ((0xfffffff0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][2U]) | ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                          >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
                                       << 2U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
             >> 1U) & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel))) 
           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][0U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0) 
                         << 1U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
            & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [0U][0U]) | (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][5U] = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
        = (0xffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
                    >> 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][3U] 
        = ((0x1fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][3U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][4U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
            >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][5U] 
        = (0x1fffffU & ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
                                      << 0xdU)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U] 
             >> 0xcU) & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel))) 
           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][3U] 
        = ((0xffffefffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][3U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0) 
                         << 0xcU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U])) 
                                            >> 6U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = ((0x3fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                         << 6U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][3U] 
        = ((0xfffff000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][3U]) | (((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                          >> 0x1aU) | ((IData)((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
                                                >> 0x20U)) 
                                       << 6U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
             >> 5U) & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = ((0xffffffdfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0) 
                         << 5U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
             >> 4U) & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = ((0xffffffefU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0) 
                         << 4U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
        = (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
                 >> 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][0U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][0U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][1U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
            >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = ((0xfffffff0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][2U]) | ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                          >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
                                       << 2U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
             >> 1U) & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel))) 
           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][0U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0) 
                         << 1U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
            & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [1U][0U]) | (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][5U] = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[4U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
        = (0xffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[5U] 
                    >> 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][3U] 
        = ((0x1fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][3U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][4U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
            >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][5U] 
        = (0x1fffffU & ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
                                      << 0xdU)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U] 
             >> 0xcU) & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel))) 
           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][3U] 
        = ((0xffffefffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][3U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0) 
                         << 0xcU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U])) 
                                            >> 6U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = ((0x3fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                         << 6U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][3U] 
        = ((0xfffff000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][3U]) | (((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                          >> 0x1aU) | ((IData)((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
                                                >> 0x20U)) 
                                       << 6U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
             >> 5U) & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = ((0xffffffdfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0) 
                         << 5U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
             >> 4U) & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = ((0xffffffefU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0) 
                         << 4U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[1U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
        = (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[2U] 
                 >> 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][0U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][0U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][1U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
            >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = ((0xfffffff0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][2U]) | ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                          >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
                                       << 2U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
             >> 1U) & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel))) 
           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][0U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0) 
                         << 1U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
            & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o[2U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
            [2U][0U]) | (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][0U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][0U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][0U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][0U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][0U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][0U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [0U][5U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][1U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][1U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][1U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][1U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][1U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][1U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [1U][5U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][2U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][2U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][2U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][2U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][2U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[0U][2U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o
        [2U][5U];
}
