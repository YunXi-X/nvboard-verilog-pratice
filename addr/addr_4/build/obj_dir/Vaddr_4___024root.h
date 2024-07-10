// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaddr_4.h for the primary calling header

#ifndef VERILATED_VADDR_4___024ROOT_H_
#define VERILATED_VADDR_4___024ROOT_H_  // guard

#include "verilated.h"

class Vaddr_4__Syms;

class Vaddr_4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,3,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaddr_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaddr_4___024root(Vaddr_4__Syms* symsp, const char* v__name);
    ~Vaddr_4___024root();
    VL_UNCOPYABLE(Vaddr_4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
