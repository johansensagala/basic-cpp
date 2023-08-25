#include <iostream>
using namespace std;

int main () {
    string nama;
    bool ulang = true;
    int count = 0;
    char input;

    while (ulang) {
        cout << "Masukkan nama: \n";
        cin >> nama;
        
        count++;

        cout << "\nAnda sudah " << count << " kali memasukkan nama, nama terakhir yang anda masukkan adalah " << nama << endl;
        cout << "Ingin masukkan nama lagi? (Y/N) ";
        cin >> input;

        while (input != 'Y' && input != 'N') {
            cout << "Masukkan pilihan yang valid! ";
            cin >> input;
        }

        if (input == 'N') {
            ulang = false;
        }
    }
}