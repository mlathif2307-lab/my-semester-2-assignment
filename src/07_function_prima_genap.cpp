// Program Function: Cek Prima dan Genap
// Menggunakan function terpisah untuk mengecek bilangan prima dan genap

#include <iostream>
using namespace std;

// Mengecek apakah n adalah bilangan prima
bool prima(int n) {
    // Bilangan <= 1 bukan prima
    if (n <= 1) return false;
    // Bilangan 2 dan 3 adalah prima
    if (n <= 3) return true;
    // Eliminasi kelipatan 2 dan 3 untuk mempercepat proses
    if (n % 2 == 0 || n % 3 == 0) return false;
    // Cek pembagi menggunakan pola 6k +/- 1 hingga akar n
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Mengecek apakah k adalah bilangan genap
bool genap(int k) {
    if (k % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    int k;
    int awal;
    int akhir;

    cout << "Masukkan angka: ";
    cin >> n;

    if (prima(n)) {
        cout << n << " adalah bilangan prima." << endl;
    } else {
        cout << n << " bukan bilangan prima." << endl;
    }

    cout << "Masukan angka awal : ";
    cin >> awal;
    cout << "Masukan angka akhir : ";
    cin >> akhir;

    cout << "\nHasil pengecekan rentang angka:" << endl;
    for (k = awal; k <= akhir; k++) {
        if (genap(k)) {
            cout << k << " adalah bilangan genap." << endl;
        } else {
            cout << k << " adalah bilangan ganjil." << endl;
        }
    }

    return 0;
}
