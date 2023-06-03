#include "pc.h"
#include <iostream>

int main() {
    PulseCounter pc;
    std::cout << "Masukkan NoKBU: ";
    std::cin >> pc.NoKBU;
    std::cout << "Masukkan Jam Mulai (HH MM SS): ";
    int jamMulai, menitMulai, detikMulai;
    std::cin >> jamMulai >> menitMulai >> detikMulai;
    pc.JamMulai.AssignClock(jamMulai, menitMulai, detikMulai);
    std::cout << "Masukkan Jam Selesai (HH MM SS): ";
    int jamSelesai, menitSelesai, detikSelesai;
    std::cin >> jamSelesai >> menitSelesai >> detikSelesai;
    pc.JamSelesai.AssignClock(jamSelesai, menitSelesai, detikSelesai);
    std::cout << "Jumlah Pulsa: " << pc.HitungPulsa() << std::endl;
    std::cout << "Biaya Percakapan: " << pc.HitungBiayaPercakapan() << " rupiah" << std::endl;
    return 0;
}