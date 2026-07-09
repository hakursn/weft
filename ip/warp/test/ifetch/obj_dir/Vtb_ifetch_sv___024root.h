// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ifetch_sv.h for the primary calling header

#ifndef VERILATED_VTB_IFETCH_SV___024ROOT_H_
#define VERILATED_VTB_IFETCH_SV___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ifetch_sv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ifetch_sv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ifetch_sv__DOT__clk;
    CData/*0:0*/ tb_ifetch_sv__DOT__rst_n;
    CData/*0:0*/ tb_ifetch_sv__DOT__f_req;
    CData/*0:0*/ tb_ifetch_sv__DOT__f_rvalid;
    CData/*1:0*/ tb_ifetch_sv__DOT__st;
    CData/*3:0*/ tb_ifetch_sv__DOT__rid;
    CData/*1:0*/ tb_ifetch_sv__DOT__dly;
    CData/*0:0*/ tb_ifetch_sv__DOT__dut__DOT__state_q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ifetch_sv__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ifetch_sv__DOT__errors;
    IData/*31:0*/ tb_ifetch_sv__DOT__f_pc;
    IData/*31:0*/ tb_ifetch_sv__DOT__raddr;
    IData/*31:0*/ tb_ifetch_sv__DOT__dut__DOT__addr_q;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__0__Vfuncout;
    IData/*31:0*/ __Vfunc_tb_ifetch_sv__DOT__imem__0__addr;
    IData/*31:0*/ __VactIterCount;
    VlWide<6>/*180:0*/ tb_ifetch_sv__DOT__rq;
    QData/*51:0*/ tb_ifetch_sv__DOT__rs;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h434713d7__0;
    VlTriggerScheduler __VtrigSched_h43471396__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ifetch_sv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ifetch_sv___024root(Vtb_ifetch_sv__Syms* symsp, const char* v__name);
    ~Vtb_ifetch_sv___024root();
    VL_UNCOPYABLE(Vtb_ifetch_sv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
