#include "pc.h"
#include <iostream>

using namespace std;

int main() {
    PulseCounter pc;
    cout << "Masukkan NoKBU: "; cin >> pc.NoKBU;
    cout << "Masukkan Jam Mulai (HH MM SS): ";
    int jamMulai, menitMulai, detikMulai; cin >> jamMulai >> menitMulai >> detikMulai;
    
    pc.JamMulai.AssignClock(jamMulai, menitMulai, detikMulai);
    cout << "Masukkan Jam Selesai (HH MM SS): ";
    
    int jamSelesai, menitSelesai, detikSelesai; cin >> jamSelesai >> menitSelesai >> detikSelesai;
    pc.JamSelesai.AssignClock(jamSelesai, menitSelesai, detikSelesai);
    
    cout << "Jumlah Pulsa: " << pc.HitungPulsa() << endl;
    cout << "Biaya Percakapan: " << pc.HitungBiayaPercakapan() << " rupiah" << endl;
    return 0;
}
