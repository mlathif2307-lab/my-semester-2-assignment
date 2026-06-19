// Program Input Angka Berulang
// Loop akan terus berjalan sampai user memasukkan angka -1

#include <iostream>
using namespace std;

int main() {
    int angka = 0;

    while (angka != -1) {
        cout << "Masukkan angka: ";
        cin >> angka;

        cout << "Angka yang dimasukkan: " << angka << endl;

        if (angka == -1) {
            cout << "terimakasih." << endl;
        }
    }

    return 0;
}
