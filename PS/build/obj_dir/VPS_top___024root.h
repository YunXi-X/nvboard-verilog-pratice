// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPS_top.h for the primary calling header

#ifndef VERILATED_VPS_TOP___024ROOT_H_
#define VERILATED_VPS_TOP___024ROOT_H_  // guard

#include "verilated.h"

class VPS_top__Syms;

class VPS_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(in,0,0);
    VL_IN8(statue,3,0);
    VL_OUT8(out,3,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPS_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPS_top___024root(VPS_top__Syms* symsp, const char* v__name);
    ~VPS_top___024root();
    VL_UNCOPYABLE(VPS_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
