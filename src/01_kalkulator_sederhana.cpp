// Program Kalkulator Sederhana
// Menerima dua angka dan satu operator, lalu menampilkan hasilnya

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Hasil: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Hasil: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Hasil: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Hasil: " << num1 / num2 << endl;
            } else {
                cout << "Error: Tidak bisa membagi dengan nol!" << endl;
            }
            break;
        default:
            cout << "Operator tidak valid" << endl;
            break;
    }

    return 0;
}
