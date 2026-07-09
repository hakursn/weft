// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_lsu_sv.h for the primary calling header

#ifndef VERILATED_VTB_LSU_SV___024ROOT_H_
#define VERILATED_VTB_LSU_SV___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_lsu_sv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_lsu_sv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_lsu_sv__DOT__clk;
    CData/*0:0*/ tb_lsu_sv__DOT__rst_n;
    CData/*0:0*/ tb_lsu_sv__DOT__d_req;
    CData/*0:0*/ tb_lsu_sv__DOT__d_we;
    CData/*3:0*/ tb_lsu_sv__DOT__d_wstrb;
    CData/*2:0*/ tb_lsu_sv__DOT__ws;
    CData/*2:0*/ tb_lsu_sv__DOT__r_s;
    CData/*3:0*/ tb_lsu_sv__DOT__wid;
    CData/*3:0*/ tb_lsu_sv__DOT__rid2;
    CData/*1:0*/ tb_lsu_sv__DOT__rdly;
    CData/*1:0*/ tb_lsu_sv__DOT__dut__DOT__state_q;
    CData/*0:0*/ tb_lsu_sv__DOT__dut__DOT__aw_ok_q;
    CData/*0:0*/ tb_lsu_sv__DOT__dut__DOT__w_ok_q;
    CData/*0:0*/ tb_lsu_sv__DOT__dut__DOT__aw_hs;
    CData/*0:0*/ tb_lsu_sv__DOT__dut__DOT__w_hs;
    CData/*0:0*/ tb_lsu_sv__DOT__dut__DOT__aw_done;
    CData/*0:0*/ tb_lsu_sv__DOT__dut__DOT__w_done;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_lsu_sv__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_lsu_sv__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_lsu_sv__DOT__errors;
    IData/*31:0*/ tb_lsu_sv__DOT__d_addr;
    IData/*31:0*/ tb_lsu_sv__DOT__d_wdata;
    IData/*31:0*/ tb_lsu_sv__DOT__wa;
    IData/*31:0*/ tb_lsu_sv__DOT__ra;
    IData/*31:0*/ __VactIterCount;
    VlWide<6>/*180:0*/ tb_lsu_sv__DOT__rq;
    QData/*51:0*/ tb_lsu_sv__DOT__rs;
    VlUnpacked<IData/*31:0*/, 256> tb_lsu_sv__DOT__mem;
    VlUnpacked<IData/*31:0*/, 256> tb_lsu_sv__DOT__shadow;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h94f8816d__0;
    VlTriggerScheduler __VtrigSched_h94f88130__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_lsu_sv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_lsu_sv___024root(Vtb_lsu_sv__Syms* symsp, const char* v__name);
    ~Vtb_lsu_sv___024root();
    VL_UNCOPYABLE(Vtb_lsu_sv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
