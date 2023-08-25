#include <iostream>
#include <limits>>
using namespace std;

int main () {

    // Tipe Data Bilangan
    int a = 21; // bilangan bulat
    float b = 12.7575; // bilangan desimal
    double c = 841.212; // bilangan desimal

    // Tipe Data Karakter
    char d = 'Z';
    wchar_t e = 'B';

    // Tipe Data Boolean
    bool f = 2 + 1 == 2;

    // Tipe Data Koleksi

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;

    cout << "Integer" << endl;
    cout << "Ukuran : " << sizeof(int) << endl;
    cout << "Minimum : " << numeric_limits<int>::min() << endl;
    cout << "Maksimum : " << numeric_limits<int>::max() << endl;
    cout << "Ukuran : " << sizeof(int) << endl;
    cout << "Presisi Digit : " << numeric_limits<int>::digits10 << endl;
    cout << endl;

    cout << "Float" << endl;
    cout << "Ukuran" << sizeof(float) << endl;
    cout << "Minimum : " << numeric_limits<float>::min() << endl;
    cout << "Maksimum : " << numeric_limits<float>::max() << endl;
    cout << "Ukuran : " << sizeof(float) << endl;
    cout << "Presisi Digit : " << numeric_limits<float>::digits10 << endl;
    cout << endl;

    cout << "Double" << endl;
    cout << "Ukuran" << sizeof(double) << endl;
    cout << "Minimum : " << numeric_limits<double>::min() << endl;
    cout << "Maksimum : " << numeric_limits<double>::max() << endl;
    cout << "Ukuran : " << sizeof(double) << endl;
    cout << "Presisi Digit : " << numeric_limits<double>::digits10 << endl;
    cout << endl;

    cout << "Char" << endl;
    cout << "Ukuran" << sizeof(char) << endl;
    cout << "Minimum : " << numeric_limits<char>::min() << endl;
    cout << "Maksimum : " << numeric_limits<char>::max() << endl;
    cout << "Ukuran : " << sizeof(char) << endl;
    cout << "Presisi Digit : " << numeric_limits<char>::digits10 << endl;
    cout << endl;

    cout << "Wide Char" << endl;
    cout << "Ukuran" << sizeof(wchar_t) << endl;
    cout << "Minimum : " << numeric_limits<wchar_t>::min() << endl;
    cout << "Maksimum : " << numeric_limits<wchar_t>::max() << endl;
    cout << "Ukuran : " << sizeof(wchar_t) << endl;
    cout << "Presisi Digit : " << numeric_limits<wchar_t>::digits10 << endl;
    cout << endl;

    cout << "Boolean" << endl;
    cout << "Ukuran" << sizeof(bool) << endl;
    cout << "Minimum : " << numeric_limits<bool>::min() << endl;
    cout << "Maksimum : " << numeric_limits<bool>::max() << endl;
    cout << "Ukuran : " << sizeof(bool) << endl;
    cout << "Presisi Digit : " << numeric_limits<bool>::digits10 << endl;
    cout << endl;
}