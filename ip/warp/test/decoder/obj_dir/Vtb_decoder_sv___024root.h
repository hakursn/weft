// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_decoder_sv.h for the primary calling header

#ifndef VERILATED_VTB_DECODER_SV___024ROOT_H_
#define VERILATED_VTB_DECODER_SV___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_decoder_sv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_decoder_sv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_decoder_sv__DOT__ins;
    IData/*31:0*/ tb_decoder_sv__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*68:0*/ tb_decoder_sv__DOT__d;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_decoder_sv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_decoder_sv___024root(Vtb_decoder_sv__Syms* symsp, const char* v__name);
    ~Vtb_decoder_sv___024root();
    VL_UNCOPYABLE(Vtb_decoder_sv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
