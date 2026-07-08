// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_weft_axi_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_weft_axi_pkg              TOP__weft_axi_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_weft_axi_mux_flat;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux__i_ar_arb;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux__i_ar_arb__g_rr;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux__i_ar_arb__g_rr__unnamedblk1;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux__i_aw_arb;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux__i_aw_arb__g_rr;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux__i_aw_arb__g_rr__unnamedblk1;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux__i_wfifo;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux__unnamedblk1;
    VerilatedScope __Vscope_weft_axi_mux_flat__i_mux__unnamedblk2;
    VerilatedScope __Vscope_weft_axi_pkg;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
