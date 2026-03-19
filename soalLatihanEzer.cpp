#include <iostream>
using namespace std;

int main() {
    int opsiKurir, areaTujuan;
    double bobotPaket, nominalBayar = 0;

    cout << "=== Layanan Pengiriman ===" << endl;
    cout << "1. JNE" << endl;
    cout << "2. SiCepat" << endl;
    cout << "3. Gojek" << endl;
    cout << "Masukkan pilihan kurir (1/2/3) : "<< endl;
    cin >> opsiKurir;

    cout << "Masukkan berat barang (kg) : ";
    cin >> bobotPaket;

    if (opsiKurir == 1) {
        cout << "Pilih Tujuan (1. Dalam Kota, 2. Luar Kota): ";
        cin >> areaTujuan;
        

        if (areaTujuan == 1) 
            nominalBayar = bobotPaket * 10000;
        else 
            nominalBayar = bobotPaket * 20000;

        if (bobotPaket > 10) {
            nominalBayar = nominalBayar * 0.5; // Diskon 50%
            cout << "(Anda mendapat Diskon 50% karena berat > 10 kg)" << endl;
        }
    } 
    else if (opsiKurir == 2) {
        cout << "Pilih Tujuan (1. Dalam Kota, 2. Luar Kota): ";
        cin >> areaTujuan;
        
        if (areaTujuan == 1) 
            nominalBayar = bobotPaket * 8000;
        else 
            nominalBayar = bobotPaket * 18000;

        if (bobotPaket > 15) {
            nominalBayar = 0;
            cout << "(Gratis ongkir karena barang lebih dari 15 kg)" << endl;
        }
    } 
    else if (opsiKurir == 3) {
        // Harga kembali ke nilai asli: 12000
        nominalBayar = bobotPaket * 12000;
        
        if (bobotPaket > 5) {
            nominalBayar = nominalBayar - 10000; // Potongan 10rb
            cout << "(Potongan Rp10.000 karena berat > 5 kg)" << endl;
        }
    } 
    else {
        cout << "Pilihan yang Anda masukkan tidak valid" << endl;
    }

    cout << "=================================" << endl;
    cout << "Total Yang Harus Dibayar : Rp " << nominalBayar << endl;

    return 0;
}
