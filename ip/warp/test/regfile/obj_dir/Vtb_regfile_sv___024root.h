// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_regfile_sv.h for the primary calling header

#ifndef VERILATED_VTB_REGFILE_SV___024ROOT_H_
#define VERILATED_VTB_REGFILE_SV___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_regfile_sv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_regfile_sv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_regfile_sv__DOT__clk;
    CData/*0:0*/ tb_regfile_sv__DOT__we;
    CData/*4:0*/ tb_regfile_sv__DOT__wa;
    CData/*4:0*/ tb_regfile_sv__DOT__ra1;
    CData/*4:0*/ tb_regfile_sv__DOT__ra2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfile_sv__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_regfile_sv__DOT__wd;
    IData/*31:0*/ tb_regfile_sv__DOT__rd1;
    IData/*31:0*/ tb_regfile_sv__DOT__rd2;
    IData/*31:0*/ tb_regfile_sv__DOT__errors;
    IData/*31:0*/ tb_regfile_sv__DOT__dut__DOT____Vlvbound_h6a58ae27__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 31> tb_regfile_sv__DOT__dut__DOT__regs;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbefaadd0__0;
    VlTriggerScheduler __VtrigSched_hbefaa70d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_regfile_sv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_regfile_sv___024root(Vtb_regfile_sv__Syms* symsp, const char* v__name);
    ~Vtb_regfile_sv___024root();
    VL_UNCOPYABLE(Vtb_regfile_sv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
