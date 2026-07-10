// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_soc_sv.h for the primary calling header

#include "Vtb_soc_sv__pch.h"
#include "Vtb_soc_sv__Syms.h"
#include "Vtb_soc_sv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc_sv___024root___dump_triggers__stl(Vtb_soc_sv___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_soc_sv___024root___eval_triggers__stl(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___eval_triggers__stl\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_soc_sv___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_soc_sv___024root___stl_sequent__TOP__0(Vtb_soc_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_sv___024root___stl_sequent__TOP__0\n"); );
    Vtb_soc_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v;
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v = 0;
    IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v;
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v = 0;
    IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa;
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa = 0;
    IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb;
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb = 0;
    IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr;
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr = 0;
    IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_wdata;
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_wdata = 0;
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
    QData/*51:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_idx;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_idx = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_idx;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_idx = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_err;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_err = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_err;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_err = 0;
    QData/*51:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o = 0;
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
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__dec_valid_o;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__dec_valid_o = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__dec_valid_o;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__dec_valid_o = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed = 0;
    VlWide<3>/*71:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0;
    VL_ZERO_W(72, tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0);
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0 = 0;
    QData/*37:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0 = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0 = 0;
    VlWide<3>/*65:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0;
    VL_ZERO_W(66, tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0);
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0 = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0 = 0;
    CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_grant;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_grant = 0;
    CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_grant;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_grant = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel = 0;
    CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked = 0;
    CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked = 0;
    CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_grant;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_grant = 0;
    CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_grant;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_grant = 0;
    CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel = 0;
    CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked = 0;
    CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked = 0;
    // Body
    vlSelfRef.tb_soc_sv__DOT__tx = (1U & ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits)) 
                                          | (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh)));
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
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__mem
        [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q];
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__mem
        [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q];
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
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp[0U][2U] 
        = tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_err__slv_rsp_o;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp[1U][2U] 
        = tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_err__slv_rsp_o;
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
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v 
        = ((0U == (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                   >> 0x1bU)) ? 0U : ((0x1eU >= (0x1fU 
                                                 & (((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                                                      << 5U) 
                                                     | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                                                        >> 0x1bU)) 
                                                    - (IData)(1U))))
                                       ? vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_rf__DOT__regs
                                      [(0x1fU & (((
                                                   vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                                                   << 5U) 
                                                  | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                                                     >> 0x1bU)) 
                                                 - (IData)(1U)))]
                                       : 0U));
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v 
        = ((0U == (0x1fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[2U]))
            ? 0U : ((0x1eU >= (0x1fU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[2U] 
                                        - (IData)(1U))))
                     ? vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_rf__DOT__regs
                    [(0x1fU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[2U] 
                               - (IData)(1U)))] : 0U));
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
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb 
        = ((0x8000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
            ? ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                << 0xaU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                            >> 0x16U)) : tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v);
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_wdata 
        = ((0U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                         >> 4U))) ? ((tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v))))
            : ((1U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                             >> 4U))) ? ((tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v))
                : tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__npc 
        = ((IData)(4U) + vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q);
    if (((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
          >> 0xeU) & ((0x2000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                       ? ((0x1000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                           ? ((0x800U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                               ? (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v 
                                  >= tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v)
                               : (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v 
                                  < tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v))
                           : ((0x800U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                               ? VL_GTES_III(32, tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v, tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v)
                               : VL_LTS_III(32, tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v, tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v)))
                       : ((~ (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                              >> 0xcU)) & ((0x800U 
                                            & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                                            ? (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v 
                                               != tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v)
                                            : (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v 
                                               == tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs2_v)))))) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__npc 
            = (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q 
               + ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                   << 0xaU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                               >> 0x16U)));
    } else if ((0x400U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__npc 
            = (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q 
               + ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                   << 0xaU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                               >> 0x16U)));
    } else if ((0x200U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__npc 
            = (0xfffffffeU & (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v 
                              + ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
                                  << 0xaU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                              >> 0x16U))));
    }
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa 
        = ((0U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                         >> 0x10U))) ? tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v
            : ((1U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                             >> 0x10U))) ? vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q
                : ((2U == (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                 >> 0x10U))) ? 0U : tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v)));
    tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr 
        = (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__rs1_v 
           + ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[1U] 
               << 0xaU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                           >> 0x16U)));
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
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__alu_res 
        = ((0x200000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
            ? ((0x100000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                ? 0U : ((0x80000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                         ? 0U : ((0x40000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                                  ? (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa 
                                     & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb)
                                  : (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa 
                                     | tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb))))
            : ((0x100000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                ? ((0x80000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                    ? ((0x40000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                        ? VL_SHIFTRS_III(32,32,5, tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa, 
                                         (0x1fU & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb))
                        : (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa 
                           >> (0x1fU & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb)))
                    : ((0x40000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                        ? (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa 
                           ^ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb)
                        : ((tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa 
                            < tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb)
                            ? 1U : 0U))) : ((0x80000U 
                                             & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                                             ? ((0x40000U 
                                                 & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                                                 ? 
                                                (VL_LTS_III(32, tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa, tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa 
                                                 << 
                                                 (0x1fU 
                                                  & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb)))
                                             : ((0x40000U 
                                                 & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U])
                                                 ? 
                                                (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa 
                                                 - tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb)
                                                 : 
                                                (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opa 
                                                 + tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__opb)))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
        = ((0x7ffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U]) 
           | ((IData)((9ULL | ((QData)((IData)((0xfffffffcU 
                                                & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr))) 
                               << 0xdU))) << 0x13U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U] 
        = (((IData)((9ULL | ((QData)((IData)((0xfffffffcU 
                                              & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr))) 
                             << 0xdU))) >> 0xdU) | 
           ((IData)(((9ULL | ((QData)((IData)((0xfffffffcU 
                                               & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr))) 
                              << 0xdU)) >> 0x20U)) 
            << 0x13U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
        = ((0xfffffff0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U]) 
           | ((IData)(((9ULL | ((QData)((IData)((0xfffffffcU 
                                                 & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr))) 
                                << 0xdU)) >> 0x20U)) 
              >> 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
        = ((0xfffffffdU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U]) 
           | ((((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
                & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__c_req)) 
               & (~ (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                     >> 7U))) << 1U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U]) 
           | (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
        = ((0xfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U]) 
           | ((IData)((9ULL | ((QData)((IData)((0xfffffffcU 
                                                & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr))) 
                               << 0xdU))) << 4U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
        = (0x1fffffU & (((IData)((9ULL | ((QData)((IData)(
                                                          (0xfffffffcU 
                                                           & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr))) 
                                          << 0xdU))) 
                         >> 0x1cU) | ((IData)(((9ULL 
                                                | ((QData)((IData)(
                                                                   (0xfffffffcU 
                                                                    & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr))) 
                                                   << 0xdU)) 
                                               >> 0x20U)) 
                                      << 4U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] 
        = ((0xffffefffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U]) 
           | (0xfffff000U & (((((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
                                & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__c_req)) 
                               << 0xcU) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                           << 5U)) 
                             & ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_ok_q)) 
                                << 0xcU))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
        = ((0xfffff07fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U]) 
           | (0xffffff80U & (0x80U | (0xf00U & (((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                      >> 4U)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                                       >> 4U)))
                                                   ? 
                                                  ((IData)(3U) 
                                                   << 
                                                   (3U 
                                                    & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr))
                                                   : 0xfU)) 
                                                << 8U)))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
        = ((0xfffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U]) 
           | (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_wdata 
              << 0xcU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] 
        = ((0xfffff000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U]) 
           | (tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_wdata 
              >> 0x14U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
        = ((0xffffffdfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U]) 
           | (0x3fffffe0U & (((((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
                                & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__c_req)) 
                               << 5U) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d[0U] 
                                         >> 2U)) & 
                             ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_ok_q)) 
                              << 5U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
        = ((0xffffffefU & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U]) 
           | ((2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
              << 4U));
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
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_idx = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__dec_valid_o = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_err = 1U;
    if (((0x80000000U <= ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
                           << 0xfU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
                                       >> 0x11U))) 
         & (0x80010000U > ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
                            << 0xfU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
                                        >> 0x11U))))) {
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_idx = 0U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__dec_valid_o = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_err = 0U;
    }
    if ((((~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__dec_valid_o)) 
          & (0x10000000U <= ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
                              << 0xfU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
                                          >> 0x11U)))) 
         & (0x10001000U > ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
                            << 0xfU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
                                        >> 0x11U))))) {
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_idx = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__dec_valid_o = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_err = 0U;
    }
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_idx = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__dec_valid_o = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_err = 1U;
    if (((0x80000000U <= vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U]) 
         & (0x80010000U > vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U]))) {
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_idx = 0U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__dec_valid_o = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_err = 0U;
    }
    if ((((~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__dec_valid_o)) 
          & (0x10000000U <= vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U])) 
         & (0x10001000U > vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U]))) {
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_idx = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__dec_valid_o = 1U;
        tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_err = 0U;
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel 
        = ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_err)
            ? 2U : (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_idx));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel 
        = ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_err)
            ? 2U : (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_idx));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed 
        = ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)) 
           | (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel) 
               == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q)) 
              & (8U > (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q))));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed 
        = ((0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)) 
           | (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q) 
               == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel)) 
              & (8U > (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][5U] = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
        = (0xffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
                    >> 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][3U] 
        = ((0x1fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][3U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][4U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
            >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][5U] 
        = (0x1fffffU & ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
                                      << 0xdU)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] 
             >> 0xcU) & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel))) 
           & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][3U] 
        = ((0xffffefffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][3U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0) 
                         << 0xcU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U])) 
                                            >> 6U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = ((0x3fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                         << 6U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][3U] 
        = ((0xfffff000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][3U]) | (((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                          >> 0x1aU) | ((IData)((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
                                                >> 0x20U)) 
                                       << 6U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
             >> 5U) & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = ((0xffffffdfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0) 
                         << 5U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
             >> 4U) & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = ((0xffffffefU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0) 
                         << 4U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
        = (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
                 >> 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][0U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][0U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][1U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
            >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][2U] 
        = ((0xfffffff0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][2U]) | ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                          >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
                                       << 2U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
             >> 1U) & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel))) 
           & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][0U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0) 
                         << 1U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
            & (0U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [0U][0U]) | (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][5U] = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
        = (0xffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
                    >> 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][3U] 
        = ((0x1fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][3U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][4U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
            >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][5U] 
        = (0x1fffffU & ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
                                      << 0xdU)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] 
             >> 0xcU) & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel))) 
           & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][3U] 
        = ((0xffffefffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][3U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0) 
                         << 0xcU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U])) 
                                            >> 6U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = ((0x3fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                         << 6U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][3U] 
        = ((0xfffff000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][3U]) | (((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                          >> 0x1aU) | ((IData)((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
                                                >> 0x20U)) 
                                       << 6U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
             >> 5U) & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = ((0xffffffdfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0) 
                         << 5U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
             >> 4U) & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = ((0xffffffefU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0) 
                         << 4U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
        = (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
                 >> 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][0U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][0U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][1U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
            >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][2U] 
        = ((0xfffffff0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][2U]) | ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                          >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
                                       << 2U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
             >> 1U) & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel))) 
           & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][0U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0) 
                         << 1U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
            & (1U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [1U][0U]) | (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][5U] = 0U;
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
            << 0x13U) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[4U] 
                         >> 0xdU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
        = (0xffU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[5U] 
                    >> 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][3U] 
        = ((0x1fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][3U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][4U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[0U] 
            >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         << 0xdU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][5U] 
        = (0x1fffffU & ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[1U] 
                         >> 0x13U) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h05ad10b3__0[2U] 
                                      << 0xdU)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] 
             >> 0xcU) & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel))) 
           & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][3U] 
        = ((0xffffefffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][3U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42ed3a__0) 
                         << 0xcU));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U])) 
                                            >> 6U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = ((0x3fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                         << 6U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][3U] 
        = ((0xfffff000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][3U]) | (((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0) 
                          >> 0x1aU) | ((IData)((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03546e0b__0 
                                                >> 0x20U)) 
                                       << 6U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
             >> 5U) & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = ((0xffffffdfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42efa4__0) 
                         << 5U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
             >> 4U) & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = ((0xffffffefU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][2U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f42f370__0) 
                         << 4U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
            << 0x1eU) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[1U] 
                         >> 2U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
        = (3U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
                 >> 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][0U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][0U]) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][1U] 
        = ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[0U] 
            >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                         << 2U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][2U] 
        = ((0xfffffff0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][2U]) | ((tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[1U] 
                          >> 0x1eU) | (tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h03991d99__0[2U] 
                                       << 2U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0 
        = (((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
             >> 1U) & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel))) 
           & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][0U]) | ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f400399__0) 
                         << 1U));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
            & (2U == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q))) 
           & (0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o[2U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
            [2U][0U]) | (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h3f4005db__0));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][0U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][0U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][0U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][0U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][0U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][0U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [0U][5U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][1U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][1U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][1U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][1U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][1U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][1U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [1U][5U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][2U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][2U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][2U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][2U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][2U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req[1U][2U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o
        [2U][5U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][0U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][0U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][0U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][0U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][0U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[0U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][0U][5U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][0U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][0U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][0U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][0U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][0U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req[1U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][0U][5U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][1U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][1U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][1U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][1U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][1U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[0U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [0U][1U][5U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][1U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][1U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][1U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][3U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][1U][3U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][4U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][1U][4U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req[1U][5U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req
        [1U][1U][5U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req 
        = ((2U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                  [1U][3U] >> 0xbU)) | (1U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                              [0U][3U] 
                                              >> 0xcU)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req 
        = ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
            [1U][0U]) | (1U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                               [0U][0U] >> 1U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req 
        = ((2U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                  [1U][3U] >> 0xbU)) | (1U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                              [0U][3U] 
                                              >> 0xcU)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req 
        = ((2U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
            [1U][0U]) | (1U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                               [0U][0U] >> 1U)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req) 
           & ((IData)(3U) << (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req) 
           & ((IData)(3U) << (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req) 
           & ((IData)(3U) << (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked 
        = ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req) 
           & ((IData)(3U) << (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q)));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_grant 
        = ((0U != (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))
            ? ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked) 
               & ((IData)(1U) + (~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))))
            : ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req) 
               & ((IData)(1U) + (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req)))));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_grant 
        = ((0U != (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))
            ? ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked) 
               & ((IData)(1U) + (~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))))
            : ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req) 
               & ((IData)(1U) + (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req)))));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_grant 
        = ((0U != (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))
            ? ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked) 
               & ((IData)(1U) + (~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__req_masked))))
            : ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req) 
               & ((IData)(1U) + (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req)))));
    tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_grant 
        = ((0U != (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))
            ? ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked) 
               & ((IData)(1U) + (~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__req_masked))))
            : ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req) 
               & ((IData)(1U) + (~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req)))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel = 0U;
    if ((1U & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_grant))) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel = 0U;
    }
    if ((2U & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_grant))) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel = 1U;
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel = 0U;
    if ((1U & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_grant))) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel = 0U;
    }
    if ((2U & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_grant))) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel = 1U;
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[0U] = 0ULL;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[0U] 
        = ((0x7ffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_grant) 
                                       & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                                  >> 0x35U))) 
                                      & (8U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q))))) 
                     << 0x33U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[0U] 
        = ((0xbffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
                                       & (~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel))) 
                                      & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                                 >> 0x34U))))) 
                     << 0x32U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[0U] 
        = ((0xffdffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((1U & ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_grant) 
                                            & (IData)(
                                                      (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                                       >> 0x2aU)))))) 
                     << 0x29U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[0U] 
        = ((0xc07ffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((0x7fU & (IData)(
                                                      (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                                       >> 0x2cU))))) 
                     << 0x2bU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[0U] 
        = ((0xffbffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((IData)((0x80000000000ULL 
                                              == (0x8080000000000ULL 
                                                  & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o))))) 
                     << 0x2aU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[0U] 
        = ((0xffe0000000001ULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [0U]) | (0x1fffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[0U] 
        = ((0xffffffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [0U]) | (IData)((IData)((1ULL == (0x20000000001ULL 
                                              & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o)))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[1U] = 0ULL;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[1U] 
        = ((0x7ffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)(((((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_grant) 
                                        >> 1U) & (IData)(
                                                         (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                                          >> 0x35U))) 
                                      & (8U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q))))) 
                     << 0x33U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[1U] 
        = ((0xbffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)((((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
                                       & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel)) 
                                      & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                                 >> 0x34U))))) 
                     << 0x32U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[1U] 
        = ((0xffdffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)((IData)((((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_grant) 
                                               >> 1U) 
                                              & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                                 >> 0x2aU))))) 
                     << 0x29U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[1U] 
        = ((0xc07ffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)((0x7fU & (IData)(
                                                      (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                                       >> 0x2cU))))) 
                     << 0x2bU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[1U] 
        = ((0xffbffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)((IData)((0x8080000000000ULL 
                                              == (0x8080000000000ULL 
                                                  & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o))))) 
                     << 0x2aU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[1U] 
        = ((0xffe0000000001ULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [1U]) | (0x1fffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp[1U] 
        = ((0xffffffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
            [1U]) | (IData)((IData)((0x20000000001ULL 
                                     == (0x20000000001ULL 
                                         & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o)))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel = 0U;
    if ((1U & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_grant))) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel = 0U;
    }
    if ((2U & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_grant))) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel = 1U;
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel = 0U;
    if ((1U & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_grant))) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel = 0U;
    }
    if ((2U & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_grant))) {
        vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel = 1U;
    }
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[0U] = 0ULL;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[0U] 
        = ((0x7ffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_grant) 
                                       & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                                  >> 0x35U))) 
                                      & (8U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q))))) 
                     << 0x33U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[0U] 
        = ((0xbffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
                                       & (~ (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel))) 
                                      & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                                 >> 0x34U))))) 
                     << 0x32U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[0U] 
        = ((0xffdffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((1U & ((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_grant) 
                                            & (IData)(
                                                      (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                                       >> 0x2aU)))))) 
                     << 0x29U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[0U] 
        = ((0xc07ffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((0x7fU & (IData)(
                                                      (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                                       >> 0x2cU))))) 
                     << 0x2bU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[0U] 
        = ((0xffbffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [0U]) | ((QData)((IData)((IData)((0x80000000000ULL 
                                              == (0x8080000000000ULL 
                                                  & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o))))) 
                     << 0x2aU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[0U] 
        = ((0xffe0000000001ULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [0U]) | (0x1fffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[0U] 
        = ((0xffffffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [0U]) | (IData)((IData)((1ULL == (0x20000000001ULL 
                                              & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o)))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[1U] = 0ULL;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[1U] 
        = ((0x7ffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)(((((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_grant) 
                                        >> 1U) & (IData)(
                                                         (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                                          >> 0x35U))) 
                                      & (8U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q))))) 
                     << 0x33U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[1U] 
        = ((0xbffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)((((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
                                       & (IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel)) 
                                      & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                                 >> 0x34U))))) 
                     << 0x32U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[1U] 
        = ((0xffdffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)((IData)((((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_grant) 
                                               >> 1U) 
                                              & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                                 >> 0x2aU))))) 
                     << 0x29U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[1U] 
        = ((0xc07ffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)((0x7fU & (IData)(
                                                      (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                                       >> 0x2cU))))) 
                     << 0x2bU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[1U] 
        = ((0xffbffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [1U]) | ((QData)((IData)((IData)((0x8080000000000ULL 
                                              == (0x8080000000000ULL 
                                                  & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o))))) 
                     << 0x2aU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[1U] 
        = ((0xffe0000000001ULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [1U]) | (0x1fffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp[1U] 
        = ((0xffffffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
            [1U]) | (IData)((IData)((0x20000000001ULL 
                                     == (0x20000000001ULL 
                                         & vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o)))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[5U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[3U] 
        = ((0x1fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[3U]) 
           | ((0xffffc000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                              [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel][3U] 
                              << 1U)) | (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req)) 
                                          & (8U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q))) 
                                         << 0xdU)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[4U] 
        = ((((0x1ffeU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                         [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel][4U] 
                         << 1U)) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                    [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel][3U] 
                                    >> 0x1fU)) | ((
                                                   (0U 
                                                    != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req)) 
                                                   & (8U 
                                                      != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q))) 
                                                  >> 0x13U)) 
           | ((0x2000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                          [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel][4U] 
                          << 1U)) | (0xffffc000U & 
                                     (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                      [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel][4U] 
                                      << 1U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[5U] 
        = ((0x400000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[5U]) 
           | (0x7fffffU & (((0x1ffeU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                        [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel][5U] 
                                        << 1U)) | (
                                                   vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                                   [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel][4U] 
                                                   >> 0x1fU)) 
                           | ((0x2000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                          [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel][5U] 
                                          << 1U)) | 
                              (0x3fc000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                            [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel][5U] 
                                            << 1U))))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[5U] 
        = ((0x3fffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[5U]) 
           | (0x7fffffU & ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel) 
                           << 0x16U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U] 
        = ((0x7fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U]) 
           | ((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                                           [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel][3U])) 
                                           << 0x1aU) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                                             [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel][2U])) 
                                             >> 6U)))) 
              << 7U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[3U] 
        = ((0xffffe000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[3U]) 
           | (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                                            [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel][3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                                              [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel][2U])) 
                                              >> 6U)))) 
               >> 0x19U) | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                                          [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel][3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                                            [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel][2U])) 
                                            >> 6U))) 
                                     >> 0x20U)) << 7U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U] 
        = ((0xffffffbfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U]) 
           | (0xffffffc0U & (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
                              << 6U) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                                        [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__w_sel][2U] 
                                        << 1U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[0U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[0U]) 
           | (0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
              [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel][0U]));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[1U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
            [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel][1U]) 
           | (0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
              [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel][1U]));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U] 
        = ((0xffffffe0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U]) 
           | ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
               [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel][2U]) 
              | (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel) 
                  << 4U) | (0xcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                            [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel][2U]))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U] 
        = ((0xffffffdfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U]) 
           | (0x20U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                       [(1U & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                       >> 0x33U)))][2U] 
                       << 1U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[0U] 
        = ((0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[0U]) 
           | (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req)) 
               << 1U) | (1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req
                         [(1U & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                                         >> 0x29U)))][0U])));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp[0U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
        [0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp[1U][0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp
        [1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[0U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[1U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[3U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[4U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[5U] = 0U;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[3U] 
        = ((0x1fffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[3U]) 
           | ((0xffffc000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                              [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel][3U] 
                              << 1U)) | (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req)) 
                                          & (8U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q))) 
                                         << 0xdU)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[4U] 
        = ((((0x1ffeU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                         [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel][4U] 
                         << 1U)) | (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                    [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel][3U] 
                                    >> 0x1fU)) | ((
                                                   (0U 
                                                    != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req)) 
                                                   & (8U 
                                                      != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q))) 
                                                  >> 0x13U)) 
           | ((0x2000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                          [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel][4U] 
                          << 1U)) | (0xffffc000U & 
                                     (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                      [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel][4U] 
                                      << 1U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[5U] 
        = ((0x400000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[5U]) 
           | (0x7fffffU & (((0x1ffeU & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                        [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel][5U] 
                                        << 1U)) | (
                                                   vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                                   [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel][4U] 
                                                   >> 0x1fU)) 
                           | ((0x2000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                          [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel][5U] 
                                          << 1U)) | 
                              (0x3fc000U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                            [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel][5U] 
                                            << 1U))))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[5U] 
        = ((0x3fffffU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[5U]) 
           | (0x7fffffU & ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel) 
                           << 0x16U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U] 
        = ((0x7fU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U]) 
           | ((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                                           [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel][3U])) 
                                           << 0x1aU) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                                             [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel][2U])) 
                                             >> 6U)))) 
              << 7U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[3U] 
        = ((0xffffe000U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[3U]) 
           | (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                                            [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel][3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                                              [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel][2U])) 
                                              >> 6U)))) 
               >> 0x19U) | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                                          [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel][3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                                            [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel][2U])) 
                                            >> 6U))) 
                                     >> 0x20U)) << 7U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U] 
        = ((0xffffffbfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U]) 
           | (0xffffffc0U & (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
                              << 6U) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                                        [tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__w_sel][2U] 
                                        << 1U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[0U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[0U]) 
           | (0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
              [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel][0U]));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[1U] 
        = ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
            [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel][1U]) 
           | (0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
              [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel][1U]));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U] 
        = ((0xffffffe0U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U]) 
           | ((3U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
               [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel][2U]) 
              | (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel) 
                  << 4U) | (0xcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                            [vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel][2U]))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U] 
        = ((0xffffffdfU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U]) 
           | (0x20U & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                       [(1U & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                       >> 0x33U)))][2U] 
                       << 1U)));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[0U] 
        = ((0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[0U]) 
           | (((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req)) 
               << 1U) | (1U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req
                         [(1U & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                                         >> 0x29U)))][0U])));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp[0U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
        [0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp[1U][1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp
        [1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop 
        = ((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
           & (IData)(((0x140U == (0x140U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[2U])) 
                      & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                         >> 0x34U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_hs 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o[3U] 
            >> 0xdU) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o 
                        >> 0x35U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop 
        = ((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
           & (IData)(((0x140U == (0x140U & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[2U])) 
                      & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                         >> 0x34U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_hs 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o[3U] 
            >> 0xdU) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o 
                        >> 0x35U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i[0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp
        [0U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i[1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp
        [0U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i[2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp
        [0U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i[0U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp
        [1U][0U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i[1U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp
        [1U][1U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i[2U] 
        = vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp
        [1U][2U];
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push 
        = ((8U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_hs));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push 
        = ((8U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q)) 
           & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_hs));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o = 0ULL;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
        = ((0x7ffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed) 
                               & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i
                                          [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel))
                                             ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel)
                                             : 0U)] 
                                          >> 0x33U))))) 
              << 0x33U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
        = ((0xbffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)(((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)) 
                               & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i
                                          [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))
                                             ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q)
                                             : 0U)] 
                                          >> 0x32U))))) 
              << 0x32U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
        = ((0xc07ffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)((0x7fU & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i
                                                [((2U 
                                                   >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))
                                                   ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q)
                                                   : 0U)] 
                                                >> 0x2bU))))) 
              << 0x2bU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
        = ((0xffbffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)(((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q)) 
                               & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i
                                          [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q))
                                             ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q)
                                             : 0U)] 
                                          >> 0x2aU))))) 
              << 0x2aU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
        = ((0xffdffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed) 
                               & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i
                                          [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel))
                                             ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel)
                                             : 0U)] 
                                          >> 0x29U))))) 
              << 0x29U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
        = ((0xffe0000000001ULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o) 
           | (0x1fffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i
              [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q))
                 ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q)
                 : 0U)]));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
        = ((0xffffffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o) 
           | (IData)((IData)(((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q)) 
                              & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i
                                        [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q))
                                           ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q)
                                           : 0U)])))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o = 0ULL;
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
        = ((0x7ffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)(((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_allowed) 
                               & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i
                                          [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel))
                                             ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel)
                                             : 0U)] 
                                          >> 0x33U))))) 
              << 0x33U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
        = ((0xbffffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)(((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)) 
                               & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i
                                          [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))
                                             ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q)
                                             : 0U)] 
                                          >> 0x32U))))) 
              << 0x32U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
        = ((0xc07ffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)((0x7fU & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i
                                                [((2U 
                                                   >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))
                                                   ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q)
                                                   : 0U)] 
                                                >> 0x2bU))))) 
              << 0x2bU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
        = ((0xffbffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)(((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q)) 
                               & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i
                                          [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q))
                                             ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q)
                                             : 0U)] 
                                          >> 0x2aU))))) 
              << 0x2aU));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
        = ((0xffdffffffffffULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o) 
           | ((QData)((IData)(((IData)(tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_allowed) 
                               & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i
                                          [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel))
                                             ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel)
                                             : 0U)] 
                                          >> 0x29U))))) 
              << 0x29U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
        = ((0xffe0000000001ULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o) 
           | (0x1fffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i
              [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q))
                 ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q)
                 : 0U)]));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
        = ((0xffffffffffffeULL & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o) 
           | (IData)((IData)(((0U != (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q)) 
                              & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i
                                        [((2U >= (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q))
                                           ? (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q)
                                           : 0U)])))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_hs 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[3U] 
            >> 0xcU) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
                        >> 0x33U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_hs 
        = (1U & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o[0U] 
                  >> 1U) & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o 
                                    >> 0x29U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__f_rvalid 
        = (((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q) 
            & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o)) 
           & ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q)) 
              & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__addr_q 
                 == (0xfffffffcU & vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__ld_byte 
        = (0xffU & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
                            >> ((IData)(5U) + (0x1fU 
                                               & VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr), 3U))))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__ld_half 
        = (0xffffU & ((2U & tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__eaddr)
                       ? (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
                                  >> 0x15U)) : (IData)(
                                                       (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
                                                        >> 5U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_hs 
        = (1U & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[0U] 
                  >> 1U) & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
                                    >> 0x29U))));
    vlSelfRef.tb_soc_sv__DOT__rvalid = ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q) 
                                        & ((~ (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__is_mem)) 
                                           | (((1U 
                                                == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
                                               & (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o)) 
                                              | ((2U 
                                                  == (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q)) 
                                                 & (IData)(
                                                           (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
                                                            >> 0x2aU))))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs 
        = ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[3U] 
            >> 0xcU) & (vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
                        >> 0x33U));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_hs 
        = (1U & ((vlSelfRef.tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o[2U] 
                  >> 5U) & (IData)((vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o 
                                    >> 0x32U))));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_done 
        = ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_ok_q) 
           | (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs));
    vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_done 
        = ((IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_ok_q) 
           | (IData)(vlSelfRef.tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_hs));
}
