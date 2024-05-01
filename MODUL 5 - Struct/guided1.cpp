#include <iostream>
using namespace std;

struct Buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    float harga_buku;
};

int main() {
    // Membuat dan mengisi struktur Buku
    Buku buku1, buku2;
    buku1.judul_buku = "Algoritma dan Struktur Data";
    buku1.pengarang = "Ahmad Dhani";
    buku1.penerbit = "Informatika";
    buku1.tebal_halaman = 500;
    buku1.harga_buku = 350000;

    buku2.judul_buku = "Make it Happen";
    buku2.pengarang = "Prita Ghozie";
    buku2.penerbit = "Gramedia Pustaka Utama";
    buku2.tebal_halaman = 244;
    buku2.harga_buku = 110000;

    // Menampilkan informasi buku
    cout << " Judul Buku: " <<buku1.judul_buku << endl;
    cout << " Pengarang: " <<buku1.pengarang << endl;
    cout << " Penerbit: " <<buku1.penerbit << endl;
    cout << " Tebal Halaman: " <<buku1.tebal_halaman << endl;
    cout << " Harga Buku: " <<buku1.harga_buku << endl;

    cout << "\n Judul Buku: " <<buku2.judul_buku << endl;
    cout << " Pengarang: " <<buku2.pengarang << endl;
    cout << " Penerbit: " <<buku2.penerbit << endl;
    cout << " Tebal Halaman: " <<buku2.tebal_halaman << endl;
    cout << " Harga Buku: " <<buku2.harga_buku << endl;

    return 0;
}