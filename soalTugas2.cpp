#include <iostream>

using namespace std;

int main() {
    int bilangan;

    // Input bilangan 4 digit
    cout << "Masukkan bilangan 4 digit: ";
    cin >> bilangan;

    // Memecah bilangan menjadi 4 digit terpisah
    int d1 = bilangan / 1000;       // Digit pertama (ribuan)
    int d2 = (bilangan / 100) % 10; // Digit kedua (ratusan)
    int d3 = (bilangan / 10) % 10;  // Digit ketiga (puluhan)
    int d4 = bilangan % 10;         // Digit keempat (satuan)

    // Variabel penanda status (true/false)
    bool isAlfa = false;
    bool isBeta = false;

    // 1. Cek Syarat Alfa
    // Monoton naik: d1 < d2 < d3 < d4
    bool naik = (d1 < d2) && (d2 < d3) && (d3 < d4);
    // Monoton turun: d1 > d2 > d3 > d4
    bool turun = (d1 > d2) && (d2 > d3) && (d3 > d4);

    if (naik || turun) {
        isAlfa = true;
    }

    // 2. Cek Syarat Beta
    // Mengambil 2 digit pertama dan 2 digit terakhir
    int duaPertama = bilangan / 100;
    int duaTerakhir = bilangan % 100;

    // Menghitung selisih (selalu positif)
    int selisih = duaPertama - duaTerakhir;
    if (selisih < 0) {
        selisih = -selisih; // Ubah negatif jadi positif
    }

    if (selisih >= 30) {
        isBeta = true;
    }

    // 3. Klasifikasi Output
    // Gamma: Memenuhi syarat Alfa DAN Beta
    if (isAlfa && isBeta) {
        cout << "Tipe: Gamma" << endl;
    }
    // Alfa: Hanya memenuhi syarat Alfa
    else if (isAlfa) {
        cout << "Tipe: Alfa" << endl;
    }
    // Beta: Hanya memenuhi syarat Beta
    else if (isBeta) {
        cout << "Tipe: Beta" << endl;
    }
    // Delta: Tidak memenuhi syarat apapun
    else {
        cout << "Tipe: Delta" << endl;
    }

    return 0;
}
