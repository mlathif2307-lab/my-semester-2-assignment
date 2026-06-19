// Program Menu Pilihan
// 1. Cari bilangan ganjil dalam rentang
// 2. Cek bilangan prima
// 3. Hitung luas lingkaran

#include <iostream>
using namespace std;

int main() {
    int menu;
    cout << "1. Cari bilangan ganjil" << endl;
    cout << "2. Cari bilangan prima" << endl;
    cout << "3. Cari luas lingkaran" << endl;
    cout << "Pilih menu: ";
    cin >> menu;

    switch (menu) {
        case 1: {
            int angka_awal, angka_akhir;

            cout << "Masukkan angka awal: ";
            cin >> angka_awal;
            cout << "Masukkan angka akhir: ";
            cin >> angka_akhir;

            cout << "Angka ganjil antara " << angka_awal << " dan " << angka_akhir << ": ";
            for (int i = angka_awal; i <= angka_akhir; i++) {
                if (i % 2 != 0) {
                    cout << i << " ";
                }
            }
            cout << endl;
            break;
        }

        case 2: {
            int n, i, flag = 0;
            cout << "Masukkan angka: ";
            cin >> n;
            if (n <= 1) {
                cout << n << " bukan bilangan prima." << endl;
                break;
            }
            for (i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << n << " adalah bilangan prima." << endl;
            else
                cout << n << " bukan bilangan prima." << endl;
            break;
        }

        case 3: {
            const double PI = 3.14;
            double radius;
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> radius;
            cout << "Luas lingkaran: " << PI * radius * radius << endl;
            break;
        }

        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
