// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_sv.h for the primary calling header

#include "Vtb_uart_sv__pch.h"
#include "Vtb_uart_sv__Syms.h"
#include "Vtb_uart_sv___024root.h"

void Vtb_uart_sv___024root___ctor_var_reset(Vtb_uart_sv___024root* vlSelf);

Vtb_uart_sv___024root::Vtb_uart_sv___024root(Vtb_uart_sv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_uart_sv___024root___ctor_var_reset(this);
}

void Vtb_uart_sv___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_uart_sv___024root::~Vtb_uart_sv___024root() {
}
