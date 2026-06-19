// Program Demonstrasi Pass by Value
// Menunjukkan bahwa fungsi dengan pass by value tidak mengubah nilai aslinya

#include <iostream>
using namespace std;

struct Koordinat {
    int x;
    int y;
};

// Fungsi Pass by Value (menerima salinan)
void ubahAngka(Koordinat titikSalinan) {
    titikSalinan.x = 99; // Hanya mengubah salinannya
}

int main() {
    Koordinat titikAsli;
    titikAsli.x = 10;
    titikAsli.y = 20;

    // Memanggil fungsi
    ubahAngka(titikAsli);

    // Cek apakah nilai asli berubah?
    cout << "Nilai x asli: " << titikAsli.x << endl;
    // Hasilnya tetap 10, bukan 99!

    return 0;
}
