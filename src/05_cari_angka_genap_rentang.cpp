// Program Mencari Angka Genap dalam Rentang
// Contoh: input awal 5, input akhir 15, maka output: 6 8 10 12 14

#include <iostream>
using namespace std;

int main() {
    int angka_awal, angka_akhir;

    cout << "Masukkan angka genap awal: ";
    cin >> angka_awal;
    cout << "Masukkan angka genap akhir: ";
    cin >> angka_akhir;

    cout << "Angka genap antara " << angka_awal << " dan " << angka_akhir << ": ";
    for (int i = angka_awal; i <= angka_akhir; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
