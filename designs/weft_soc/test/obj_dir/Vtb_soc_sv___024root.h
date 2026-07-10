// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_soc_sv.h for the primary calling header

#ifndef VERILATED_VTB_SOC_SV___024ROOT_H_
#define VERILATED_VTB_SOC_SV___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_soc_sv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_soc_sv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_soc_sv__DOT__clk;
        CData/*0:0*/ tb_soc_sv__DOT__arst_n;
        CData/*0:0*/ tb_soc_sv__DOT__tx;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__rst_n2;
        CData/*0:0*/ tb_soc_sv__DOT__rvalid;
        CData/*7:0*/ tb_soc_sv__DOT__unnamedblk2__DOT__c;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__rst_n1;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__f_rvalid;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__c_req;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q;
        CData/*7:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__ld_byte;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__is_mem;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__state_q;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__state_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_ok_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_ok_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_hs;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__aw_done;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_ls__DOT__w_done;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__aw_sel;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__ar_sel;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__aw_sel;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__ar_sel;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_port_q;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_port_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__w_cnt_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__r_cnt_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_allowed;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_allowed;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__aw_hs;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__ar_hs;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__w_id_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_id_q;
        CData/*7:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_len_q;
        CData/*7:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__r_cnt_q;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_port_q;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_port_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__w_cnt_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__r_cnt_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__aw_hs;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__ar_hs;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__w_id_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_id_q;
        CData/*7:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_len_q;
        CData/*7:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__r_cnt_q;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_req;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_req;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_sel;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__ar_sel;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__aw_hs;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q;
        CData/*2:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q;
        CData/*2:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_req;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_req;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_sel;
    };
    struct {
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__ar_sel;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__aw_hs;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__g_rr__DOT__ptr_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__g_rr__DOT__ptr_q;
        CData/*2:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__rd_ptr_q;
        CData/*2:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__usage_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_push;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__do_pop;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_bram__DOT__w_q;
        CData/*4:0*/ tb_soc_sv__DOT__dut__DOT__u_bram__DOT__wid_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_bram__DOT__r_q;
        CData/*4:0*/ tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rid_q;
        CData/*7:0*/ tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rlen_q;
        CData/*7:0*/ tb_soc_sv__DOT__dut__DOT__u_bram__DOT__rcnt_q;
        CData/*1:0*/ tb_soc_sv__DOT__dut__DOT__u_uart__DOT__w_q;
        CData/*4:0*/ tb_soc_sv__DOT__dut__DOT__u_uart__DOT__wid_q;
        CData/*0:0*/ tb_soc_sv__DOT__dut__DOT__u_uart__DOT__r_q;
        CData/*4:0*/ tb_soc_sv__DOT__dut__DOT__u_uart__DOT__rid_q;
        CData/*3:0*/ tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_bits;
        CData/*0:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__st_q;
        CData/*2:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
        CData/*2:0*/ __Vdly__tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__wr_ptr_q;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_soc_sv__DOT__arst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_soc_sv__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_soc_sv__DOT__dut__DOT__rst_n2__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_soc_sv__DOT__tx__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__ld_half;
        SData/*13:0*/ tb_soc_sv__DOT__dut__DOT__u_bram__DOT__waddr_q;
        SData/*13:0*/ tb_soc_sv__DOT__dut__DOT__u_bram__DOT__raddr_q;
        SData/*11:0*/ tb_soc_sv__DOT__dut__DOT__u_uart__DOT__waddr_q;
        SData/*11:0*/ tb_soc_sv__DOT__dut__DOT__u_uart__DOT__raddr_q;
        SData/*9:0*/ tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_sh;
        SData/*15:0*/ tb_soc_sv__DOT__dut__DOT__u_uart__DOT__tx_div;
        IData/*31:0*/ tb_soc_sv__DOT__errors;
        IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__pc_q;
        IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__instr_q;
        IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__alu_res;
        IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__npc;
        IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_rf__DOT____Vlvbound_h6a58ae27__0;
        IData/*31:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_if__DOT__addr_q;
        IData/*31:0*/ __VactIterCount;
        VlWide<6>/*180:0*/ tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__d_req_o;
        VlWide<6>/*180:0*/ tb_soc_sv__DOT__dut__DOT____Vcellout__u_cpu__i_req_o;
        QData/*53:0*/ tb_soc_sv__DOT__dut__DOT____Vcellout__u_bram__slv_rsp_o;
        QData/*53:0*/ tb_soc_sv__DOT__dut__DOT____Vcellout__u_uart__slv_rsp_o;
        VlWide<3>/*68:0*/ tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__d;
        QData/*51:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__slv_rsp_o;
        QData/*51:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__slv_rsp_o;
        VlWide<6>/*182:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__0__KET____DOT__i_mux__mst_req_o;
        VlWide<6>/*182:0*/ tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_mst__BRA__1__KET____DOT__i_mux__mst_req_o;
        VlUnpacked<IData/*31:0*/, 31> tb_soc_sv__DOT__dut__DOT__u_cpu__DOT__u_core__DOT__u_rf__DOT__regs;
        VlUnpacked<VlUnpacked<VlWide<6>/*180:0*/, 3>, 2> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_req;
        VlUnpacked<VlUnpacked<QData/*51:0*/, 3>, 2> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__demux_rsp;
        VlUnpacked<QData/*51:0*/, 3> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__0__KET____DOT__i_demux__mst_rsps_i;
        VlUnpacked<VlWide<6>/*180:0*/, 3> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__0__KET____DOT__i_demux__mst_reqs_o;
        VlUnpacked<QData/*51:0*/, 3> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellinp__g_slv__BRA__1__KET____DOT__i_demux__mst_rsps_i;
        VlUnpacked<VlWide<6>/*180:0*/, 3> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT____Vcellout__g_slv__BRA__1__KET____DOT__i_demux__mst_reqs_o;
        VlUnpacked<VlWide<6>/*180:0*/, 2> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_req;
        VlUnpacked<QData/*51:0*/, 2> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__mux_rsp;
        VlUnpacked<VlWide<6>/*180:0*/, 2> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_req;
        VlUnpacked<QData/*51:0*/, 2> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__mux_rsp;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 8> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__mem;
        VlUnpacked<CData/*0:0*/, 8> tb_soc_sv__DOT__dut__DOT__u_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__mem;
        VlUnpacked<IData/*31:0*/, 16384> tb_soc_sv__DOT__dut__DOT__u_bram__DOT__mem;
    };
    std::string tb_soc_sv__DOT__got;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha2365267__0;
    VlTriggerScheduler __VtrigSched_h8483aad8__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_soc_sv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_soc_sv___024root(Vtb_soc_sv__Syms* symsp, const char* v__name);
    ~Vtb_soc_sv___024root();
    VL_UNCOPYABLE(Vtb_soc_sv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
