// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vfsm___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"S0", "S1", "S2", "S3", "S4"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(1, "fsm.state_t", 5, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vfsm___024root__trace_decl_types(VerilatedFst* tracep) {
    Vfsm___024root__traceDeclTypesSub0(tracep);
}
