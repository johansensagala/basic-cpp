#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    float ipk;
    int umur;
};

int main () {
    Mahasiswa mahasiswa1;
    mahasiswa1.nama = "Johansen Sagala";
    mahasiswa1.ipk = 3.55;
    mahasiswa1.umur = 22;
    
    Mahasiswa mahasiswa2;
    mahasiswa2.nama = "Irpan Buri Siburian";
    mahasiswa2.ipk = 3.90;
    mahasiswa2.umur = 23;

    Mahasiswa mahasiswa3;
    mahasiswa3.nama = "Jonatan Situmorang";
    mahasiswa3.ipk = 3.35;
    mahasiswa3.umur = 22;

    cout << mahasiswa1.nama << " adalah mahasiswa dengan ipk " << mahasiswa1.ipk << " dan berumur " << mahasiswa1.umur << " tahun. " << endl;
    cout << mahasiswa2.nama << " adalah mahasiswa dengan ipk " << mahasiswa2.ipk << " dan berumur " << mahasiswa2.umur << " tahun. " << endl;
    cout << mahasiswa3.nama << " adalah mahasiswa dengan ipk " << mahasiswa3.ipk << " dan berumur " << mahasiswa3.umur << " tahun. " << endl;
}