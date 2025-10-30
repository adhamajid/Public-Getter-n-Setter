#ifndef PEMILIKMOBIL_H
#define PEMILIKMOBIL_H

#include "Mobil.h"
#include <string>
using namespace std;

class PemilikMobil {
private:
    string nama;
    Mobil mobil;  // Komposisi: Pemilik memiliki mobil

public:
    // Konstruktor
    PemilikMobil(string n, Mobil m);

    // Fungsi untuk menampilkan informasi pemilik dan mobil
    void tampilkanInfoPemilik();

    // Fungsi untuk mengganti mobil
    void gantiMobil(Mobil m);
};

#endif // PEMILIKMOBIL_H
