// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_PC.h for the primary calling header

#include "verilated.h"

#include "Vtop_PC__Syms.h"
#include "Vtop_PC___024root.h"

void Vtop_PC___024root___ctor_var_reset(Vtop_PC___024root* vlSelf);

Vtop_PC___024root::Vtop_PC___024root(Vtop_PC__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_PC___024root___ctor_var_reset(this);
}

void Vtop_PC___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_PC___024root::~Vtop_PC___024root() {
}
