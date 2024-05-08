#include <iostream>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    float harga;
};

int main() {
    // Membuat array dari struktur Buku
    Buku buku[5];

    // Isi data untuk buku pertama
    buku[0].judul = "Algoritma dan Struktur Data";
    buku[0].pengarang = "Ahmad Dhani";
    buku[0].penerbit = "Informatika";
    buku[0].tebal_halaman = 500;
    buku[0].harga = 350000;

    // Isi data untuk buku kedua
    buku[1].judul = "Make it Happen";
    buku[1].pengarang = "Prita Ghozie";
    buku[1].penerbit = "Gramedia Pustaka Utama";
    buku[1].tebal_halaman = 244;
    buku[1].harga = 110000;

    // Isi data untuk buku-buku berikutnya...
    // buku[2].judul = "...";
    // ...

    // Menampilkan informasi buku
    for (int i = 0; i < 5; i++) {
        cout << "\nJudul Buku: " << buku[i].judul << endl;
        cout << "Pengarang: " << buku[i].pengarang << endl;
        cout << "Penerbit: " << buku[i].penerbit << endl;
        cout << "Tebal Halaman: " << buku[i].tebal_halaman << endl;
        cout << "Harga Buku: " << buku[i].harga << endl;
    }

    return 0;
}