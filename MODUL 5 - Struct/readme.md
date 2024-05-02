# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori

Berikan penjelasan teori terkait materi modul ini dengan bahasa anda sendiri serta susunan yang terstruktur per topiknya.

## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
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
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.
![nomer2](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/a5249cd7-e906-431d-b972-d97c1fc3a2fb)

```C++
#include <iostream>
using namespace std;

struct Hewan {
    string nama_hewan;
    string jenis_kelamin;
    string cara_berkembangbiak;
    string alat_pernafasan;
    string tempat_hidup;
    string apakah_karnivora;
}; Hewan info_hewan;

struct Hewan_Darat{
    int jumlah_kaki;
    string apakah_menyusui;
    string suara;
    Hewan info_hewan;
}; Hewan_Darat hewan1;

struct Hewan_Laut{
    string bentuk_sirip;
    string bentuk_pertahanan_diri;
    Hewan info_hewan;
}; Hewan_Laut hewan2;

int main() {
    // Membuat dan mengisi Hewan
    hewan1.info_hewan.nama_hewan = "Singa" ;
    hewan1.info_hewan.jenis_kelamin = "Jantan";
    hewan1.info_hewan.cara_berkembangbiak = "Melahirkan";
    hewan1.info_hewan.alat_pernafasan = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Darat";
    hewan1.info_hewan.apakah_karnivora = " Ya";
    hewan1.apakah_menyusui = "Ya";
    hewan1.suara = " arggg";

    hewan2.info_hewan.nama_hewan = "Hiu" ;
    hewan2.info_hewan.jenis_kelamin = "Jantan";
    hewan2.info_hewan.cara_berkembangbiak = "Melahirkan";
    hewan2.info_hewan.alat_pernafasan = "Insang";
    hewan2.info_hewan.tempat_hidup = "Laut";
    hewan2.info_hewan.apakah_karnivora = " Ya";
    hewan2.bentuk_sirip = "Membulat";
    hewan2.bentuk_pertahanan_diri = " Menyerang ";

// Menampilkan informasi Hewan
    cout << " Nama Hewan: " <<hewan1.info_hewan.nama_hewan << endl;
    cout << " Jenis Kelamin: " <<hewan1.info_hewan.jenis_kelamin << endl;
    cout << " Cara Berkembangbiak: " <<hewan1.info_hewan.cara_berkembangbiak<< endl;
    cout << " Alat Pernafasan: " <<hewan1.info_hewan.alat_pernafasan << endl;
    cout << " Tempat Hidup: " <<hewan1.info_hewan.tempat_hidup << endl;
    cout << " Apakah Karnivora: " <<hewan1.info_hewan.apakah_karnivora << endl;
    cout << " Apakah Menyusui " <<hewan1.apakah_menyusui << endl;
    cout << " Suara: " <<hewan1.suara << endl;

    cout << "\n Nama Hewan: " <<hewan2.info_hewan.nama_hewan << endl;
    cout << " Jenis Kelamin: " <<hewan2.info_hewan.jenis_kelamin << endl;
    cout << " Cara Berkembangbiak: " <<hewan2.info_hewan.cara_berkembangbiak<< endl;
    cout << " Alat Pernafasan: " <<hewan2.info_hewan.alat_pernafasan << endl;
    cout << " Tempat Hidup: " <<hewan2.info_hewan.tempat_hidup << endl;
    cout << " Apakah Karnivora: " <<hewan2.info_hewan.apakah_karnivora << endl;
    cout << " Bentuk Sirip " <<hewan2.bentuk_sirip << endl;
    cout << " Bentuk Pertahanan Diri: " <<hewan2.bentuk_pertahanan_diri << endl;

return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:


### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.