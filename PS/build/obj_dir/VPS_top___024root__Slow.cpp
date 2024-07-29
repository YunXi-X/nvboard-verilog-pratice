// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPS_top.h for the primary calling header

#include "verilated.h"

#include "VPS_top__Syms.h"
#include "VPS_top___024root.h"

void VPS_top___024root___ctor_var_reset(VPS_top___024root* vlSelf);

VPS_top___024root::VPS_top___024root(VPS_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPS_top___024root___ctor_var_reset(this);
}

void VPS_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPS_top___024root::~VPS_top___024root() {
}
