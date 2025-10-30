// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
#include "Mobil.h"
#include "PemilikMobil.h"
using namespace std;

int main() {
    // Membuat objek mobil pertama
    Mobil mobil1("Toyota", 2020);

    // Membuat objek pemilik dan menghubungkannya dengan mobil1
    PemilikMobil pemilik("John Doe", mobil1);

    // Menampilkan informasi pemilik dan mobil
    pemilik.tampilkanInfoPemilik();

    // Mengubah merk mobil
    mobil1.setMerk("Honda");

    // Ganti mobil pada pemilik
    pemilik.gantiMobil(mobil1);

    // Menampilkan lagi setelah mengganti merk mobil
    cout << "\nSetelah mengganti merk mobil:\n";
    pemilik.tampilkanInfoPemilik();

    return 0;
}

