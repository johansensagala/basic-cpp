#include <iostream>
using namespace std;

int main () {
    int angka = 50;

    cout << angka << endl;;

    // melihat alamat dari variabel angka
    cout << &angka << endl;

    // membuat pointer
    int *ptr = &angka;
    cout << ptr << endl;
    cout << *ptr << endl;
}