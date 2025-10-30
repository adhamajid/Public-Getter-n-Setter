#include "PemilikMobil.h"
#include <iostream>
using namespace std;

// Konstruktor untuk inisialisasi nama pemilik dan mobil
PemilikMobil::PemilikMobil(string n, Mobil m) : nama(n), mobil(m) {}

// Fungsi untuk menampilkan informasi pemilik dan mobil
void PemilikMobil::tampilkanInfoPemilik() {
    cout << "Nama Pemilik: " << nama << endl;
    mobil.tampilkanInfo();  // Memanggil fungsi dari kelas Mobil
}

// Fungsi untuk mengganti mobil
void PemilikMobil::gantiMobil(Mobil m) {
    mobil = m;
}
