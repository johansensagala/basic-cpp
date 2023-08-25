#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 generator(rd());

    uniform_int_distribution<int> distributor(1, 10);

    int angka_komputer = distributor(generator);
    int angka_user;

    cout << "SELAMAT DATANG DI PERMAINAN TEBAK ANGKA!\n\n";
    cout << "Silakan tebak angka dari 1 sampai 10!\n";

    for (int i = 3; i > 0; i--) {
        cout << i << " kesempatan tersisa.\n\n";

        while (!(cin >> angka_user)) {
            cout << "Masukkan angka yang valid: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (angka_user == angka_komputer) {
            cout << "Jawaban anda benar!";
            break;
        } else {
            cout << "Jawaban anda masih salah\n";

            if (i == 1) {
                cout << "Kesempatan anda telah habis. Permainan berakhir. Jawaban yang benar adalah " << angka_komputer;
            }
        }
    }

    return 0;
}
