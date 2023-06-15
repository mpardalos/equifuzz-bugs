#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_ufixed<60,57> dut() {
    sc_dt::sc_ufixed<62,48> x0 = sc_dt::sc_ufixed<62,48>(( 79 + 54 )); // ()
    sc_dt::sc_ufixed<56,50> x1 = sc_dt::sc_ufixed<56,50>(x0); // ()
    sc_dt::sc_int<63> x2 = sc_dt::sc_int<63>(x1.range(47, 44)); // ()
    sc_dt::sc_fixed<46,32> x3 = sc_dt::sc_fixed<46,32>(( x2 * 627 )); // ()
    sc_dt::sc_uint<11> x4 = sc_dt::sc_uint<11>(x3.range(43, 3)); // ()
    sc_dt::sc_ufixed<60,57> x5 = sc_dt::sc_ufixed<60,57>(( x4.range(0, 0) - (-133) )); // ()
    return x5; // ()
}

#include<Hector.h>

void impl() {

    sc_dt::sc_ufixed<60,57> out;


    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = dut();
    Hector::endCapture();
}
