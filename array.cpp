#include <iostream>
using namespace std;

int main () {
    unsigned int group_of_number[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size_of_array = sizeof(group_of_number);
    int size_of_int = sizeof(int);
    int array_length = size_of_array/size_of_int;

    cout << "Ukuran dari array adalah: " << size_of_array << " bytes" << endl;
    cout << "Ukuran satu tipe data integer: " << size_of_int << " bytes" << endl;
    cout << "Jumlah elemen dalam array: " << array_length << endl;

    for (int i = 0; i < array_length; i++) {
        cout << group_of_number[i] << endl;
    }
}