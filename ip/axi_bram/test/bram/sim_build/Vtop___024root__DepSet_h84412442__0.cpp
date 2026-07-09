// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk_i) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst_ni)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__0__Vfuncout;
    __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__0__a;
    __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__0__a = 0;
    SData/*9:0*/ __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__1__Vfuncout;
    __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__1__a;
    __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__1__a = 0;
    SData/*9:0*/ __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q;
    __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q = 0;
    CData/*1:0*/ __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__w_q;
    __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__w_q = 0;
    CData/*0:0*/ __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__r_q;
    __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__r_q = 0;
    CData/*7:0*/ __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0;
    __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0;
    __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0;
    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1;
    __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1;
    __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1;
    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2;
    __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2;
    __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2;
    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3;
    __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3;
    __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3;
    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3 = 0;
    // Body
    __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q 
        = vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q;
    __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__w_q 
        = vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q;
    __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__r_q 
        = vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q;
    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0 = 0U;
    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1 = 0U;
    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2 = 0U;
    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3 = 0U;
    if (vlSelfRef.rst_ni) {
        if ((0U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q))) {
            if ((0x1000U & vlSelfRef.weft_axi_bram_flat__DOT__rq[3U])) {
                __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__0__a 
                    = ((vlSelfRef.weft_axi_bram_flat__DOT__rq[5U] 
                        << 0xfU) | (vlSelfRef.weft_axi_bram_flat__DOT__rq[4U] 
                                    >> 0x11U));
                __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__0__Vfuncout 
                    = (0x3ffU & (__Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__0__a 
                                 >> 2U));
                vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__wid_q 
                    = (0xfU & (vlSelfRef.weft_axi_bram_flat__DOT__rq[5U] 
                               >> 0x11U));
                __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q 
                    = __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__0__Vfuncout;
                __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__w_q = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q))) {
            if ((0x20U & vlSelfRef.weft_axi_bram_flat__DOT__rq[2U])) {
                vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__unnamedblk1__DOT__b = 1U;
                if ((0x100U & vlSelfRef.weft_axi_bram_flat__DOT__rq[2U])) {
                    __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0 
                        = (0xffU & (vlSelfRef.weft_axi_bram_flat__DOT__rq[2U] 
                                    >> 0xcU));
                    __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0 
                        = vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q;
                    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0 = 1U;
                }
                vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__unnamedblk1__DOT__b = 2U;
                if ((0x80U & vlSelfRef.weft_axi_bram_flat__DOT__rq[2U])) {
                    __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__w_q = 2U;
                }
                if ((0x200U & vlSelfRef.weft_axi_bram_flat__DOT__rq[2U])) {
                    __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1 
                        = (0xffU & (vlSelfRef.weft_axi_bram_flat__DOT__rq[2U] 
                                    >> 0x14U));
                    __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1 
                        = vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q;
                    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1 = 1U;
                }
                vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__unnamedblk1__DOT__b = 3U;
                if ((0x400U & vlSelfRef.weft_axi_bram_flat__DOT__rq[2U])) {
                    __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2 
                        = (0xffU & ((vlSelfRef.weft_axi_bram_flat__DOT__rq[3U] 
                                     << 4U) | (vlSelfRef.weft_axi_bram_flat__DOT__rq[2U] 
                                               >> 0x1cU)));
                    __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2 
                        = vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q;
                    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2 = 1U;
                }
                vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__unnamedblk1__DOT__b = 4U;
                if ((0x800U & vlSelfRef.weft_axi_bram_flat__DOT__rq[2U])) {
                    __VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3 
                        = (0xffU & (vlSelfRef.weft_axi_bram_flat__DOT__rq[3U] 
                                    >> 4U));
                    __VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3 
                        = vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q;
                    __VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3 = 1U;
                }
                __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q)));
            }
        } else if ((2U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q))) {
            if ((0x10U & vlSelfRef.weft_axi_bram_flat__DOT__rq[2U])) {
                __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__w_q = 0U;
            }
        } else {
            __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__w_q = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_bram.sv:61: Assertion failed in %Nweft_axi_bram_flat.i_bram: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_bram/test/bram/../../rtl/weft_axi_bram.sv", 61, "");
                }
            }
        }
        if (vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q) {
            if (vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q) {
                if ((1U & vlSelfRef.weft_axi_bram_flat__DOT__rq[0U])) {
                    if (((IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rcnt_q) 
                         == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rlen_q))) {
                        __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__r_q = 0U;
                    } else {
                        vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rcnt_q 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rcnt_q)));
                        vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__raddr_q 
                            = (0x3ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__raddr_q)));
                    }
                }
            } else {
                __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__r_q = 0U;
            }
        } else if ((2U & vlSelfRef.weft_axi_bram_flat__DOT__rq[0U])) {
            __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__1__a 
                = vlSelfRef.weft_axi_bram_flat__DOT__rq[1U];
            __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__1__Vfuncout 
                = (0x3ffU & (__Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__1__a 
                             >> 2U));
            vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rcnt_q = 0U;
            vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rid_q 
                = (0xfU & vlSelfRef.weft_axi_bram_flat__DOT__rq[2U]);
            vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__raddr_q 
                = __Vfunc_weft_axi_bram_flat__DOT__i_bram__DOT__word_idx__1__Vfuncout;
            vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rlen_q 
                = (vlSelfRef.weft_axi_bram_flat__DOT__rq[0U] 
                   >> 0x18U);
            __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__r_q = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: weft_axi_bram.sv:76: Assertion failed in %Nweft_axi_bram_flat.i_bram: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q));
                    VL_STOP_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/axi_bram/test/bram/../../rtl/weft_axi_bram.sv", 76, "");
                }
            }
        }
    } else {
        vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rcnt_q = 0U;
        __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__w_q = 0U;
        __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__r_q = 0U;
    }
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q 
        = __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q;
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q 
        = __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__w_q;
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q 
        = __Vdly__weft_axi_bram_flat__DOT__i_bram__DOT__r_q;
    if (__VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0) {
        vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__mem[__VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__mem
                [__VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v0));
    }
    if (__VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1) {
        vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__mem[__VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__mem
                [__VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2) {
        vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__mem[__VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__mem
                [__VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3) {
        vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__mem[__VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__mem
                [__VdlyDim0__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__weft_axi_bram_flat__DOT__i_bram__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o = 0ULL;
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
        = ((0x3ffffffffffffULL & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o) 
           | ((QData)((IData)((((0U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q)) 
                                << 1U) | (1U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q))))) 
              << 0x32U));
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
        = ((0xffbffffffffffULL & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o) 
           | ((QData)((IData)((2U == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__w_q)))) 
              << 0x2aU));
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
        = ((0xc0fffffffffffULL & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__wid_q) 
                               << 2U))) << 0x2cU));
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
        = ((0xffdffffffffffULL & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o) 
           | ((QData)((IData)((1U & (~ (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q))))) 
              << 0x29U));
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
        = ((0xffffffffffffeULL & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o) 
           | (IData)((IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__r_q)));
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
        = ((0xffe0000000007ULL & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o) 
           | (((QData)((IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rid_q)) 
               << 0x25U) | ((QData)((IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__mem
                                            [vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__raddr_q])) 
                            << 5U)));
    vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
        = ((0xffffffffffffbULL & vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o) 
           | ((QData)((IData)(((IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rcnt_q) 
                               == (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__rlen_q)))) 
              << 2U));
    vlSelfRef.weft_axi_bram_flat__DOT__rs = vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o;
    vlSelfRef.s_axi_awready = (1U & (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                             >> 0x33U)));
    vlSelfRef.s_axi_wready = (1U & (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                            >> 0x32U)));
    vlSelfRef.s_axi_bid = (0xfU & (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                           >> 0x2eU)));
    vlSelfRef.s_axi_bresp = (3U & (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                           >> 0x2cU)));
    vlSelfRef.s_axi_bvalid = (1U & (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                            >> 0x2aU)));
    vlSelfRef.s_axi_arready = (1U & (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                             >> 0x29U)));
    vlSelfRef.s_axi_rid = (0xfU & (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                           >> 0x25U)));
    vlSelfRef.s_axi_rdata = (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                     >> 5U));
    vlSelfRef.s_axi_rresp = (3U & (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                           >> 3U)));
    vlSelfRef.s_axi_rlast = (1U & (IData)((vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o 
                                           >> 2U)));
    vlSelfRef.s_axi_rvalid = (1U & (IData)(vlSelfRef.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o));
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_awready 
        = vlSelfRef.s_axi_awready;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_wready 
        = vlSelfRef.s_axi_wready;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_bid = vlSelfRef.s_axi_bid;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_bresp 
        = vlSelfRef.s_axi_bresp;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_bvalid 
        = vlSelfRef.s_axi_bvalid;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_arready 
        = vlSelfRef.s_axi_arready;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_rid = vlSelfRef.s_axi_rid;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_rdata 
        = vlSelfRef.s_axi_rdata;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_rresp 
        = vlSelfRef.s_axi_rresp;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_rlast 
        = vlSelfRef.s_axi_rlast;
    vlSelfRef.weft_axi_bram_flat__DOT__s_axi_rvalid 
        = vlSelfRef.s_axi_rvalid;
}
