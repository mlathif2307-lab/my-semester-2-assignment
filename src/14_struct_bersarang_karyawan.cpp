// Program Struct Bersarang (Nested Struct)
// Struct Karyawan berisi struct Alamat di dalamnya

#include <iostream>
#include <string>
using namespace std;

struct Alamat {
    string jalan;
    string kota;
    string provinsi;
};

struct Karyawan {
    string nama;
    int umur;
    string jenisKelamin;
    Alamat domisili;
};

void tampilkanKaryawan(Karyawan i) {
    cout << "=== DATA KARYAWAN ===" << endl;
    cout << "Nama          : " << i.nama << endl;
    cout << "Umur          : " << i.umur << " Tahun" << endl;
    cout << "Jenis Kelamin : " << i.jenisKelamin << endl;
    cout << "Alamat        : " << i.domisili.jalan << ", "
         << i.domisili.kota << ", " << i.domisili.provinsi << endl;
    cout << "----------------------" << endl;
}

int main() {
    Karyawan karyawan1;

    karyawan1.nama = "Lathif";
    karyawan1.umur = 18;
    karyawan1.jenisKelamin = "Laki-laki";

    karyawan1.domisili.jalan = "Jl. Gurame No. 1";
    karyawan1.domisili.kota = "Bekasi";
    karyawan1.domisili.provinsi = "Jawa Barat";

    tampilkanKaryawan(karyawan1);

    return 0;
}
