// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_WEFT_AXI_PKG_H_
#define VERILATED_VTOP_WEFT_AXI_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_weft_axi_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*1:0*/ BURST_FIXED = 0U;
    static constexpr CData/*1:0*/ BURST_INCR = 1U;
    static constexpr CData/*1:0*/ BURST_WRAP = 2U;
    static constexpr CData/*1:0*/ RESP_OKAY = 0U;
    static constexpr CData/*1:0*/ RESP_EXOKAY = 1U;
    static constexpr CData/*1:0*/ RESP_SLVERR = 2U;
    static constexpr CData/*1:0*/ RESP_DECERR = 3U;

    // CONSTRUCTORS
    Vtop_weft_axi_pkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_weft_axi_pkg();
    VL_UNCOPYABLE(Vtop_weft_axi_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
