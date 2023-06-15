#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_ufixed<52,24> dut() {
    sc_dt::sc_int<45> x0 = sc_dt::sc_int<45>(( 15 * 486 )); // ()
    sc_dt::sc_ufixed<37,5> x1 = sc_dt::sc_ufixed<37,5>(x0); // ()
    sc_dt::sc_int<38> x2 = sc_dt::sc_int<38>(x1.range(6, 5)); // ()
    sc_dt::sc_fixed<64,13> x3 = sc_dt::sc_fixed<64,13>(x2[37]); // ()
    sc_dt::sc_uint<8> x4 = sc_dt::sc_uint<8>(x3.range(45, 44)); // ()
    sc_dt::sc_fixed<52,17> x5 = sc_dt::sc_fixed<52,17>(( (x4[2]
                                                          ? (-879)
                                                          : 912) + 583 )); // ()
    sc_dt::sc_int<28> x6 = sc_dt::sc_int<28>(x5.range(10, 2)); // ()
    sc_dt::sc_int<6> x7 = sc_dt::sc_int<6>(( x6.range(14, 2) * 946 )); // ()
    sc_dt::sc_int<22> x8 = sc_dt::sc_int<22>(x7.range(1, 1)); // ()
    sc_dt::sc_fixed<10,9> x9 = sc_dt::sc_fixed<10,9>(( ( x8 * (-747) ) * 959 )); // ()
    sc_dt::sc_fixed<6,3> x10 = sc_dt::sc_fixed<6,3>(x9); // ()
    sc_dt::sc_int<30> x11 = sc_dt::sc_int<30>(x10.range(3, 3)); // ()
    sc_dt::sc_int<27> x12 = sc_dt::sc_int<27>(( ( x11 - (-937) ) + 285 )); // ()
    sc_dt::sc_uint<32> x13 = sc_dt::sc_uint<32>(( x12 * 806 )); // ()
    sc_dt::sc_int<26> x14 = sc_dt::sc_int<26>(( x13.range(28, 14) - 365 )); // ()
    sc_dt::sc_fixed<44,21> x15 = sc_dt::sc_fixed<44,21>(( ( x14.range(6, 2) - (-480) ) + (-183) )); // ()
    sc_dt::sc_fixed<55,13> x16 = sc_dt::sc_fixed<55,13>(x15); // ()
    sc_dt::sc_uint<12> x17 = sc_dt::sc_uint<12>(x16.range(24, 8)); // ()
    sc_dt::sc_int<23> x18 = sc_dt::sc_int<23>(x17[0]); // ()
    sc_dt::sc_int<46> x19 = sc_dt::sc_int<46>(( x18.range(4, 3) + 489 )); // ()
    sc_dt::sc_fixed<37,20> x20 = sc_dt::sc_fixed<37,20>(( ( ( ( x19 * 277 ) - 809 ) - 506 ) * 298 )); // ()
    sc_dt::sc_int<62> x21 = sc_dt::sc_int<62>(x20.range(22, 14)); // ()
    sc_dt::sc_uint<27> x22 = sc_dt::sc_uint<27>(( ( x21 * (-65) ) - (-1014) )); // ()
    sc_dt::sc_fixed<7,6> x23 = sc_dt::sc_fixed<7,6>(x22[7]); // ()
    sc_dt::sc_int<63> x24 = sc_dt::sc_int<63>(x23.range(6, 2)); // ()
    sc_dt::sc_int<35> x25 = sc_dt::sc_int<35>(( ( x24.range(32, 20) - 1006 ) - 208 )); // ()
    sc_dt::sc_ufixed<31,23> x26 = sc_dt::sc_ufixed<31,23>(( x25.range(14, 2) * (-34) )); // ()
    sc_dt::sc_fixed<33,29> x27 = sc_dt::sc_fixed<33,29>(x26); // ()
    sc_dt::sc_uint<25> x28 = sc_dt::sc_uint<25>(x27.range(17, 10)); // ()
    sc_dt::sc_uint<55> x29 = sc_dt::sc_uint<55>((x28[8]
                                                 ? (-138)
                                                 : (-502))); // ()
    sc_dt::sc_int<31> x30 = sc_dt::sc_int<31>(( x29 + (-651) )); // ()
    sc_dt::sc_int<44> x31 = sc_dt::sc_int<44>(x30[19]); // ()
    sc_dt::sc_int<22> x32 = sc_dt::sc_int<22>(x31); // ()
    sc_dt::sc_ufixed<41,0> x33 = sc_dt::sc_ufixed<41,0>((x32[15]
                                                         ? (-795)
                                                         : 643)); // ()
    sc_dt::sc_fixed<11,8> x34 = sc_dt::sc_fixed<11,8>(x33); // ()
    sc_dt::sc_ufixed<23,3> x35 = sc_dt::sc_ufixed<23,3>(x34); // ()
    sc_dt::sc_ufixed<44,26> x36 = sc_dt::sc_ufixed<44,26>(x35); // ()
    sc_dt::sc_int<34> x37 = sc_dt::sc_int<34>(x36.range(1, 0)); // ()
    sc_dt::sc_uint<50> x38 = sc_dt::sc_uint<50>(x37.range(28, 1)); // ()
    sc_dt::sc_int<23> x39 = sc_dt::sc_int<23>(x38[4]); // ()
    sc_dt::sc_uint<34> x40 = sc_dt::sc_uint<34>(( x39.range(9, 1) + (-179) )); // ()
    sc_dt::sc_fixed<25,11> x41 = sc_dt::sc_fixed<25,11>(( ( ( x40 * (-850) ) - 119 ) + 753 )); // ()
    sc_dt::sc_fixed<15,8> x42 = sc_dt::sc_fixed<15,8>(x41); // ()
    sc_dt::sc_ufixed<30,9> x43 = sc_dt::sc_ufixed<30,9>(x42); // ()
    sc_dt::sc_int<28> x44 = sc_dt::sc_int<28>(x43.range(16, 16)); // ()
    sc_dt::sc_fixed<42,30> x45 = sc_dt::sc_fixed<42,30>(x44.range(13, 10)); // ()
    sc_dt::sc_uint<50> x46 = sc_dt::sc_uint<50>(x45.range(7, 3)); // ()
    sc_dt::sc_int<24> x47 = sc_dt::sc_int<24>(( x46.range(18, 4) - (-882) )); // ()
    sc_dt::sc_int<56> x48 = sc_dt::sc_int<56>(( x47.range(9, 7) * (-88) )); // ()
    sc_dt::sc_uint<64> x49 = sc_dt::sc_uint<64>(x48.range(22, 21)); // ()
    sc_dt::sc_int<11> x50 = sc_dt::sc_int<11>(( x49 * (-228) )); // ()
    sc_dt::sc_ufixed<52,24> x51 = sc_dt::sc_ufixed<52,24>(x50.range(10, 0)); // ()
    return x51; // ()
}

#include<Hector.h>

void impl() {
    
    sc_dt::sc_ufixed<52,24> out;

    
    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = dut();
    Hector::endCapture();
}
