// Program Input Angka ke Vector dan Cek Prima
// Menggunakan vector untuk menyimpan 4 angka, lalu mengecek masing-masing apakah prima

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool apakahPrima(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> daftarAngka;
    int angka;

    cout << "Fungsi" << endl;
    cout << "input :" << endl;
    cout << "Masukkan Angka ke :" << endl;

    for (int i = 1; i <= 4; i++) {
        cout << i << ". ";
        cin >> angka;
        daftarAngka.push_back(angka);
    }

    cout << "\nOutput :" << endl;
    cout << "\nAngka :" << endl;

    for (size_t i = 0; i < daftarAngka.size(); i++) {
        cout << i + 1 << ". ";
        if (apakahPrima(daftarAngka[i])) {
            cout << daftarAngka[i] << " adalah bilangan prima" << endl;
        } else {
            cout << daftarAngka[i] << " adalah bukan prima" << endl;
        }
    }

    return 0;
}
