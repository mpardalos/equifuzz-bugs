#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_ufixed<41,12> dut() {
    sc_dt::sc_fixed<1,0> x0 = sc_dt::sc_fixed<1,0>(-117 /* int */); // ()
    sc_dt::sc_int<25> x1 = sc_dt::sc_int<25>(x0 /* sc_dt::sc_fixed<1,0> */); // ()
    sc_dt::sc_ufixed<41,12> x2 = sc_dt::sc_ufixed<41,12>(x1 /* sc_dt::sc_int<25> */ .range(13, 12)); // ()
    return x2 /* sc_dt::sc_ufixed<41,12> */; // ()
}
