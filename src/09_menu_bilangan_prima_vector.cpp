// Program Menu Bilangan Prima
// Mencari semua bilangan prima hingga batas N dan menyimpannya di vector

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

int main() {
    int pilihan, batas;
    vector<int> daftarPrima; // Menggunakan vector (dynamic array) agar lebih fleksibel

    do {
        cout << "\n=== MENU BILANGAN PRIMA ===" << endl;
        cout << "1. Cari Bilangan Prima (Hingga Batas N)" << endl;
        cout << "2. Tampilkan Hasil Pencarian Terakhir" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                daftarPrima.clear(); // Reset array
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
                    cout << "Belum ada data. Silakan cari di menu 1 terlebih dahulu." << endl;
                } else {
                    cout << "Bilangan prima yang ditemukan: " << endl;
                    for (int p : daftarPrima) {
                        cout << p << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                cout << "Terima kasih!" << endl;
                break;

            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 3);

    return 0;
}
