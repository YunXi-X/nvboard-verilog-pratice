// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPS_TOP__SYMS_H_
#define VERILATED_VPS_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPS_top.h"

// INCLUDE MODULE CLASSES
#include "VPS_top___024root.h"

// SYMS CLASS (contains all model state)
class VPS_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPS_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPS_top___024root              TOP;

    // CONSTRUCTORS
    VPS_top__Syms(VerilatedContext* contextp, const char* namep, VPS_top* modelp);
    ~VPS_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
