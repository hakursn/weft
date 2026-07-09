// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cosim_sv.h for the primary calling header

#ifndef VERILATED_VTB_COSIM_SV___024ROOT_H_
#define VERILATED_VTB_COSIM_SV___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cosim_sv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cosim_sv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cosim_sv__DOT__clk;
    CData/*0:0*/ tb_cosim_sv__DOT__rst_n;
    CData/*0:0*/ tb_cosim_sv__DOT__rv;
    CData/*0:0*/ tb_cosim_sv__DOT__ist;
    CData/*3:0*/ tb_cosim_sv__DOT__iid;
    CData/*1:0*/ tb_cosim_sv__DOT__dst;
    CData/*3:0*/ tb_cosim_sv__DOT__did;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__f_rvalid;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__c_req;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__is_mem;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT____VdfgRegularize_h96dfe7f7_0_0;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_if__DOT__state_q;
    CData/*1:0*/ tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__state_q;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_ok_q;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_ok_q;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_hs;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_hs;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__aw_done;
    CData/*0:0*/ tb_cosim_sv__DOT__dut__DOT__u_ls__DOT__w_done;
    CData/*0:0*/ __Vdly__tb_cosim_sv__DOT__dut__DOT__u_core__DOT__st_q;
    CData/*7:0*/ __VdlyVal__tb_cosim_sv__DOT__mem__v0;
    CData/*0:0*/ __VdlySet__tb_cosim_sv__DOT__mem__v0;
    CData/*7:0*/ __VdlyVal__tb_cosim_sv__DOT__mem__v1;
    CData/*0:0*/ __VdlySet__tb_cosim_sv__DOT__mem__v1;
    CData/*7:0*/ __VdlyVal__tb_cosim_sv__DOT__mem__v2;
    CData/*0:0*/ __VdlySet__tb_cosim_sv__DOT__mem__v2;
    CData/*7:0*/ __VdlyVal__tb_cosim_sv__DOT__mem__v3;
    CData/*0:0*/ __VdlySet__tb_cosim_sv__DOT__mem__v3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cosim_sv__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cosim_sv__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_cosim_sv__DOT__ftr;
    IData/*31:0*/ tb_cosim_sv__DOT__fmem;
    IData/*31:0*/ tb_cosim_sv__DOT__retired;
    IData/*31:0*/ tb_cosim_sv__DOT__iaddr;
    IData/*31:0*/ tb_cosim_sv__DOT__daddr;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__pc_q;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__instr_q;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__rf_wd;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__alu_res;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__eaddr;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__npc;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT____Vlvbound_h6a58ae27__0;
    IData/*31:0*/ tb_cosim_sv__DOT__dut__DOT__u_if__DOT__addr_q;
    IData/*31:0*/ __VactIterCount;
    VlWide<6>/*180:0*/ tb_cosim_sv__DOT__ireq;
    VlWide<6>/*180:0*/ tb_cosim_sv__DOT__dreq;
    QData/*51:0*/ tb_cosim_sv__DOT__irsp;
    QData/*51:0*/ tb_cosim_sv__DOT__drsp;
    VlWide<3>/*68:0*/ tb_cosim_sv__DOT__dut__DOT__u_core__DOT__d;
    VlUnpacked<IData/*31:0*/, 256> tb_cosim_sv__DOT__prog;
    VlUnpacked<IData/*31:0*/, 31> tb_cosim_sv__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs;
    VlAssocArray<QData/*63:0*/, IData/*31:0*/> tb_cosim_sv__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he91541b6__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_cosim_sv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_cosim_sv___024root(Vtb_cosim_sv__Syms* symsp, const char* v__name);
    ~Vtb_cosim_sv___024root();
    VL_UNCOPYABLE(Vtb_cosim_sv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
