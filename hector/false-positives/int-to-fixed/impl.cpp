#include<Hector.h>
#include "dut.cpp"

void impl() {
    sc_dt::sc_fixed<16,8> out;

    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = dut();
    Hector::endCapture();
}
