#include <iostream>

using namespace std;

int cekTransportasi(int jam) {
    if ((jam >= 6 && jam <= 8) || (jam >= 15 && jam <= 17)) {
        return 1;
    }
    else if (jam >= 7 && jam <= 18) {
        return 2;
    }
  else {
        return 3;
    }
}

int main() {
    int jamBerangkat, jamPulang;
    int totalBiaya = 0;
    int kode; // Variabel untuk menyimpan kode transportasi (1/2/3)

    // Input jam keberangkatan dan kepulangan
    cout << "Masukkan jam keberangkatan (1-24): ";
    cin >> jamBerangkat;
    cout << "Masukkan jam kepulangan (1-24): ";
    cin >> jamPulang;


    kode = cekTransportasi(jamBerangkat);
    cout << "Transportasi Berangkat: ";

    // Cek kode untuk menentukan output dan biaya
    switch (kode) {
        case 1:
            cout << "Bus Linus" << endl;
            totalBiaya += 0; // Gratis
            break;
        case 2:
            cout << "Bus Hijau" << endl;
            totalBiaya += 5000;
            break;
        default: // Case 3
            cout << "Angkot" << endl;
            totalBiaya += 10000;
            break;
    }

    kode = cekTransportasi(jamPulang);
    cout << "Transportasi Pulang   : ";

    // Cek kode untuk menentukan output dan biaya
    switch (kode) {
        case 1:
            cout << "Bus Linus" << endl;
            totalBiaya += 0; // Gratis
            break;
        case 2:
            cout << "Bus Hijau" << endl;
            totalBiaya += 5000;
            break;
        default: // Case 3
            cout << "Angkot" << endl;
            totalBiaya += 10000;
            break;
    }

    cout << "Total Biaya           : Rp " << totalBiaya << endl;

    return 0;
}
