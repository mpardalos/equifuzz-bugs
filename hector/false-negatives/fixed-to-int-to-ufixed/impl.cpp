#include "dut.cpp"
#include <Hector.h>

void impl() {
    sc_dt::sc_ufixed<41,12> out;

    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = dut();
    Hector::endCapture();
}
