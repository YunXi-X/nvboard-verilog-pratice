// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcla.h for the primary calling header

#include "verilated.h"

#include "Vcla__Syms.h"
#include "Vcla___024root.h"

void Vcla___024root___ctor_var_reset(Vcla___024root* vlSelf);

Vcla___024root::Vcla___024root(Vcla__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcla___024root___ctor_var_reset(this);
}

void Vcla___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcla___024root::~Vcla___024root() {
}
