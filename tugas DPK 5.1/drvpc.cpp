#include "pc.h"
#include <iostream>
 
using namespace std;

int main() {
    PulseCounter pc;
    cout << "Masukkan NoKBU: "; cin >> pc.NoKBU;

    cout << "Masukkan Jam Mulai (HH): ";
    int jamMulai; cin >> jamMulai;
    
    pc.JamMulai.SetJam(jamMulai);
    cout << "Masukkan Menit Mulai (MM): ";
    
    int menitMulai; cin >> menitMulai;
    pc.JamMulai.SetMenit(menitMulai);
    cout << "Masukkan Detik Mulai (SS): ";
    
    int detikMulai; cin >> detikMulai;
    pc.JamMulai.SetDetik(detikMulai);

    cout << "Masukkan Jam Selesai (HH): ";
    int jamSelesai;
    cin >> jamSelesai;
    pc.JamSelesai.SetJam(jamSelesai);
    cout << "Masukkan Menit Selesai (MM): ";
    
    int menitSelesai;cin >> menitSelesai;
    pc.JamSelesai.SetMenit(menitSelesai);
    cout << "Masukkan Detik Selesai (SS): ";
    
    int detikSelesai; cin >> detikSelesai;
    pc.JamSelesai.SetDetik(detikSelesai);

    cout << "Jumlah Pulsa: " << pc.HitungPulsa() << endl;
    cout << "Biaya Percakapan: " << pc.HitungBiayaPercakapan() << " rupiah" << std::endl;

    return 0;
}
