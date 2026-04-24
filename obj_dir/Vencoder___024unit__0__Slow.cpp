// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "Vencoder__pch.h"

VL_ATTR_COLD void Vencoder___024unit___ctor_var_reset(Vencoder___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vencoder___024unit___ctor_var_reset\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorOff = 0;
}
