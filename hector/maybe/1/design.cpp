#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_fixed<29,9> dut() {
    sc_dt::sc_ufixed<10,4> x0 = sc_dt::sc_ufixed<10,4>(( ( ( 29 * 718 ) - (-343) ) * 171 )); // ()
    sc_dt::sc_uint<62> x1 = sc_dt::sc_uint<62>(x0.range(7, 1)); // ()
    sc_dt::sc_ufixed<64,14> x2 = sc_dt::sc_ufixed<64,14>(x1.range(41, 28)); // ()
    sc_dt::sc_int<39> x3 = sc_dt::sc_int<39>(x2.range(48, 40)); // ()
    sc_dt::sc_int<58> x4 = sc_dt::sc_int<58>(( x3.range(16, 6) * (-719) )); // ()
    sc_dt::sc_fixed<53,29> x5 = sc_dt::sc_fixed<53,29>(( x4.range(27, 9) + (-250) )); // ()
    sc_dt::sc_ufixed<20,16> x6 = sc_dt::sc_ufixed<20,16>(x5); // ()
    sc_dt::sc_int<44> x7 = sc_dt::sc_int<44>(x6.range(2, 0)); // ()
    sc_dt::sc_int<9> x8 = sc_dt::sc_int<9>(( x7.range(37, 37) + (-854) )); // ()
    sc_dt::sc_ufixed<29,19> x9 = sc_dt::sc_ufixed<29,19>(x8); // ()
    sc_dt::sc_int<40> x10 = sc_dt::sc_int<40>(x9.range(16, 5)); // ()
    sc_dt::sc_fixed<23,14> x11 = sc_dt::sc_fixed<23,14>(x10); // ()
    sc_dt::sc_fixed<57,45> x12 = sc_dt::sc_fixed<57,45>(x11); // ()
    sc_dt::sc_fixed<2,2> x13 = sc_dt::sc_fixed<2,2>(x12); // ()
    sc_dt::sc_ufixed<31,3> x14 = sc_dt::sc_ufixed<31,3>(x13); // ()
    sc_dt::sc_ufixed<44,9> x15 = sc_dt::sc_ufixed<44,9>(x14); // ()
    sc_dt::sc_fixed<3,3> x16 = sc_dt::sc_fixed<3,3>(x15); // ()
    sc_dt::sc_ufixed<23,17> x17 = sc_dt::sc_ufixed<23,17>(x16); // ()
    sc_dt::sc_uint<15> x18 = sc_dt::sc_uint<15>(x17.range(1, 0)); // ()
    sc_dt::sc_fixed<2,2> x19 = sc_dt::sc_fixed<2,2>(( ( ( x18 + (-1024) ) + (-918) ) - (-258) )); // ()
    sc_dt::sc_ufixed<39,16> x20 = sc_dt::sc_ufixed<39,16>(x19); // ()
    sc_dt::sc_int<25> x21 = sc_dt::sc_int<25>(x20.range(31, 8)); // ()
    sc_dt::sc_int<42> x22 = sc_dt::sc_int<42>(x21[16]); // ()
    sc_dt::sc_int<56> x23 = sc_dt::sc_int<56>(x22[17]); // ()
    sc_dt::sc_int<3> x24 = sc_dt::sc_int<3>(( x23 * 39 )); // ()
    sc_dt::sc_uint<49> x25 = sc_dt::sc_uint<49>(( x24.range(1, 0) - 817 )); // ()
    sc_dt::sc_fixed<21,17> x26 = sc_dt::sc_fixed<21,17>(( ( ( ( x25 + 1013 ) - 876 ) + (-980) ) - (-351) )); // ()
    sc_dt::sc_fixed<10,9> x27 = sc_dt::sc_fixed<10,9>(x26); // ()
    sc_dt::sc_uint<10> x28 = sc_dt::sc_uint<10>(x27.range(6, 5)); // ()
    sc_dt::sc_int<17> x29 = sc_dt::sc_int<17>(x28.range(5, 0)); // ()
    sc_dt::sc_ufixed<64,12> x30 = sc_dt::sc_ufixed<64,12>(( ( x29 - (-685) ) + 500 )); // ()
    sc_dt::sc_int<52> x31 = sc_dt::sc_int<52>(x30.range(30, 25)); // ()
    sc_dt::sc_int<12> x32 = sc_dt::sc_int<12>(x31); // ()
    sc_dt::sc_int<13> x33 = sc_dt::sc_int<13>(( x32.range(8, 5) * (-584) )); // ()
    sc_dt::sc_int<7> x34 = sc_dt::sc_int<7>(( (x33[1]
                                               ? 890
                                               : 389) * 914 )); // ()
    sc_dt::sc_int<29> x35 = sc_dt::sc_int<29>(x34[3]); // ()
    sc_dt::sc_fixed<53,32> x36 = sc_dt::sc_fixed<53,32>(x35[26]); // ()
    sc_dt::sc_uint<46> x37 = sc_dt::sc_uint<46>(x36.range(35, 32)); // ()
    sc_dt::sc_ufixed<36,0> x38 = sc_dt::sc_ufixed<36,0>(x37); // ()
    sc_dt::sc_int<7> x39 = sc_dt::sc_int<7>(x38.range(33, 11)); // ()
    sc_dt::sc_int<8> x40 = sc_dt::sc_int<8>((x39[2]
                                             ? 786
                                             : (-136))); // ()
    sc_dt::sc_ufixed<43,24> x41 = sc_dt::sc_ufixed<43,24>(( x40 - (-154) )); // ()
    sc_dt::sc_uint<33> x42 = sc_dt::sc_uint<33>(x41.range(7, 7)); // ()
    sc_dt::sc_uint<7> x43 = sc_dt::sc_uint<7>(x42.range(27, 23)); // ()
    sc_dt::sc_fixed<55,11> x44 = sc_dt::sc_fixed<55,11>(x43); // ()
    sc_dt::sc_fixed<39,2> x45 = sc_dt::sc_fixed<39,2>(x44); // ()
    sc_dt::sc_fixed<42,14> x46 = sc_dt::sc_fixed<42,14>(x45); // ()
    sc_dt::sc_ufixed<11,11> x47 = sc_dt::sc_ufixed<11,11>(x46); // ()
    sc_dt::sc_uint<40> x48 = sc_dt::sc_uint<40>(x47.range(9, 5)); // ()
    sc_dt::sc_ufixed<11,8> x49 = sc_dt::sc_ufixed<11,8>(x48); // ()
    sc_dt::sc_uint<9> x50 = sc_dt::sc_uint<9>(x49.range(7, 1)); // ()
    sc_dt::sc_uint<14> x51 = sc_dt::sc_uint<14>(( x50.range(7, 7) + 854 )); // ()
    sc_dt::sc_uint<20> x52 = sc_dt::sc_uint<20>(x51); // ()
    sc_dt::sc_fixed<29,5> x53 = sc_dt::sc_fixed<29,5>(x52); // ()
    sc_dt::sc_uint<2> x54 = sc_dt::sc_uint<2>(x53.range(9, 1)); // ()
    sc_dt::sc_int<42> x55 = sc_dt::sc_int<42>((x54[1]
                                               ? 205
                                               : 177)); // ()
    sc_dt::sc_uint<43> x56 = sc_dt::sc_uint<43>(x55[3]); // ()
    sc_dt::sc_uint<61> x57 = sc_dt::sc_uint<61>((x56[3]
                                                 ? (-1024)
                                                 : 763)); // ()
    sc_dt::sc_fixed<20,16> x58 = sc_dt::sc_fixed<20,16>((x57[6]
                                                         ? 693
                                                         : (-710))); // ()
    sc_dt::sc_int<1> x59 = sc_dt::sc_int<1>(x58.range(4, 4)); // ()
    sc_dt::sc_fixed<29,9> x60 = sc_dt::sc_fixed<29,9>(x59.range(0, 0)); // ()
    return x60; // ()
}

#include<Hector.h>

void impl() {

    sc_dt::sc_fixed<29,9> out;


    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = dut();
    Hector::endCapture();
}
