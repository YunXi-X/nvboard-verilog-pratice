// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_top.h for the primary calling header

#include "verilated.h"

#include "Vlfsr_top__Syms.h"
#include "Vlfsr_top___024root.h"

void Vlfsr_top___024root___ctor_var_reset(Vlfsr_top___024root* vlSelf);

Vlfsr_top___024root::Vlfsr_top___024root(Vlfsr_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlfsr_top___024root___ctor_var_reset(this);
}

void Vlfsr_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlfsr_top___024root::~Vlfsr_top___024root() {
}
