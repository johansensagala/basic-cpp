#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int random () {
    return rand() % 10 + 1;
}

void sleep(int waiting_time) {
    this_thread::sleep_for(chrono::seconds(waiting_time));
};

void random_number_generator () {
    int angka_player = random();
    int angka_komputer;
    
    do {
        angka_komputer = random();
    } while (angka_player == angka_komputer);

    cout << "Silakan tekan enter untuk mendapatkan angka! ";    
    cin.get();
    sleep(1);
    cout << "Anda mendapatkan angka: ";
    sleep(3);
    cout << angka_player;
    sleep(1); 

    cout << "\n\nGiliran komputer ...\n" << endl;
    sleep(1);
    cout << "Komputer mendapatkan angka: ";
    sleep(3);
    cout << angka_komputer << "\n\n";

    if (angka_player > angka_komputer)
    {
        cout << "Selamat, anda menang!" << endl;
    } else {
        cout << "Anda kalah!" << endl;
    }
}

int main () {
    srand(static_cast<int>(time(nullptr)));

    int bermain = true;
    
    while (true)
    {
        random_number_generator();
        char ulang;

        cout << "Main lagi? Tekan 'Y' jika ya!";
        cin >> ulang;
        
        if (ulang != 'Y' && ulang != 'y')
        {
            cout << "Selamat Jalan!";
            break;
        }
        
    }   
}