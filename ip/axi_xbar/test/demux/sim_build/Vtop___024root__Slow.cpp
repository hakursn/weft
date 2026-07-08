// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__IW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_awdec__DOT__NoIndices;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_awdec__DOT__NoRules;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_awdec__DOT__IdxW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_ardec__DOT__NoIndices;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_ardec__DOT__NoRules;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_ardec__DOT__IdxW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_demux__DOT__NoMstPorts;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_demux__DOT__MaxTxns;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_demux__DOT__SelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_demux_flat__DOT__i_demux__DOT__CntW;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
