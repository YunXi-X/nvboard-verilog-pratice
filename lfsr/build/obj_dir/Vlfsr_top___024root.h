// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlfsr_top.h for the primary calling header

#ifndef VERILATED_VLFSR_TOP___024ROOT_H_
#define VERILATED_VLFSR_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vlfsr_top__Syms;

class Vlfsr_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(out,7,0);
    CData/*7:0*/ lfsr_top__DOT__lfsr_i0__DOT__counter;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlfsr_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlfsr_top___024root(Vlfsr_top__Syms* symsp, const char* v__name);
    ~Vlfsr_top___024root();
    VL_UNCOPYABLE(Vlfsr_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
