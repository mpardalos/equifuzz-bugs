#include<Hector.h>
#include "dut.cpp"

void impl() {
    sc_uint<8> out;

    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = dut();
    Hector::endCapture();
}
