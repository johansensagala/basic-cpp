#include <iostream>
using namespace std;

int main () {
    int batas_bawah;
    int batas_atas;
    int kelipatan;
    int jumlah_angka = 0;

    cout << "Masukkan batas bawah: ";
    cin >> batas_bawah;
    cout << "\nMasukkan batas atas: ";
    cin >> batas_atas;
    cout << "\nMasukkan jumlah kelipatan: ";
    cin >> kelipatan;
    cout << "\n\n";

    cout << "Angka-angka yang berada di antara " << batas_bawah << " dan " << batas_atas << " adalah: ";
    for (int i = batas_bawah; i <= batas_atas; i = i + kelipatan) {
        cout << i << ", ";
        jumlah_angka++;
    }

    cout << "\n\nDan jumlah semua angka tersebut adalah: " << jumlah_angka;
}