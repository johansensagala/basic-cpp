#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void persegi (int sisi) {
    int keliling = 4 * sisi;
    int luas = sisi * sisi;

    cout << "Keliling persegi = " << keliling << endl;
    cout << "Luas persegi = " << luas << endl;
}

void persegi_panjang (int sisi1, int sisi2) {
    int keliling = 2 * (sisi1 + sisi2);
    int luas = sisi1 * sisi2;

    cout << "Keliling persegi panjang = " << keliling << endl;
    cout << "Luas persegi panjang = " << luas << endl;
}

void segitiga (int sisi) {
    int keliling = 3 * sisi;
    int luas = 1/2 * sisi * sisi;

    cout << "Keliling segitiga = " << keliling << endl;
    cout << "Luas segitiga = " << luas << endl;
}

void trapesium (int sisi_atas, int sisi_bawah, int sisi_samping, int tinggi) {
    int keliling = sisi_atas + sisi_bawah + 2 * sisi_samping;
    int luas = 1/2 * (sisi_atas + sisi_bawah) * tinggi;

    cout << "Keliling trapesium = " << keliling << endl;
    cout << "Luas trapesium = " << luas << endl;
}

void lingkaran (int jari_jari) {
    int keliling = M_PI * 2 * jari_jari;
    int luas = M_PI * jari_jari * jari_jari;

    cout << "Keliling lingkaran = " << keliling << endl;
    cout << "Luas lingkaran = " << luas << endl;
}

int main () {
    int pilihan;

    cout << "Silakan pilih bangun datar! (Dalam bilangan bulat)" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga Sama Sisi" << endl;
    cout << "4. Trapesium" << endl;
    cout << "5. Lingkaran" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;
    cout << "\n\n";

    switch (pilihan) {
        case 1:
            int input_sisi;

            cout << "Masukkan sisi: ";
            cin >> input_sisi;
            persegi(input_sisi);
            break;
        
        case 2:
            int input_sisi1;
            int input_sisi2;

            cout << "Masukkan sisi pertama: ";
            cin >> input_sisi1;
            cout << "Masukkan sisi kedua: ";
            cin >> input_sisi2;
            persegi_panjang(input_sisi1, input_sisi2);
            break;

        case 3:
            int input_sisi_segitiga;

            cout << "Masukkan sisi: ";
            cin >> input_sisi_segitiga;
            segitiga(input_sisi_segitiga);
            break;

        case 4:
            int input_sisi_atas;
            int input_sisi_bawah;
            int input_sisi_miring;
            int input_tinggi;

            cout << "Masukkan sisi atas: ";
            cin >> input_sisi_atas;
            cout << "Masukkan sisi bawah: ";
            cin >> input_sisi_bawah;
            cout << "Masukkan sisi miring: ";
            cin >> input_sisi_miring;
            cout << "Masukkan tinggi: ";
            cin >> input_tinggi;

            trapesium(input_sisi_atas, input_sisi_bawah, input_sisi_miring, input_tinggi);
            break;

        case 5:
            int input_jari_jari;

            cout << "Masukkan jari-jari: ";
            cin >> input_jari_jari;
            lingkaran(input_jari_jari);
            break;
    }
}