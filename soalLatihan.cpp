#include <iostream>
using namespace std;

int main() {
    int pilihan, tujuan;
    double berat, totalBiaya = 0;

    cout << "1. JNE" << endl;
    cout << "2. SiCepat" << endl;
    cout << "3. Gojek" << endl;
    cout << "Pilih kurir (1/2/3) : ";
    cin >> pilihan;

    cout << "Berat barang (kg) : ";
    cin >> berat;

    if (pilihan == 1) {
        cout << "Tujuan (1. Dalam Kota, 2. Luar Kota): ";
        cin >> tujuan;
        if (tujuan == 1) 
            totalBiaya = berat * 10000;
        else 
            totalBiaya = berat * 20000;

        if (berat > 10) {
            totalBiaya = totalBiaya * 0.5; // Diskon 50%
            cout << "(Diskon 50% karena berat > 10 kg)" << endl;
        }
    } 
    else if (pilihan == 2) {
        cout << "Tujuan (1. Dalam Kota, 2. Luar Kota): ";
        cin >> tujuan;
        if (tujuan == 1) 
            totalBiaya = berat * 8000;
        else 
            totalBiaya = berat * 18000;

        if (berat > 15) {
            totalBiaya = 0;
            cout << "(Gratis ongkir karena barang lebih dari 15 kg)" << endl;
        }
    } 
    else if (pilihan == 3) {
        totalBiaya = berat * 12000;
        if (berat > 5) {
            totalBiaya = totalBiaya - 10000; // Potongan 10rb
            cout << "(Diskon Rp10.000 karena berat > 5 kg)" << endl;
        }
    } 
    else {
        cout << "Pilihan tidak valid" << endl;    }

    cout << "Total Bayar : Rp " << totalBiaya << endl;

    return 0;
}
