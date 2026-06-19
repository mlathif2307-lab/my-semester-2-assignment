// Program Struct Mahasiswa
// Input dan tampilkan data mahasiswa menggunakan array of struct dinamis

#include <iostream>
#include <string>
using namespace std;

// Definisi struct
struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

int main() {
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    // Membuat array of struct secara dinamis berdasarkan input user
    Mahasiswa daftarMhs[jumlah];

    // Proses Input Data
    cout << "\n=== INPUT DATA MAHASISWA ===\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama : ";
        cin.ignore(); // Membersihkan buffer input sebelum membaca string
        getline(cin, daftarMhs[i].nama); // Menggunakan getline agar bisa membaca spasi
        cout << "NIM  : ";
        cin >> daftarMhs[i].nim;
        cout << "IPK  : ";
        cin >> daftarMhs[i].ipk;
        cout << endl;
    }

    // Proses Output Data
    cout << "=== TAMPILAN DATA MAHASISWA ===\n";
    cout << "---------------------------------------------\n";
    cout << "No\tNIM\t\tIPK\tNama\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << "\t"
             << daftarMhs[i].nim << "\t"
             << daftarMhs[i].ipk << "\t"
             << daftarMhs[i].nama << endl;
    }
    cout << "---------------------------------------------\n";

    return 0;
}
