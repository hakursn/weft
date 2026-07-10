// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_uart_sv.h for the primary calling header

#ifndef VERILATED_VTB_UART_SV___024ROOT_H_
#define VERILATED_VTB_UART_SV___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_uart_sv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_uart_sv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_uart_sv__DOT__clk;
    CData/*0:0*/ tb_uart_sv__DOT__rst_n;
    CData/*0:0*/ tb_uart_sv__DOT__tx;
    CData/*7:0*/ tb_uart_sv__DOT__got;
    CData/*1:0*/ tb_uart_sv__DOT__dut__DOT__w_q;
    CData/*4:0*/ tb_uart_sv__DOT__dut__DOT__wid_q;
    CData/*0:0*/ tb_uart_sv__DOT__dut__DOT__r_q;
    CData/*4:0*/ tb_uart_sv__DOT__dut__DOT__rid_q;
    CData/*3:0*/ tb_uart_sv__DOT__dut__DOT__tx_bits;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_uart_sv__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_uart_sv__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_uart_sv__DOT__tx__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ tb_uart_sv__DOT__dut__DOT__waddr_q;
    SData/*11:0*/ tb_uart_sv__DOT__dut__DOT__raddr_q;
    SData/*9:0*/ tb_uart_sv__DOT__dut__DOT__tx_sh;
    SData/*15:0*/ tb_uart_sv__DOT__dut__DOT__tx_div;
    IData/*31:0*/ tb_uart_sv__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlWide<6>/*182:0*/ tb_uart_sv__DOT__req;
    QData/*53:0*/ tb_uart_sv__DOT__rsp;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0244f1ae__0;
    VlTriggerScheduler __VtrigSched_h0244f26f__0;
    VlTriggerScheduler __VtrigSched_hebbc858a__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_uart_sv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_uart_sv___024root(Vtb_uart_sv__Syms* symsp, const char* v__name);
    ~Vtb_uart_sv___024root();
    VL_UNCOPYABLE(Vtb_uart_sv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
