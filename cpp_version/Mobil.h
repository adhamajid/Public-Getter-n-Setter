#ifndef MOBIL_H
#define MOBIL_H

#include <string>
using namespace std;

class Mobil {
private:
    string merk;
    int tahun;

public:
    // Konstruktor
    Mobil(string m, int t);

    // Fungsi untuk menampilkan info mobil
    void tampilkanInfo();

    // Setter untuk merk
    void setMerk(string m);

    // Getter untuk merk
    string getMerk();
};

#endif // MOBIL_H
