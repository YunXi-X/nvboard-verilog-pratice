// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddr_4.h for the primary calling header

#include "verilated.h"

#include "Vaddr_4__Syms.h"
#include "Vaddr_4___024root.h"

void Vaddr_4___024root___ctor_var_reset(Vaddr_4___024root* vlSelf);

Vaddr_4___024root::Vaddr_4___024root(Vaddr_4__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaddr_4___024root___ctor_var_reset(this);
}

void Vaddr_4___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaddr_4___024root::~Vaddr_4___024root() {
}
