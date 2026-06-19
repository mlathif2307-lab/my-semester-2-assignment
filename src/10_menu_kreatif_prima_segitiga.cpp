// Program Menu Kreatif
// Gabungan: cari bilangan prima, tampilkan hasil, dan hitung luas segitiga

#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk mengecek apakah sebuah angka adalah bilangan prima
bool apakahPrima(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Fungsi untuk menghitung luas segitiga
double hitungLuasSegitiga(double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}

int main() {
    int pilihan, batas;
    vector<int> daftarPrima;

    do {
        cout << "\n=== MENU PROGRAM KREATIF ===" << endl;
        cout << "1. Cari Bilangan Prima (Hingga Batas N)" << endl;
        cout << "2. Tampilkan Hasil Pencarian Prima Terakhir" << endl;
        cout << "3. Hitung Luas Segitiga" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                daftarPrima.clear();
                cout << "Masukkan batas angka maksimal: ";
                cin >> batas;

                for (int i = 2; i <= batas; i++) {
                    if (apakahPrima(i)) {
                        daftarPrima.push_back(i);
                    }
                }
                cout << "Pencarian selesai! " << daftarPrima.size() << " bilangan ditemukan." << endl;
                break;

            case 2:
                if (daftarPrima.empty()) {
                    cout << "Belum ada data prima. Silakan cari di menu 1 terlebih dahulu." << endl;
                } else {
                    cout << "Bilangan prima yang ditemukan: " << endl;
                    for (int p : daftarPrima) {
                        cout << p << " ";
                    }
                    cout << endl;
                }
                break;

            case 3: {
                double a, t;
                cout << "--- Hitung Luas Segitiga ---" << endl;
                cout << "Masukkan panjang alas: ";
                cin >> a;
                cout << "Masukkan tinggi segitiga: ";
                cin >> t;

                double luas = hitungLuasSegitiga(a, t);
                cout << "Luas Segitiga dengan alas " << a << " dan tinggi " << t
                     << " adalah: " << luas << endl;
                break;
            }

            case 4:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 4);

    return 0;
}
