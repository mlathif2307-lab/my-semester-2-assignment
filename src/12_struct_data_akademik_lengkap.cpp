// Program Data Akademik (Mahasiswa, Dosen, Mata Kuliah)
// Input data 3 entitas berbeda lalu tampilkan rekap seluruhnya

#include <iostream>
#include <string>
using namespace std;

// ============ DEFINISI STRUCT ============

struct Mahasiswa {
    string nama;
    string nim;
    float  ipk;
};

struct Dosen {
    string noDosen;
    string namaDosen;
    string alamat;
    string noTelpon;
    string email;
};

struct Matkul {
    string noMatkul;
    string namaMatkul;
    int    jumlahSks;
};

int main() {
    int jumlahMhs, jumlahDosen, jumlahMatkul;

    // =========== BAGIAN MAHASISWA ===========
    cout << "Masukkan jumlah mahasiswa: ";
    cin  >> jumlahMhs;
    Mahasiswa daftarMhs[jumlahMhs];

    cout << "\n=== INPUT DATA MAHASISWA ===\n";
    for (int i = 0; i < jumlahMhs; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama : "; cin.ignore();
        getline(cin, daftarMhs[i].nama);
        cout << "NIM  : "; cin >> daftarMhs[i].nim;
        cout << "IPK  : "; cin >> daftarMhs[i].ipk;
        cout << endl;
    }
    cout << "=== TAMPILAN DATA MAHASISWA ===\n";
    cout << "---------------------------------------------\n";
    cout << "No\tNIM\t\tIPK\tNama\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < jumlahMhs; i++) {
        cout << i+1 << "\t" << daftarMhs[i].nim << "\t"
             << daftarMhs[i].ipk << "\t" << daftarMhs[i].nama << endl;
    }
    cout << "---------------------------------------------\n";

    // ============= BAGIAN DOSEN =============
    cout << "\nMasukkan jumlah dosen: ";
    cin  >> jumlahDosen;
    Dosen daftarDosen[jumlahDosen];

    cout << "\n=== INPUT DATA DOSEN ===\n";
    for (int i = 0; i < jumlahDosen; i++) {
        cout << "Data Dosen ke-" << i + 1 << endl;
        cout << "No. Dosen  : "; cin.ignore();
        getline(cin, daftarDosen[i].noDosen);
        cout << "Nama       : ";
        getline(cin, daftarDosen[i].namaDosen);
        cout << "Alamat     : ";
        getline(cin, daftarDosen[i].alamat);
        cout << "No. Telpon : ";
        getline(cin, daftarDosen[i].noTelpon);
        cout << "Email      : ";
        getline(cin, daftarDosen[i].email);
        cout << endl;
    }
    cout << "=== TAMPILAN DATA DOSEN ===\n";
    cout << "----------------------------------------------------------\n";
    cout << "No\tNo.Dosen\tNama\t\tAlamat\t\tTelpon\t\tEmail\n";
    cout << "----------------------------------------------------------\n";
    for (int i = 0; i < jumlahDosen; i++) {
        cout << i+1 << "\t" << daftarDosen[i].noDosen << "\t"
             << daftarDosen[i].namaDosen << "\t" << daftarDosen[i].alamat << "\t"
             << daftarDosen[i].noTelpon  << "\t" << daftarDosen[i].email  << endl;
    }
    cout << "----------------------------------------------------------\n";

    // ============ BAGIAN MATA KULIAH ============
    cout << "\nMasukkan jumlah mata kuliah: ";
    cin  >> jumlahMatkul;
    Matkul daftarMatkul[jumlahMatkul];

    cout << "\n=== INPUT DATA MATA KULIAH ===\n";
    for (int i = 0; i < jumlahMatkul; i++) {
        cout << "Data Mata Kuliah ke-" << i + 1 << endl;
        cout << "No. Matkul  : "; cin.ignore();
        getline(cin, daftarMatkul[i].noMatkul);
        cout << "Nama Matkul : ";
        getline(cin, daftarMatkul[i].namaMatkul);
        cout << "Jumlah SKS  : "; cin >> daftarMatkul[i].jumlahSks;
        cout << endl;
    }
    cout << "=== TAMPILAN DATA MATA KULIAH ===\n";
    cout << "---------------------------------------------\n";
    cout << "No\tNo.Matkul\tNama Matkul\t\tSKS\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < jumlahMatkul; i++) {
        cout << i+1 << "\t" << daftarMatkul[i].noMatkul << "\t"
             << daftarMatkul[i].namaMatkul << "\t" << daftarMatkul[i].jumlahSks << endl;
    }
    cout << "---------------------------------------------\n";

    // =============== REKAP SELURUH DATA ===============
    cout << "\n========================================\n";
    cout << "       REKAP SELURUH DATA AKADEMIK      \n";
    cout << "========================================\n";

    cout << "\n[ DATA MAHASISWA ]\n";
    cout << "---------------------------------------------\n";
    cout << "No\tNIM\t\tIPK\tNama\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < jumlahMhs; i++) {
        cout << i+1 << "\t" << daftarMhs[i].nim << "\t"
             << daftarMhs[i].ipk << "\t" << daftarMhs[i].nama << endl;
    }
    cout << "---------------------------------------------\n";

    cout << "\n[ DATA DOSEN ]\n";
    cout << "----------------------------------------------------------\n";
    cout << "No\tNo.Dosen\tNama\t\tAlamat\t\tTelpon\t\tEmail\n";
    cout << "----------------------------------------------------------\n";
    for (int i = 0; i < jumlahDosen; i++) {
        cout << i+1 << "\t" << daftarDosen[i].noDosen << "\t"
             << daftarDosen[i].namaDosen << "\t" << daftarDosen[i].alamat << "\t"
             << daftarDosen[i].noTelpon  << "\t" << daftarDosen[i].email  << endl;
    }
    cout << "----------------------------------------------------------\n";

    cout << "\n[ DATA MATA KULIAH ]\n";
    cout << "---------------------------------------------\n";
    cout << "No\tNo.Matkul\tNama Matkul\t\tSKS\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < jumlahMatkul; i++) {
        cout << i+1 << "\t" << daftarMatkul[i].noMatkul << "\t"
             << daftarMatkul[i].namaMatkul << "\t" << daftarMatkul[i].jumlahSks << endl;
    }
    cout << "---------------------------------------------\n";
    cout << "\n======= SELESAI =======\n";

    return 0;
}
