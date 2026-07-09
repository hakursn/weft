// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_decoder_sv.h for the primary calling header

#include "Vtb_decoder_sv__pch.h"
#include "Vtb_decoder_sv__Syms.h"
#include "Vtb_decoder_sv___024root.h"

void Vtb_decoder_sv___024root___ctor_var_reset(Vtb_decoder_sv___024root* vlSelf);

Vtb_decoder_sv___024root::Vtb_decoder_sv___024root(Vtb_decoder_sv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_decoder_sv___024root___ctor_var_reset(this);
}

void Vtb_decoder_sv___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_decoder_sv___024root::~Vtb_decoder_sv___024root() {
}
