#include <iostream>
using namespace std;

struct Buku {
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    float harga_buku[5];
};

int main() {
    // Membuat dan mengisi struktur Buku
    Buku buku;

    // Isi data untuk buku pertama
    buku.judul_buku[0] = "Algoritma dan Struktur Data";
    buku.pengarang[0] = "Ahmad Dhani";
    buku.penerbit[0] = "Informatika";
    buku.tebal_halaman[0] = 500;
    buku.harga_buku[0] = 350000;

    // Isi data untuk buku kedua
    buku.judul_buku[1] = "Make it Happen";
    buku.pengarang[1] = "Prita Ghozie";
    buku.penerbit[1] = "Gramedia Pustaka Utama";
    buku.tebal_halaman[1] = 244;
    buku.harga_buku[1] = 110000;

    // Isi data untuk buku-buku berikutnya...
    // buku.judul_buku[2] = "...";
    // ...

    // Menampilkan informasi buku
    for (int i = 0; i < 5; i++) {
        cout << "\nJudul Buku: " << buku.judul_buku[i] << endl;
        cout << "Pengarang: " << buku.pengarang[i] << endl;
        cout << "Penerbit: " << buku.penerbit[i] << endl;
        cout << "Tebal Halaman: " << buku.tebal_halaman[i] << endl;
        cout << "Harga Buku: " << buku.harga_buku[i] << endl;
    }

    return 0;
}