// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class Valu__Syms;

class Valu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(i_mod,2,0);
    VL_OUT8(o_overflow,0,0);
    VL_OUT8(o_cout,0,0);
    VL_OUT8(o_seg,7,0);
    VL_OUT8(o_res,3,0);
    VL_OUT8(o_minus,7,0);
    CData/*2:0*/ alu__DOT____Vcellinp__seg_i0__i_seg;
    CData/*2:0*/ __Vtrigrprev__TOP__alu__DOT____Vcellinp__seg_i0__i_seg;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*2:0*/, 8> alu__DOT__Mux_i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*3:0*/, 8> alu__DOT__Mux_i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*2:0*/, 2> alu__DOT__Mux_i1__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> alu__DOT__Mux_i1__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*2:0*/, 2> alu__DOT__Mux_i2__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> alu__DOT__Mux_i2__DOT__i0__DOT__data_list;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* v__name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
