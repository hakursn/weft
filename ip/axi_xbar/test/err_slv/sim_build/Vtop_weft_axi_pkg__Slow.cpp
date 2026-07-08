// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_weft_axi_pkg.h"

// Parameter definitions for Vtop_weft_axi_pkg
constexpr CData/*1:0*/ Vtop_weft_axi_pkg::BURST_FIXED;
constexpr CData/*1:0*/ Vtop_weft_axi_pkg::BURST_INCR;
constexpr CData/*1:0*/ Vtop_weft_axi_pkg::BURST_WRAP;
constexpr CData/*1:0*/ Vtop_weft_axi_pkg::RESP_OKAY;
constexpr CData/*1:0*/ Vtop_weft_axi_pkg::RESP_EXOKAY;
constexpr CData/*1:0*/ Vtop_weft_axi_pkg::RESP_SLVERR;
constexpr CData/*1:0*/ Vtop_weft_axi_pkg::RESP_DECERR;


void Vtop_weft_axi_pkg___ctor_var_reset(Vtop_weft_axi_pkg* vlSelf);

Vtop_weft_axi_pkg::Vtop_weft_axi_pkg(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_weft_axi_pkg___ctor_var_reset(this);
}

void Vtop_weft_axi_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_weft_axi_pkg::~Vtop_weft_axi_pkg() {
}
