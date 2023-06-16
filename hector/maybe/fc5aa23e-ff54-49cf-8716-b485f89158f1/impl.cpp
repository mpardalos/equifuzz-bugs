#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_ufixed<23,2> dut() {
    sc_dt::sc_uint<3> x0 = sc_dt::sc_uint<3>(15); // ()
    sc_dt::sc_uint<61> x1 = sc_dt::sc_uint<61>(( x0 * 94 )); // ()
    sc_dt::sc_uint<63> x2 = sc_dt::sc_uint<63>(( ( ( ( (x1[41]
                                                        ? 780
                                                        : 108) * 195 ) * (-218) ) * 348 ) - 326 )); // ()
    sc_dt::sc_uint<31> x3 = sc_dt::sc_uint<31>((x2[30]
                                                ? (-146)
                                                : (-583))); // ()
    sc_dt::sc_int<1> x4 = sc_dt::sc_int<1>(x3); // ()
    sc_dt::sc_fixed<23,21> x5 = sc_dt::sc_fixed<23,21>(x4.range(0, 0)); // ()
    sc_dt::sc_ufixed<23,2> x6 = sc_dt::sc_ufixed<23,2>(x5); // ()
    return x6; // ()
}

#include<Hector.h>

void impl() {

    sc_dt::sc_ufixed<23,2> out;


    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = dut();
    Hector::endCapture();
}
