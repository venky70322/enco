// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencoder.h for the primary calling header

#ifndef VERILATED_VENCODER___024UNIT_H_
#define VERILATED_VENCODER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vencoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vencoder___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vencoder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vencoder___024unit();
    ~Vencoder___024unit();
    void ctor(Vencoder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vencoder___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
