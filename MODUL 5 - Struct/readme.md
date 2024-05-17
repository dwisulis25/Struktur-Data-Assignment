# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori

### 2.1 Variabel
Analogi dari variabel seperti sebuah tempat untuk menampung atau menyimpan suatu data dengan tipe data tertentu. Format penulisan/deklarasi variabel adalah tipe_data nama_variabel, contoh int berat, string mata_kuliah,char jenis_kelamin. Secara default sebuah variabel hanya dapat menampung sebuah nilai misalnya variabel berat hanya dapat menampung satu nilai berat
175 kg, tidak bisa diisi lebih dari satu. Jika diinginkan dapat menampung lebih
dari satu nilai maka deklarasikan variabel sebagai array, dengan format penulisan tipe_data nama_variabel [banyak data]. Variabel terbagi menjadi 2 jenis yakni variabel lokal dan global. Variabel Lokal: 
Dibuat/dideklarasikan didalam
fungsi/prosedur, dikenali/dapat dipanggil hanya oleh fungsi atau prosedur yang
mendeklarasikannya. Variabel Global:
Dibuat/dideklarasikan diluar fungsi
atau prosedur,dikenali atau dipanggil oleh semua fungsi atau prosedur yang ada didalam
program.

### 2.2 Struktur (Struct)
Merupakan tipe data bentukan yang terdiri dari beberapa tipe data standar
maupun tipe data bentukan lainnya yang telah didefinisikan sebelumnya.
Sebagaimana telah disinggung sebelumnya, keyword yang digunakan untuk
membuat/mendeklarasikan sebuah struktur yakni struct. Terdapat banyak format
penulisan diantaranya :

### 1.
```C++
#include <iostream>
using namespace std;

struct {
string namaDepan;
string namaBelakang;
int usia;
char jenis_kelamin;
}namaVariabelStrukA, namaVariabelStrukB;

return 0;
}
```

### 2.
``` C++
#include <iostream>
using namespace std;

struct namaTipe{
string namaDepan;
string namaTengah;
string namaBelakang;
}; struct namaTipe namaVariabelStrukA, namaVariabelStrukB;

return 0;
}
```

### 3.
```C++
#include <iostream>
using namespace std;

typedef struct {
string namaDepan;
string namaTengah;
string namaBelakang;
}namaTipe;
namaTipe namaVariabelStrukA, namaVariabelStrukB;

return 0;
}
```

Tipe data struct yang telah dibuat (menggunakan cara 2 dan 3) menjadi tipe
data standar yang penggunaannya sama dengan tipe data standar lainnya.

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
Kode di atas digunakan
Kode yang Anda berikan adalah program C++ yang mendefinisikan struktur Buku dengan atribut judul_buku, pengarang, penerbit, tebal_halaman, dan harga_buku. Program ini kemudian membuat dua variabel buku1 dan buku2 dari tipe Buku dan mengisi atribut mereka dengan informasi tentang dua buku yang berbeda.

Setelah mengisi data, program menampilkan informasi tentang kedua buku tersebut ke konsol. Output akan menunjukkan judul, pengarang, penerbit, tebal halaman, dan harga dari masing-masing buku.

Berikut adalah interpretasi dari kode tersebut:

Struktur Buku dibuat untuk menyimpan informasi tentang buku.
Dua buku dibuat sebagai instance dari struktur Buku.
Buku pertama, buku1, diisi dengan data tentang buku “Algoritma dan Struktur Data” oleh Ahmad Dhani, diterbitkan oleh Informatika, dengan tebal halaman 500 dan harga 350000.
Buku kedua, buku2, diisi dengan data tentang buku “Make it Happen” oleh Prita Ghozie, diterbitkan oleh Gramedia Pustaka Utama, dengan tebal halaman 244 dan harga 110000.
Program kemudian mencetak informasi ini ke konsol dengan menggunakan cout.

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
Kode di atas digunakan 
Kode C++ di atas mendefinisikan tiga struct untuk merepresentasikan informasi tentang hewan, khususnya hewan darat dan hewan laut. Struktur Hewan adalah dasar yang berisi atribut umum untuk semua hewan, sedangkan Hewan_Darat dan Hewan_Laut adalah struktur khusus yang menambahkan atribut spesifik untuk hewan darat dan laut.

Berikut adalah interpretasi dari kode tersebut:

struct Hewan mendefinisikan atribut dasar yang dimiliki oleh semua hewan, seperti nama, jenis kelamin, cara berkembang biak, alat pernafasan, tempat hidup, dan apakah hewan tersebut karnivora.
struct Hewan_Darat menambahkan atribut khusus untuk hewan darat, seperti jumlah kaki, apakah hewan tersebut menyusui, dan suara yang dihasilkan.
struct Hewan_Laut menambahkan atribut khusus untuk hewan laut, seperti bentuk sirip dan bentuk pertahanan diri.
Variabel hewan1 dari tipe Hewan_Darat diisi dengan informasi tentang singa, termasuk bahwa singa adalah hewan darat yang menyusui dan menghasilkan suara “arggg”.
Variabel hewan2 dari tipe Hewan_Laut diisi dengan informasi tentang hiu, termasuk bahwa hiu memiliki insang untuk bernafas dan bentuk sirip yang membulat.
Program kemudian mencetak informasi ini ke konsol. Output yang diharapkan ketika program dijalankan adalah informasi tentang singa dan hiu, termasuk detail spesifik mereka sebagai hewan darat dan laut.
.

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan

```C++
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
```
#### Output:
![unguded1](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/4e0ce90a-5dfe-4171-8d5a-1060a6eebe59)

Kode di atas digunakan menginisialisasi array untuk setiap atribut dalam struktur Buku dengan ukuran 5. Saya juga telah menambahkan loop for untuk menampilkan informasi dari setiap buku. Anda dapat melanjutkan untuk mengisi data untuk tiga buku lainnya sesuai kebutuhan. Jangan lupa untuk mengisi semua elemen array sebelum mencoba menampilkannya untuk menghindari data yang tidak terdefinisi..

#### Full code Screenshot:
![fullcode1](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/15b80c85-f6d5-4272-8cbc-28941cd7bda6)

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

```C++
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
```
#### Output:
![unguided2](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/0aa5eee9-ed93-49f7-997d-379c5d4bddca)

Kode di atas digunakan untuk 
Dalam contoh di atas, buku adalah array yang terdiri dari lima elemen struct Buku. Setiap buku[i] mewakili satu buku dengan atribut judul, pengarang, penerbit, tebal_halaman, dan harga. Anda mengisi data untuk setiap buku dengan mengakses atribut melalui buku[i].atribut dan menampilkannya dengan loop for. Pastikan untuk mengisi data untuk semua buku sebelum mencoba menampilkannya untuk menghindari menampilkan data yang tidak terinisialisasi.

#### Full code Screenshot:
![fullcode2](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/45df1ae5-3d46-4d71-bd6b-788e3c491b6b)

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
Sjukani, Moh. 2007. Struktur Data (Algoritma & Struktur Data 2) dengan C, C++. Jakarta : Penerbit Mitra Wacana Media.