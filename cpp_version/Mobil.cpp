#include "Mobil.h"
#include <iostream>
using namespace std;

// Konstruktor untuk inisialisasi merk dan tahun
Mobil::Mobil(string m, int t) {
    merk = m;
    tahun = t;
}

// Fungsi untuk menampilkan informasi mobil
void Mobil::tampilkanInfo() {
    cout << "Merk Mobil: " << merk << endl;
    cout << "Tahun Pembuatan: " << tahun << endl;
}

// Setter untuk merk
void Mobil::setMerk(string m) {
    merk = m;
}

// Getter untuk merk
string Mobil::getMerk() {
    return merk;
}
