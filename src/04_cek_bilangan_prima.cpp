// Program Cek Bilangan Prima
// Mengecek apakah angka yang diinput merupakan bilangan prima

#include <iostream>
using namespace std;

int main() {
    int n, i, flag = 0;

    cout << "Masukkan sebuah bilangan: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " bukan bilangan prima." << endl;
        return 0;
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

    return 0;
}
