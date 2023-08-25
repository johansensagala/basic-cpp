#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Dosen {
    string nama;
    int umur;
    string jabatan;
};

struct Mahasiswa {
    string nama;
    unsigned int umur;
    string jenis_kelamin;
    float ipk;
    vector<string> mata_kuliah;
    Dosen dosen;
};

int main () {
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Johansen Sagala";
    mahasiswa.umur = 22;
    mahasiswa.jenis_kelamin = "laki-laki";
    mahasiswa.ipk = 3.83;

    mahasiswa.mata_kuliah.push_back("Algoritma & Struktur Data");
    mahasiswa.mata_kuliah.push_back("Pemrograman Berorientasi Objek");
    mahasiswa.mata_kuliah.push_back("Pemrograman Web");
    mahasiswa.mata_kuliah.push_back("Sistem Basis Data");

    mahasiswa.dosen.nama = "Jonatan Situmorang";
    mahasiswa.dosen.umur = 35;
    mahasiswa.dosen.jabatan = "Ketua Program Studi";

    cout << "Nama mahasiswa: " << mahasiswa.nama << endl;
    cout << "Umur: " << mahasiswa.umur << endl;
    cout << "Jenis Kelamin: " << mahasiswa.jenis_kelamin << endl;
    cout << "IPK: " << mahasiswa.ipk << endl;

    cout << "Mata kuliah yang diambil:" << endl;
    for (string matkul: mahasiswa.mata_kuliah)
    {
        cout << "- " << matkul << endl;
    }
    
    cout << "\nNama Dosen: " << mahasiswa.dosen.nama << endl;
    cout << "Umur: " << mahasiswa.dosen.umur << endl;
    cout << "Jabatan: " << mahasiswa.dosen.jabatan << endl;

    return 0;
}