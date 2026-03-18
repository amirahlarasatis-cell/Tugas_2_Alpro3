#include <iostream>

using namespace std;

int main() {
    float ip, gaji;

    cout << "Masukkan IP mahasiswa: ";
    cin >> ip;
    cout << "Masukkan Gaji Orang Tua (dalam juta): ";
    cin >> gaji;



    // 1. Cek Syarat Kategori 4 (IP >= 3.5 otomatis)
    if (ip >= 3.5) {
        cout << "Kategori beasiswa: 4" << endl;
    } 
    // Jika IP < 3.5, cek syarat kategori lainnya
    else {
        // 2. Cek Syarat Kategori 1 (Gaji < 1 juta)
        if (gaji < 1.0) {
            cout << "Kategori beasiswa: 1" << endl;
        } 
        // 3. Cek Syarat Kategori 2 atau 3 (Gaji 1 - 5 juta)
        else if (gaji >= 1.0 && gaji <= 5.0) {
            // Cek sub-kondisi IP untuk membedakan kategori 2 dan 3
            if (ip >= 2.0) {
                cout << "Kategori beasiswa: 3" << endl;
            } 
            else {
                cout << "Kategori beasiswa: 2" << endl;
            }
        } 
        // 4. Jika tidak memenuhi kriteria di atas (misal: IP < 3.5 dan Gaji > 5 juta)
        else {
            cout << "Tidak berhak mendapatkan beasiswa" << endl;
        }
    }

    return 0;
}
