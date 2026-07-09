// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_exec_sv.h for the primary calling header

#ifndef VERILATED_VTB_EXEC_SV___024ROOT_H_
#define VERILATED_VTB_EXEC_SV___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_exec_sv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_exec_sv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_exec_sv__DOT__aop;
    CData/*2:0*/ tb_exec_sv__DOT__bop;
    CData/*0:0*/ tb_exec_sv__DOT__bt;
    CData/*0:0*/ tb_exec_sv__DOT__bexp;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_exec_sv__DOT__errors;
    IData/*31:0*/ tb_exec_sv__DOT__aa;
    IData/*31:0*/ tb_exec_sv__DOT__ab;
    IData/*31:0*/ tb_exec_sv__DOT__ares;
    IData/*31:0*/ tb_exec_sv__DOT__aexp;
    IData/*31:0*/ tb_exec_sv__DOT__ba;
    IData/*31:0*/ tb_exec_sv__DOT__bb;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlWide<4>/*99:0*/, 400> tb_exec_sv__DOT__av;
    VlUnpacked<VlWide<3>/*71:0*/, 200> tb_exec_sv__DOT__bv;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_exec_sv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_exec_sv___024root(Vtb_exec_sv__Syms* symsp, const char* v__name);
    ~Vtb_exec_sv___024root();
    VL_UNCOPYABLE(Vtb_exec_sv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
