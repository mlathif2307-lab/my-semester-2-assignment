// Program Pola Piramida Bintang
// Menampilkan piramida bintang sesuai tinggi yang diinput user

#include <iostream>
using namespace std;

int main() {
    int tinggi, i, j, k;

    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;

    for (i = 1; i <= tinggi; i++) {
        // Spasi di kiri agar membentuk piramida
        for (j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }

        // Bintang
        for (k = 1; k <= i; k++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
