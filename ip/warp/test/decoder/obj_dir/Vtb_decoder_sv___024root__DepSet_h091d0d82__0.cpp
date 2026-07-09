// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_decoder_sv.h for the primary calling header

#include "Vtb_decoder_sv__pch.h"
#include "Vtb_decoder_sv___024root.h"

VlCoroutine Vtb_decoder_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_decoder_sv___024root* vlSelf);

void Vtb_decoder_sv___024root___eval_initial(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___eval_initial\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_decoder_sv___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_decoder_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtask_tb_decoder_sv__DOT__ck__1__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__1__cond;
    __Vtask_tb_decoder_sv__DOT__ck__1__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__2__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__2__cond;
    __Vtask_tb_decoder_sv__DOT__ck__2__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__3__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__3__cond;
    __Vtask_tb_decoder_sv__DOT__ck__3__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__4__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__4__cond;
    __Vtask_tb_decoder_sv__DOT__ck__4__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__5__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__5__cond;
    __Vtask_tb_decoder_sv__DOT__ck__5__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__6__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__6__cond;
    __Vtask_tb_decoder_sv__DOT__ck__6__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__7__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__7__cond;
    __Vtask_tb_decoder_sv__DOT__ck__7__cond = 0;
    IData/*31:0*/ __Vfunc_tb_decoder_sv__DOT__R__8__Vfuncout;
    __Vfunc_tb_decoder_sv__DOT__R__8__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_tb_decoder_sv__DOT__R__8__f7;
    __Vfunc_tb_decoder_sv__DOT__R__8__f7 = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__R__8__rs2;
    __Vfunc_tb_decoder_sv__DOT__R__8__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__R__8__rs1;
    __Vfunc_tb_decoder_sv__DOT__R__8__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_decoder_sv__DOT__R__8__f3;
    __Vfunc_tb_decoder_sv__DOT__R__8__f3 = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__R__8__rd;
    __Vfunc_tb_decoder_sv__DOT__R__8__rd = 0;
    CData/*6:0*/ __Vfunc_tb_decoder_sv__DOT__R__8__op;
    __Vfunc_tb_decoder_sv__DOT__R__8__op = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__9__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__9__cond;
    __Vtask_tb_decoder_sv__DOT__ck__9__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__10__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__10__cond;
    __Vtask_tb_decoder_sv__DOT__ck__10__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__11__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__11__cond;
    __Vtask_tb_decoder_sv__DOT__ck__11__cond = 0;
    IData/*31:0*/ __Vfunc_tb_decoder_sv__DOT__I__12__Vfuncout;
    __Vfunc_tb_decoder_sv__DOT__I__12__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_decoder_sv__DOT__I__12__imm;
    __Vfunc_tb_decoder_sv__DOT__I__12__imm = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__I__12__rs1;
    __Vfunc_tb_decoder_sv__DOT__I__12__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_decoder_sv__DOT__I__12__f3;
    __Vfunc_tb_decoder_sv__DOT__I__12__f3 = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__I__12__rd;
    __Vfunc_tb_decoder_sv__DOT__I__12__rd = 0;
    CData/*6:0*/ __Vfunc_tb_decoder_sv__DOT__I__12__op;
    __Vfunc_tb_decoder_sv__DOT__I__12__op = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__13__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__13__cond;
    __Vtask_tb_decoder_sv__DOT__ck__13__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__14__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__14__cond;
    __Vtask_tb_decoder_sv__DOT__ck__14__cond = 0;
    IData/*31:0*/ __Vfunc_tb_decoder_sv__DOT__I__15__Vfuncout;
    __Vfunc_tb_decoder_sv__DOT__I__15__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_decoder_sv__DOT__I__15__imm;
    __Vfunc_tb_decoder_sv__DOT__I__15__imm = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__I__15__rs1;
    __Vfunc_tb_decoder_sv__DOT__I__15__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_decoder_sv__DOT__I__15__f3;
    __Vfunc_tb_decoder_sv__DOT__I__15__f3 = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__I__15__rd;
    __Vfunc_tb_decoder_sv__DOT__I__15__rd = 0;
    CData/*6:0*/ __Vfunc_tb_decoder_sv__DOT__I__15__op;
    __Vfunc_tb_decoder_sv__DOT__I__15__op = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__16__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__16__cond;
    __Vtask_tb_decoder_sv__DOT__ck__16__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__17__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__17__cond;
    __Vtask_tb_decoder_sv__DOT__ck__17__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__18__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__18__cond;
    __Vtask_tb_decoder_sv__DOT__ck__18__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__19__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__19__cond;
    __Vtask_tb_decoder_sv__DOT__ck__19__cond = 0;
    IData/*31:0*/ __Vfunc_tb_decoder_sv__DOT__S__20__Vfuncout;
    __Vfunc_tb_decoder_sv__DOT__S__20__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_decoder_sv__DOT__S__20__imm;
    __Vfunc_tb_decoder_sv__DOT__S__20__imm = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__S__20__rs2;
    __Vfunc_tb_decoder_sv__DOT__S__20__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__S__20__rs1;
    __Vfunc_tb_decoder_sv__DOT__S__20__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_decoder_sv__DOT__S__20__f3;
    __Vfunc_tb_decoder_sv__DOT__S__20__f3 = 0;
    CData/*6:0*/ __Vfunc_tb_decoder_sv__DOT__S__20__op;
    __Vfunc_tb_decoder_sv__DOT__S__20__op = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__21__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__21__cond;
    __Vtask_tb_decoder_sv__DOT__ck__21__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__22__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__22__cond;
    __Vtask_tb_decoder_sv__DOT__ck__22__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__23__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__23__cond;
    __Vtask_tb_decoder_sv__DOT__ck__23__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__24__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__24__cond;
    __Vtask_tb_decoder_sv__DOT__ck__24__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__25__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__25__cond;
    __Vtask_tb_decoder_sv__DOT__ck__25__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__26__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__26__cond;
    __Vtask_tb_decoder_sv__DOT__ck__26__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__27__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__27__cond;
    __Vtask_tb_decoder_sv__DOT__ck__27__cond = 0;
    IData/*31:0*/ __Vfunc_tb_decoder_sv__DOT__U__28__Vfuncout;
    __Vfunc_tb_decoder_sv__DOT__U__28__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_decoder_sv__DOT__U__28__immhi;
    __Vfunc_tb_decoder_sv__DOT__U__28__immhi = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__U__28__rd;
    __Vfunc_tb_decoder_sv__DOT__U__28__rd = 0;
    CData/*6:0*/ __Vfunc_tb_decoder_sv__DOT__U__28__op;
    __Vfunc_tb_decoder_sv__DOT__U__28__op = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__29__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__29__cond;
    __Vtask_tb_decoder_sv__DOT__ck__29__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__30__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__30__cond;
    __Vtask_tb_decoder_sv__DOT__ck__30__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__31__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__31__cond;
    __Vtask_tb_decoder_sv__DOT__ck__31__cond = 0;
    IData/*31:0*/ __Vfunc_tb_decoder_sv__DOT__U__32__Vfuncout;
    __Vfunc_tb_decoder_sv__DOT__U__32__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_decoder_sv__DOT__U__32__immhi;
    __Vfunc_tb_decoder_sv__DOT__U__32__immhi = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__U__32__rd;
    __Vfunc_tb_decoder_sv__DOT__U__32__rd = 0;
    CData/*6:0*/ __Vfunc_tb_decoder_sv__DOT__U__32__op;
    __Vfunc_tb_decoder_sv__DOT__U__32__op = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__33__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__33__cond;
    __Vtask_tb_decoder_sv__DOT__ck__33__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__34__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__34__cond;
    __Vtask_tb_decoder_sv__DOT__ck__34__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__35__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__35__cond;
    __Vtask_tb_decoder_sv__DOT__ck__35__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__36__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__36__cond;
    __Vtask_tb_decoder_sv__DOT__ck__36__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__37__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__37__cond;
    __Vtask_tb_decoder_sv__DOT__ck__37__cond = 0;
    IData/*31:0*/ __Vfunc_tb_decoder_sv__DOT__I__38__Vfuncout;
    __Vfunc_tb_decoder_sv__DOT__I__38__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_decoder_sv__DOT__I__38__imm;
    __Vfunc_tb_decoder_sv__DOT__I__38__imm = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__I__38__rs1;
    __Vfunc_tb_decoder_sv__DOT__I__38__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_decoder_sv__DOT__I__38__f3;
    __Vfunc_tb_decoder_sv__DOT__I__38__f3 = 0;
    CData/*4:0*/ __Vfunc_tb_decoder_sv__DOT__I__38__rd;
    __Vfunc_tb_decoder_sv__DOT__I__38__rd = 0;
    CData/*6:0*/ __Vfunc_tb_decoder_sv__DOT__I__38__op;
    __Vfunc_tb_decoder_sv__DOT__I__38__op = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__39__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__39__cond;
    __Vtask_tb_decoder_sv__DOT__ck__39__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__40__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__40__cond;
    __Vtask_tb_decoder_sv__DOT__ck__40__cond = 0;
    std::string __Vtask_tb_decoder_sv__DOT__ck__41__nm;
    CData/*0:0*/ __Vtask_tb_decoder_sv__DOT__ck__41__cond;
    __Vtask_tb_decoder_sv__DOT__ck__41__cond = 0;
    // Body
    vlSelfRef.tb_decoder_sv__DOT__ins = 0x500093U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         12);
    __Vtask_tb_decoder_sv__DOT__ck__1__cond = (1U == 
                                               (0x1fU 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                                   >> 0x16U)));
    __Vtask_tb_decoder_sv__DOT__ck__1__nm = std::string{"ADDI rd"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__1__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__1__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__2__cond = (0U == 
                                               (0x1fU 
                                                & vlSelfRef.tb_decoder_sv__DOT__d[2U]));
    __Vtask_tb_decoder_sv__DOT__ck__2__nm = std::string{"ADDI rs1"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__2__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__2__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__3__cond = (5U == 
                                               ((vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                                 << 0xaU) 
                                                | (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 0x16U)));
    __Vtask_tb_decoder_sv__DOT__ck__3__nm = std::string{"ADDI imm"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__3__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__3__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__4__cond = (0U == 
                                               (0xfU 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 0x12U)));
    __Vtask_tb_decoder_sv__DOT__ck__4__nm = std::string{"ADDI alu"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__4__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__4__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__5__cond = (1U & 
                                               (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                >> 0xfU));
    __Vtask_tb_decoder_sv__DOT__ck__5__nm = std::string{"ADDI opb"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__5__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__5__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__6__cond = (1U & 
                                               (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                >> 3U));
    __Vtask_tb_decoder_sv__DOT__ck__6__nm = std::string{"ADDI wr"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__6__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__6__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__7__cond = (0U == 
                                               (3U 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 1U)));
    __Vtask_tb_decoder_sv__DOT__ck__7__nm = std::string{"ADDI wb"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__7__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__7__nm));
    }
    __Vfunc_tb_decoder_sv__DOT__R__8__op = 0x33U;
    __Vfunc_tb_decoder_sv__DOT__R__8__rd = 3U;
    __Vfunc_tb_decoder_sv__DOT__R__8__f3 = 0U;
    __Vfunc_tb_decoder_sv__DOT__R__8__rs1 = 1U;
    __Vfunc_tb_decoder_sv__DOT__R__8__rs2 = 2U;
    __Vfunc_tb_decoder_sv__DOT__R__8__f7 = 0x20U;
    __Vfunc_tb_decoder_sv__DOT__R__8__Vfuncout = ((
                                                   ((IData)(__Vfunc_tb_decoder_sv__DOT__R__8__f7) 
                                                    << 0x19U) 
                                                   | ((IData)(__Vfunc_tb_decoder_sv__DOT__R__8__rs2) 
                                                      << 0x14U)) 
                                                  | ((((IData)(__Vfunc_tb_decoder_sv__DOT__R__8__rs1) 
                                                       << 0xfU) 
                                                      | ((IData)(__Vfunc_tb_decoder_sv__DOT__R__8__f3) 
                                                         << 0xcU)) 
                                                     | (((IData)(__Vfunc_tb_decoder_sv__DOT__R__8__rd) 
                                                         << 7U) 
                                                        | (IData)(__Vfunc_tb_decoder_sv__DOT__R__8__op))));
    vlSelfRef.tb_decoder_sv__DOT__ins = __Vfunc_tb_decoder_sv__DOT__R__8__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         16);
    __Vtask_tb_decoder_sv__DOT__ck__9__cond = (1U == 
                                               (0xfU 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 0x12U)));
    __Vtask_tb_decoder_sv__DOT__ck__9__nm = std::string{"SUB alu"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__9__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__9__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__10__cond = (1U 
                                                & (~ 
                                                   (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0xfU)));
    __Vtask_tb_decoder_sv__DOT__ck__10__nm = std::string{"SUB opb"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__10__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__10__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__11__cond = (2U 
                                                == 
                                                (vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                                 >> 0x1bU));
    __Vtask_tb_decoder_sv__DOT__ck__11__nm = std::string{"SUB rs2"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__11__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__11__nm));
    }
    __Vfunc_tb_decoder_sv__DOT__I__12__op = 0x13U;
    __Vfunc_tb_decoder_sv__DOT__I__12__rd = 5U;
    __Vfunc_tb_decoder_sv__DOT__I__12__f3 = 5U;
    __Vfunc_tb_decoder_sv__DOT__I__12__rs1 = 6U;
    __Vfunc_tb_decoder_sv__DOT__I__12__imm = 0x403U;
    __Vfunc_tb_decoder_sv__DOT__I__12__Vfuncout = (
                                                   ((IData)(__Vfunc_tb_decoder_sv__DOT__I__12__imm) 
                                                    << 0x14U) 
                                                   | ((((IData)(__Vfunc_tb_decoder_sv__DOT__I__12__rs1) 
                                                        << 0xfU) 
                                                       | ((IData)(__Vfunc_tb_decoder_sv__DOT__I__12__f3) 
                                                          << 0xcU)) 
                                                      | (((IData)(__Vfunc_tb_decoder_sv__DOT__I__12__rd) 
                                                          << 7U) 
                                                         | (IData)(__Vfunc_tb_decoder_sv__DOT__I__12__op))));
    vlSelfRef.tb_decoder_sv__DOT__ins = __Vfunc_tb_decoder_sv__DOT__I__12__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         19);
    __Vtask_tb_decoder_sv__DOT__ck__13__cond = (7U 
                                                == 
                                                (0xfU 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0x12U)));
    __Vtask_tb_decoder_sv__DOT__ck__13__nm = std::string{"SRAI alu"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__13__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__13__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__14__cond = (3U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0x16U)));
    __Vtask_tb_decoder_sv__DOT__ck__14__nm = std::string{"SRAI imm"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__14__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__14__nm));
    }
    __Vfunc_tb_decoder_sv__DOT__I__15__op = 3U;
    __Vfunc_tb_decoder_sv__DOT__I__15__rd = 5U;
    __Vfunc_tb_decoder_sv__DOT__I__15__f3 = 2U;
    __Vfunc_tb_decoder_sv__DOT__I__15__rs1 = 6U;
    __Vfunc_tb_decoder_sv__DOT__I__15__imm = 8U;
    __Vfunc_tb_decoder_sv__DOT__I__15__Vfuncout = (
                                                   ((IData)(__Vfunc_tb_decoder_sv__DOT__I__15__imm) 
                                                    << 0x14U) 
                                                   | ((((IData)(__Vfunc_tb_decoder_sv__DOT__I__15__rs1) 
                                                        << 0xfU) 
                                                       | ((IData)(__Vfunc_tb_decoder_sv__DOT__I__15__f3) 
                                                          << 0xcU)) 
                                                      | (((IData)(__Vfunc_tb_decoder_sv__DOT__I__15__rd) 
                                                          << 7U) 
                                                         | (IData)(__Vfunc_tb_decoder_sv__DOT__I__15__op))));
    vlSelfRef.tb_decoder_sv__DOT__ins = __Vfunc_tb_decoder_sv__DOT__I__15__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         22);
    __Vtask_tb_decoder_sv__DOT__ck__16__cond = (1U 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 8U));
    __Vtask_tb_decoder_sv__DOT__ck__16__nm = std::string{"LW load"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__16__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__16__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__17__cond = (1U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 1U)));
    __Vtask_tb_decoder_sv__DOT__ck__17__nm = std::string{"LW wb"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__17__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__17__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__18__cond = (8U 
                                                == 
                                                ((vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                                  << 0xaU) 
                                                 | (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0x16U)));
    __Vtask_tb_decoder_sv__DOT__ck__18__nm = std::string{"LW imm"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__18__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__18__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__19__cond = (2U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 4U)));
    __Vtask_tb_decoder_sv__DOT__ck__19__nm = std::string{"LW f3"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__19__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__19__nm));
    }
    __Vfunc_tb_decoder_sv__DOT__S__20__op = 0x23U;
    __Vfunc_tb_decoder_sv__DOT__S__20__f3 = 2U;
    __Vfunc_tb_decoder_sv__DOT__S__20__rs1 = 8U;
    __Vfunc_tb_decoder_sv__DOT__S__20__rs2 = 7U;
    __Vfunc_tb_decoder_sv__DOT__S__20__imm = 0xcU;
    __Vfunc_tb_decoder_sv__DOT__S__20__Vfuncout = (
                                                   ((0xfe000000U 
                                                     & ((IData)(__Vfunc_tb_decoder_sv__DOT__S__20__imm) 
                                                        << 0x14U)) 
                                                    | ((IData)(__Vfunc_tb_decoder_sv__DOT__S__20__rs2) 
                                                       << 0x14U)) 
                                                   | ((((IData)(__Vfunc_tb_decoder_sv__DOT__S__20__rs1) 
                                                        << 0xfU) 
                                                       | ((IData)(__Vfunc_tb_decoder_sv__DOT__S__20__f3) 
                                                          << 0xcU)) 
                                                      | ((0xf80U 
                                                          & ((IData)(__Vfunc_tb_decoder_sv__DOT__S__20__imm) 
                                                             << 7U)) 
                                                         | (IData)(__Vfunc_tb_decoder_sv__DOT__S__20__op))));
    vlSelfRef.tb_decoder_sv__DOT__ins = __Vfunc_tb_decoder_sv__DOT__S__20__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         25);
    __Vtask_tb_decoder_sv__DOT__ck__21__cond = (1U 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 7U));
    __Vtask_tb_decoder_sv__DOT__ck__21__nm = std::string{"SW store"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__21__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__21__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__22__cond = (1U 
                                                & (~ 
                                                   (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 3U)));
    __Vtask_tb_decoder_sv__DOT__ck__22__nm = std::string{"SW nowr"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__22__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__22__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__23__cond = (0xcU 
                                                == 
                                                ((vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                                  << 0xaU) 
                                                 | (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0x16U)));
    __Vtask_tb_decoder_sv__DOT__ck__23__nm = std::string{"SW imm"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__23__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__23__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__24__cond = (7U 
                                                == 
                                                (vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                                 >> 0x1bU));
    __Vtask_tb_decoder_sv__DOT__ck__24__nm = std::string{"SW rs2"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__24__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__24__nm));
    }
    vlSelfRef.tb_decoder_sv__DOT__ins = 0xa48063U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         28);
    __Vtask_tb_decoder_sv__DOT__ck__25__cond = (1U 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 0xeU));
    __Vtask_tb_decoder_sv__DOT__ck__25__nm = std::string{"BEQ br"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__25__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__25__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__26__cond = (1U 
                                                & (~ 
                                                   (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 3U)));
    __Vtask_tb_decoder_sv__DOT__ck__26__nm = std::string{"BEQ nowr"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__26__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__26__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__27__cond = (0U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0xbU)));
    __Vtask_tb_decoder_sv__DOT__ck__27__nm = std::string{"BEQ op"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__27__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__27__nm));
    }
    __Vfunc_tb_decoder_sv__DOT__U__28__op = 0x37U;
    __Vfunc_tb_decoder_sv__DOT__U__28__rd = 0xbU;
    __Vfunc_tb_decoder_sv__DOT__U__28__immhi = 0x12345U;
    __Vfunc_tb_decoder_sv__DOT__U__28__Vfuncout = (
                                                   (__Vfunc_tb_decoder_sv__DOT__U__28__immhi 
                                                    << 0xcU) 
                                                   | (((IData)(__Vfunc_tb_decoder_sv__DOT__U__28__rd) 
                                                       << 7U) 
                                                      | (IData)(__Vfunc_tb_decoder_sv__DOT__U__28__op)));
    vlSelfRef.tb_decoder_sv__DOT__ins = __Vfunc_tb_decoder_sv__DOT__U__28__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         31);
    __Vtask_tb_decoder_sv__DOT__ck__29__cond = (0x12345000U 
                                                == 
                                                ((vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                                  << 0xaU) 
                                                 | (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0x16U)));
    __Vtask_tb_decoder_sv__DOT__ck__29__nm = std::string{"LUI imm"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__29__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__29__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__30__cond = (2U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0x10U)));
    __Vtask_tb_decoder_sv__DOT__ck__30__nm = std::string{"LUI opa"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__30__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__30__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__31__cond = (1U 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 3U));
    __Vtask_tb_decoder_sv__DOT__ck__31__nm = std::string{"LUI wr"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__31__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__31__nm));
    }
    __Vfunc_tb_decoder_sv__DOT__U__32__op = 0x17U;
    __Vfunc_tb_decoder_sv__DOT__U__32__rd = 0xcU;
    __Vfunc_tb_decoder_sv__DOT__U__32__immhi = 1U;
    __Vfunc_tb_decoder_sv__DOT__U__32__Vfuncout = (
                                                   (__Vfunc_tb_decoder_sv__DOT__U__32__immhi 
                                                    << 0xcU) 
                                                   | (((IData)(__Vfunc_tb_decoder_sv__DOT__U__32__rd) 
                                                       << 7U) 
                                                      | (IData)(__Vfunc_tb_decoder_sv__DOT__U__32__op)));
    vlSelfRef.tb_decoder_sv__DOT__ins = __Vfunc_tb_decoder_sv__DOT__U__32__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         34);
    __Vtask_tb_decoder_sv__DOT__ck__33__cond = (1U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0x10U)));
    __Vtask_tb_decoder_sv__DOT__ck__33__nm = std::string{"AUIPC opa"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__33__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__33__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__34__cond = (0x1000U 
                                                == 
                                                ((vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                                  << 0xaU) 
                                                 | (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 0x16U)));
    __Vtask_tb_decoder_sv__DOT__ck__34__nm = std::string{"AUIPC imm"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__34__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__34__nm));
    }
    vlSelfRef.tb_decoder_sv__DOT__ins = 0xefU;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         37);
    __Vtask_tb_decoder_sv__DOT__ck__35__cond = (1U 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 0xaU));
    __Vtask_tb_decoder_sv__DOT__ck__35__nm = std::string{"JAL jal"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__35__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__35__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__36__cond = (2U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 1U)));
    __Vtask_tb_decoder_sv__DOT__ck__36__nm = std::string{"JAL wb"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__36__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__36__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__37__cond = (1U 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 3U));
    __Vtask_tb_decoder_sv__DOT__ck__37__nm = std::string{"JAL wr"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__37__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__37__nm));
    }
    __Vfunc_tb_decoder_sv__DOT__I__38__op = 0x67U;
    __Vfunc_tb_decoder_sv__DOT__I__38__rd = 1U;
    __Vfunc_tb_decoder_sv__DOT__I__38__f3 = 0U;
    __Vfunc_tb_decoder_sv__DOT__I__38__rs1 = 2U;
    __Vfunc_tb_decoder_sv__DOT__I__38__imm = 0U;
    __Vfunc_tb_decoder_sv__DOT__I__38__Vfuncout = (
                                                   ((IData)(__Vfunc_tb_decoder_sv__DOT__I__38__imm) 
                                                    << 0x14U) 
                                                   | ((((IData)(__Vfunc_tb_decoder_sv__DOT__I__38__rs1) 
                                                        << 0xfU) 
                                                       | ((IData)(__Vfunc_tb_decoder_sv__DOT__I__38__f3) 
                                                          << 0xcU)) 
                                                      | (((IData)(__Vfunc_tb_decoder_sv__DOT__I__38__rd) 
                                                          << 7U) 
                                                         | (IData)(__Vfunc_tb_decoder_sv__DOT__I__38__op))));
    vlSelfRef.tb_decoder_sv__DOT__ins = __Vfunc_tb_decoder_sv__DOT__I__38__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         40);
    __Vtask_tb_decoder_sv__DOT__ck__39__cond = (1U 
                                                & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                   >> 9U));
    __Vtask_tb_decoder_sv__DOT__ck__39__nm = std::string{"JALR jalr"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__39__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__39__nm));
    }
    __Vtask_tb_decoder_sv__DOT__ck__40__cond = (2U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                                    >> 1U)));
    __Vtask_tb_decoder_sv__DOT__ck__40__nm = std::string{"JALR wb"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__40__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__40__nm));
    }
    vlSelfRef.tb_decoder_sv__DOT__ins = 0xffffffffU;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 
                                         43);
    __Vtask_tb_decoder_sv__DOT__ck__41__cond = (1U 
                                                & vlSelfRef.tb_decoder_sv__DOT__d[0U]);
    __Vtask_tb_decoder_sv__DOT__ck__41__nm = std::string{"illegal"};
    if (VL_UNLIKELY(((1U & (~ (IData)(__Vtask_tb_decoder_sv__DOT__ck__41__cond)))))) {
        vlSelfRef.tb_decoder_sv__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_decoder_sv__DOT__errors);
        VL_WRITEF_NX("  %@ FAIL\n",0,-1,&(__Vtask_tb_decoder_sv__DOT__ck__41__nm));
    }
    VL_WRITEF_NX("decoder SV: errors=%0d -> %s\n",0,
                 32,vlSelfRef.tb_decoder_sv__DOT__errors,
                 32,((0U == vlSelfRef.tb_decoder_sv__DOT__errors)
                      ? 0x50415353U : 0x4641494cU));
    VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 44, "");
}

void Vtb_decoder_sv___024root___act_sequent__TOP__0(Vtb_decoder_sv___024root* vlSelf);

void Vtb_decoder_sv___024root___eval_act(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___eval_act\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_decoder_sv___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_decoder_sv___024root___act_sequent__TOP__0(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___act_sequent__TOP__0\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_decoder_sv__DOT__dut__DOT__imm_i;
    tb_decoder_sv__DOT__dut__DOT__imm_i = 0;
    // Body
    tb_decoder_sv__DOT__dut__DOT__imm_i = (((- (IData)(
                                                       (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelfRef.tb_decoder_sv__DOT__ins 
                                              >> 0x14U));
    vlSelfRef.tb_decoder_sv__DOT__d[0U] = 0U;
    vlSelfRef.tb_decoder_sv__DOT__d[1U] = 0U;
    vlSelfRef.tb_decoder_sv__DOT__d[2U] = 0U;
    vlSelfRef.tb_decoder_sv__DOT__d[1U] = ((0x3fffffU 
                                            & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                                           | (0xffc00000U 
                                              & ((0xf8000000U 
                                                  & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                     << 7U)) 
                                                 | (0x7c00000U 
                                                    & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                       << 0xfU)))));
    vlSelfRef.tb_decoder_sv__DOT__d[2U] = (0x1fU & 
                                           (vlSelfRef.tb_decoder_sv__DOT__ins 
                                            >> 0xfU));
    vlSelfRef.tb_decoder_sv__DOT__d[0U] = ((0x7fffU 
                                            & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                                           | ((IData)(
                                                      (1ULL 
                                                       | ((QData)((IData)(tb_decoder_sv__DOT__dut__DOT__imm_i)) 
                                                          << 7U))) 
                                              << 0xfU));
    vlSelfRef.tb_decoder_sv__DOT__d[1U] = ((0xffc00000U 
                                            & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                                           | (((IData)(
                                                       (1ULL 
                                                        | ((QData)((IData)(tb_decoder_sv__DOT__dut__DOT__imm_i)) 
                                                           << 7U))) 
                                               >> 0x11U) 
                                              | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(tb_decoder_sv__DOT__dut__DOT__imm_i)) 
                                                              << 7U)) 
                                                          >> 0x20U)) 
                                                 << 0xfU)));
    vlSelfRef.tb_decoder_sv__DOT__d[0U] = ((0xffffc7ffU 
                                            & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                                           | (0x3800U 
                                              & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                 >> 1U)));
    vlSelfRef.tb_decoder_sv__DOT__d[0U] = ((0xffffff8fU 
                                            & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                                           | (0x70U 
                                              & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                 >> 8U)));
    vlSelfRef.tb_decoder_sv__DOT__d[0U] = (0xfffffff8U 
                                           & vlSelfRef.tb_decoder_sv__DOT__d[0U]);
    if ((0x40U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
        if ((0x20U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
            if ((0x10U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
            } else if ((8U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                if ((4U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                    if ((2U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                        if ((1U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                            vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                = ((0x3fffffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                                   | (0xff800000U & 
                                      (vlSelfRef.tb_decoder_sv__DOT__ins 
                                       << 2U)));
                            vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                = ((0xfffffc00U & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                                   | (0x3fffffU & (
                                                   ((0x3fcU 
                                                     & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                        >> 0xaU)) 
                                                    | (2U 
                                                       & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                          >> 0x13U))) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                         >> 0x1eU)))));
                            vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                                = ((0xffc003ffU & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                                   | (0xfffffc00U & 
                                      ((0x3ff800U & 
                                        ((- (IData)(
                                                    (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                     >> 0x1fU))) 
                                         << 0xbU)) 
                                       | (0x400U & 
                                          (vlSelfRef.tb_decoder_sv__DOT__ins 
                                           >> 0x15U)))));
                            vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                = (0x400U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                            vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                = (0xcU | (0xfffffff1U 
                                           & vlSelfRef.tb_decoder_sv__DOT__d[0U]));
                        } else {
                            vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                                = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                        }
                    } else {
                        vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                }
            } else if ((4U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                if ((2U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                    if ((1U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                        vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                            = ((0x3fffffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                               | (tb_decoder_sv__DOT__dut__DOT__imm_i 
                                  << 0x16U));
                        vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                            = ((0xffc00000U & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                               | (tb_decoder_sv__DOT__dut__DOT__imm_i 
                                  >> 0xaU));
                        vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                            = (0x200U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                        vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                            = (0xcU | (0xfffffff1U 
                                       & vlSelfRef.tb_decoder_sv__DOT__d[0U]));
                    } else {
                        vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                }
            } else if ((2U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                if ((1U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = ((0x3fffffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                           | (0xffc00000U & ((0xf8000000U 
                                              & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                 << 2U)) 
                                             | (0x7800000U 
                                                & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                   << 0xfU)))));
                    vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                        = ((0xfffffffeU & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                           | (1U & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                    >> 0x1eU)));
                    vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                        = ((0xffc00001U & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                           | (0xfffffffeU & ((0x3ffff8U 
                                              & ((- (IData)(
                                                            (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                             >> 0x1fU))) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                    >> 0x1dU)) 
                                                | (2U 
                                                   & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                      >> 6U))))));
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (0x4000U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (0xfffffff7U & vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                } else {
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (1U 
                                                   | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
        }
    } else if ((0x20U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
        if ((0x10U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
            if ((8U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
            } else if ((4U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                if ((2U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                    if ((1U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                        vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                            = ((0x7fffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                               | ((IData)((5ULL | ((QData)((IData)(
                                                                   (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                                    >> 0xcU))) 
                                                   << 0x13U))) 
                                  << 0xfU));
                        vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                            = ((0xffc00000U & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                               | (((IData)((5ULL | 
                                            ((QData)((IData)(
                                                             (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                              >> 0xcU))) 
                                             << 0x13U))) 
                                   >> 0x11U) | ((IData)(
                                                        ((5ULL 
                                                          | ((QData)((IData)(
                                                                             (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                                              >> 0xcU))) 
                                                             << 0x13U)) 
                                                         >> 0x20U)) 
                                                << 0xfU)));
                        vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                            = (8U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                    } else {
                        vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                            = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                    }
                } else {
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                }
            } else if ((2U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                if ((1U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (0xfffc7fffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (8U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = ((0xffc3ffffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                           | (((0x4000U & vlSelfRef.tb_decoder_sv__DOT__ins)
                                ? ((0x2000U & vlSelfRef.tb_decoder_sv__DOT__ins)
                                    ? ((0x1000U & vlSelfRef.tb_decoder_sv__DOT__ins)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelfRef.tb_decoder_sv__DOT__ins)
                                     ? ((0x40000000U 
                                         & vlSelfRef.tb_decoder_sv__DOT__ins)
                                         ? 7U : 6U)
                                     : 5U)) : ((0x2000U 
                                                & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                    ? 2U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                     ? 1U
                                                     : 0U)))) 
                              << 0x12U));
                } else {
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
            }
        } else if ((8U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (1U 
                                                   | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
        } else if ((4U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (1U 
                                                   | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
        } else if ((2U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
            if ((1U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = ((0x7fffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                       | (0xffff8000U & (0x8000U | 
                                         ((0xf8000000U 
                                           & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                              << 2U)) 
                                          | (0x7c00000U 
                                             & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                << 0xfU))))));
                vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                    = ((0xfffffffcU & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                       | (0x7fffU & (vlSelfRef.tb_decoder_sv__DOT__ins 
                                     >> 0x1eU)));
                vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                    = ((0xffc00003U & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                       | (0x3ffffcU & ((- (IData)((vlSelfRef.tb_decoder_sv__DOT__ins 
                                                   >> 0x1fU))) 
                                       << 2U)));
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (0x80U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
            } else {
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (1U 
                                                   | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
        }
    } else if ((0x10U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
        if ((8U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (1U 
                                                   | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
        } else if ((4U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
            if ((2U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                if ((1U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = ((0x7fffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                           | ((IData)((3ULL | ((QData)((IData)(
                                                               (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                                >> 0xcU))) 
                                               << 0x13U))) 
                              << 0xfU));
                    vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                        = ((0xffc00000U & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                           | (((IData)((3ULL | ((QData)((IData)(
                                                                (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                                 >> 0xcU))) 
                                                << 0x13U))) 
                               >> 0x11U) | ((IData)(
                                                    ((3ULL 
                                                      | ((QData)((IData)(
                                                                         (vlSelfRef.tb_decoder_sv__DOT__ins 
                                                                          >> 0xcU))) 
                                                         << 0x13U)) 
                                                     >> 0x20U)) 
                                            << 0xfU)));
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (8U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                } else {
                    vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                        = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                }
            } else {
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
            }
        } else if ((2U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
            if ((1U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = ((0x3fffffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                       | (tb_decoder_sv__DOT__dut__DOT__imm_i 
                          << 0x16U));
                vlSelfRef.tb_decoder_sv__DOT__d[1U] 
                    = ((0xffc00000U & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                       | (tb_decoder_sv__DOT__dut__DOT__imm_i 
                          >> 0xaU));
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (0x8000U | (0xfffc7fffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]));
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (8U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = ((0xffc3ffffU & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                       | (((0x4000U & vlSelfRef.tb_decoder_sv__DOT__ins)
                            ? ((0x2000U & vlSelfRef.tb_decoder_sv__DOT__ins)
                                ? ((0x1000U & vlSelfRef.tb_decoder_sv__DOT__ins)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                    ? 7U
                                                    : 6U)
                                                   : 5U))
                            : ((0x2000U & vlSelfRef.tb_decoder_sv__DOT__ins)
                                ? ((0x1000U & vlSelfRef.tb_decoder_sv__DOT__ins)
                                    ? 4U : 3U) : ((0x1000U 
                                                   & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                   ? 2U
                                                   : 0U))) 
                          << 0x12U));
            } else {
                vlSelfRef.tb_decoder_sv__DOT__d[0U] 
                    = (1U | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
            }
        } else {
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (1U 
                                                   | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
        }
    } else if ((8U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
        vlSelfRef.tb_decoder_sv__DOT__d[0U] = ((4U 
                                                & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                ? (
                                                   (2U 
                                                    & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.tb_decoder_sv__DOT__ins)
                                                     ? 
                                                    (0xfffffff7U 
                                                     & vlSelfRef.tb_decoder_sv__DOT__d[0U])
                                                     : 
                                                    (1U 
                                                     | vlSelfRef.tb_decoder_sv__DOT__d[0U]))
                                                    : 
                                                   (1U 
                                                    | vlSelfRef.tb_decoder_sv__DOT__d[0U]))
                                                : (1U 
                                                   | vlSelfRef.tb_decoder_sv__DOT__d[0U]));
    } else if ((4U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
        vlSelfRef.tb_decoder_sv__DOT__d[0U] = (1U | 
                                               vlSelfRef.tb_decoder_sv__DOT__d[0U]);
    } else if ((2U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
        if ((1U & vlSelfRef.tb_decoder_sv__DOT__ins)) {
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (
                                                   (0x7fffU 
                                                    & vlSelfRef.tb_decoder_sv__DOT__d[0U]) 
                                                   | ((IData)(
                                                              (1ULL 
                                                               | ((QData)((IData)(tb_decoder_sv__DOT__dut__DOT__imm_i)) 
                                                                  << 7U))) 
                                                      << 0xfU));
            vlSelfRef.tb_decoder_sv__DOT__d[1U] = (
                                                   (0xffc00000U 
                                                    & vlSelfRef.tb_decoder_sv__DOT__d[1U]) 
                                                   | (((IData)(
                                                               (1ULL 
                                                                | ((QData)((IData)(tb_decoder_sv__DOT__dut__DOT__imm_i)) 
                                                                   << 7U))) 
                                                       >> 0x11U) 
                                                      | ((IData)(
                                                                 ((1ULL 
                                                                   | ((QData)((IData)(tb_decoder_sv__DOT__dut__DOT__imm_i)) 
                                                                      << 7U)) 
                                                                  >> 0x20U)) 
                                                         << 0xfU)));
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (0x100U 
                                                   | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (0xaU 
                                                   | (0xfffffff1U 
                                                      & vlSelfRef.tb_decoder_sv__DOT__d[0U]));
        } else {
            vlSelfRef.tb_decoder_sv__DOT__d[0U] = (1U 
                                                   | vlSelfRef.tb_decoder_sv__DOT__d[0U]);
        }
    } else {
        vlSelfRef.tb_decoder_sv__DOT__d[0U] = (1U | 
                                               vlSelfRef.tb_decoder_sv__DOT__d[0U]);
    }
}

void Vtb_decoder_sv___024root___eval_nba(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___eval_nba\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_decoder_sv___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_decoder_sv___024root___timing_resume(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___timing_resume\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_decoder_sv___024root___eval_triggers__act(Vtb_decoder_sv___024root* vlSelf);

bool Vtb_decoder_sv___024root___eval_phase__act(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___eval_phase__act\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_decoder_sv___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_decoder_sv___024root___timing_resume(vlSelf);
        Vtb_decoder_sv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_decoder_sv___024root___eval_phase__nba(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___eval_phase__nba\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_decoder_sv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decoder_sv___024root___dump_triggers__nba(Vtb_decoder_sv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decoder_sv___024root___dump_triggers__act(Vtb_decoder_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_decoder_sv___024root___eval(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___eval\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_decoder_sv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_decoder_sv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/decoder/tb_decoder_sv.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_decoder_sv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_decoder_sv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_decoder_sv___024root___eval_debug_assertions(Vtb_decoder_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder_sv___024root___eval_debug_assertions\n"); );
    Vtb_decoder_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
