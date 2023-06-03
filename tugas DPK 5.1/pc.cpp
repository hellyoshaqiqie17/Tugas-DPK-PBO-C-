#include "pc.h"
#include <cmath>

int PulseCounter::HitungPulsa() {
    double lama;
    float pulsa;
    lama = JamSelesai.ConvertDetik() - JamMulai.ConvertDetik();
    pulsa = lama / 30;
    return ceil(pulsa);
}

int PulseCounter::HitungBiayaPercakapan() {
    int jumlahPulsa = HitungPulsa();
    int tarifPerPulsa = 500;
    int biayaPercakapan = jumlahPulsa * tarifPerPulsa;
    return biayaPercakapan;
}