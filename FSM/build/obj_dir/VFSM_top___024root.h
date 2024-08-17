// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFSM_top.h for the primary calling header

#ifndef VERILATED_VFSM_TOP___024ROOT_H_
#define VERILATED_VFSM_TOP___024ROOT_H_  // guard

#include "verilated.h"

class VFSM_top__Syms;

class VFSM_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(in,0,0);
    VL_OUT8(out,0,0);
    CData/*3:0*/ FSM_top__DOT__next_statue;
    CData/*3:0*/ FSM_top__DOT__statue;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__reset;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFSM_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFSM_top___024root(VFSM_top__Syms* symsp, const char* v__name);
    ~VFSM_top___024root();
    VL_UNCOPYABLE(VFSM_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
