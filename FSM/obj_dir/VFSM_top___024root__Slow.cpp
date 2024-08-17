// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_top.h for the primary calling header

#include "verilated.h"

#include "VFSM_top__Syms.h"
#include "VFSM_top___024root.h"

void VFSM_top___024root___ctor_var_reset(VFSM_top___024root* vlSelf);

VFSM_top___024root::VFSM_top___024root(VFSM_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFSM_top___024root___ctor_var_reset(this);
}

void VFSM_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VFSM_top___024root::~VFSM_top___024root() {
}
