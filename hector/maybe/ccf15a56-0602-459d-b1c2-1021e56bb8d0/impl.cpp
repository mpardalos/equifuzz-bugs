#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_ufixed<23,11> dut() {
    sc_dt::sc_uint<20> x0 = sc_dt::sc_uint<20>(( ( (-2) * (-206) ) * (-156) )); // ()
    sc_dt::sc_uint<15> x1 = sc_dt::sc_uint<15>(( ( x0 + 461 ) - (-93) )); // ()
    sc_dt::sc_ufixed<16,6> x2 = sc_dt::sc_ufixed<16,6>(x1); // ()
    sc_dt::sc_fixed<45,26> x3 = sc_dt::sc_fixed<45,26>(x2); // ()
    sc_dt::sc_int<1> x4 = sc_dt::sc_int<1>(x3.range(37, 22)); // ()
    sc_dt::sc_ufixed<23,11> x5 = sc_dt::sc_ufixed<23,11>(x4.range(0, 0)); // ()
    return x5; // ()
}

#include<Hector.h>

void impl() {

    sc_dt::sc_ufixed<23,11> out;


    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = dut();
    Hector::endCapture();
}
