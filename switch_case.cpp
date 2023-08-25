#include <iostream>
using namespace std;

int main () {
    char negara;
    
    cout << "Negara termiskin di dunia adalah ..." << endl;
    cout << "a. Zimbabwe" << endl;
    cout << "b. Kongo" << endl;
    cout << "c. Nigeria" << endl;
    cout << "d. Burundi\n" << endl;
    cout << "Jawaban anda: ";

    cin >> negara;

    switch (negara) {
        case 'a':
            cout << "Jawaban anda salah!";
            break;
        case 'b':
            cout << "Jawaban anda salah!";
            break;
        case 'c':
            cout << "Jawaban anda benar!";
            break;
        case 'd':
            cout << "Jawaban anda salah!";
            break;
        default:
            cout << "Masukkan pilihan yang valid!";
            // break;
    }
}