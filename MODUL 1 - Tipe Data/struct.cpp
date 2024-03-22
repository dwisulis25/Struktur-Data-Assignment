#include <iostream>
using namespace std;

// Definisi struct
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    // Membuat objek struct
    Mahasiswa mhs1;
    mhs1.nama = "Budi";
    mhs1.umur = 20;
    mhs1.ipk = 3.5;

    // Menampilkan data mahasiswa
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << " tahun" << endl;
    cout << "IPK: " << mhs1.ipk << endl;

    return 0;
}