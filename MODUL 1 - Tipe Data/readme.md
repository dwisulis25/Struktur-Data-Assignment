# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori

Tipe Data adalah cara pengumpulan dan mengatur data dengan tujuan agar operasi di komputer dapat dilakukan dengan efektif.
Berikut tipe data yang dipelajari:
1. Tipe Data Primitif
2. Tipe Data Abstrak
3. Tipe Data Koleksi

Tipe Data Primitif

## Guided 

### 1. Tipe Data Primitif

```C++
#include<iostream>
using namespace std;
///Main program
int main()
{
    char op;
    float num1, num2;
    //it allows user to enter operator i.e. +,- ,*, /
    cout<<"Masukan Operator: " << endl;
    cin >> op;
    cout << "Masukkan Angka 1 dan 2: ";
    cin>>num1>>num2;

    switch(op)
    {
    case'+':
        cout<<num1+num2;
        break;
    case'_':
        cout<<num1 - num2;
        break;
    case '*':
        cout<<num1 * num2;
        break;
    case '/':
        cout<<num1 / num2;
        break;
    default:
        cout<<"Eror!operator is not correct";
    
    }//switch statement ends
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 2. Tipe Data Abstrak

```C++
#include <stdio.h>

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;

int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;
    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Unguided 

### 1. [Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi data primitif tersebut!.]

```C++
#include <iostream>
using namespace std;

// Menambahkan dua bilangan bulat
int tambah(int a, int b) {
    return a + b;
}

// Mengalikan dua bilangan bulat
int kali(int a, int b) {
    return a * b;
}

int main() {
    int num1 = 5; // Tipe data primitif int
    int num2 = 3; // Tipe data primitif int

    // Hasil penjumlahan dan perkalian
    cout << "Hasil penjumlahan: " << tambah(num1, num2) << endl;
    cout << "Hasil perkalian: " << kali(num1, num2) << endl;

    return 0;
}

```

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.
Kode di atas digunakan untuk mendefinisikan dua fungsi, tambah dan kali, dari kode penjumlahan dan perkalian dua bilangan bulat. Tipe data primitif int, yaitu dari Fungsi main yang mendeklarasikan dua variabel num1 dan num2, selanjutnya kedua fungsi tersebut dipanggil untuk menampilkan hasil.

Penjelasan:

int pada tipe data primitif digunakan untuk menyimpan nilai numerik sederhana.
Fungsi dari tambah dan kali digunakan untuk menerima argumen tipe data primitif dan mengembalikan hasil operasi matematika.

Kesimpulan: 
Dalam pembuatan program dan memahami cara data diolah dan disimpan dalam komputer, dengan Tipe data primitif dalam C++ dapat menjadikan lebih efisien saat menyimpan dan memanipulasi data pada operasi dasar seperti aritmatika. 

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)

### 2. [Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya!]

Fungsi class dan struk adalah untuk mendefinisikan tipe data baru dengan data dan fungsi anggota.

Fungsi class digunakan untuk mendefinisikan blueprint untuk objek. Fungsi ini dapat memungkinkan untuk mengelompokkan variabel (atribut) dan fungsi (metode) yang berhubungan menjadi satu unit kerja yang dapat memiliki konstruktor dan destruktor. Dimana anggota dan fungsi anggota dari class  adalah privat secara default. Fungsi ini secara umum digunakan untuk data yang lebih kompleks.

```C++
#include <iostream>
using namespace std;

// Definisi class
class Mobil {
public:
    string merk;
    string model;
    int tahun;

    // Fungsi untuk menampilkan data mobil
    void display() {
        cout << "Merk: " << merk << endl;
        cout << "Model: " << model << endl;
        cout << "Tahun: " << tahun << endl;
    }
};

int main() {
    // Membuat objek dari class Mobil
    Mobil mobilSaya;
    mobilSaya.merk = "Toyota";
    mobilSaya.model = "Corolla";
    mobilSaya.tahun = 2020;

    // Memanggil fungsi display
    mobilSaya.display();

    return 0;
}
```
Penjelasan:
Berdasarkan contoh di atas, class Mobil memiliki tiga atribut (merk, model, tahun) dan satu metode (display). Objek mobilSaya dibuat dari class Mobil dan metode display dipanggil untuk menampilkan data mobil tersebut.


Fungsi Struct
Fungsi struct digunakan untuk menggabungkan berbagai tipe data menjadi satu unit. Tujuannya untuk mendefinisikan struktur data yang kompleks, di mana dapat digunakan menyimpan data yang terkait dalam satu variabel. Fungsi ini mirip dengan fungsi class, hanya saja biasanya digunakan untuk struktur data yang lebih sederhana yang mana tidak memiliki konstruktor atau destruktor secara default. Anggota dan fungsi anggota dari struct secara default adalah public. Biasanya sering digunakan ketika hanya ingin menyimpan data tanpa memerlukan fungsi tambahan.

```C++
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
```
Penjelasan:
Berdasarkan contoh diatas, struct Mahasiswa digunakan untuk menyimpan informasi tentang mahasiswa,diantaranya nama, umur, dan IPK. Objek mhs1 berasal dari struct Mahasiswa dan digunakan untuk menyimpan dan menampilkan data mahasiswa tersebut. struct pada program ini berfungsi sebagai cara untuk mengelola data yang berhubungan dengan cara yang logis dan mudah diakses.


### 3. [Buatlah program menggunakan fungsi map. Jelaskan perbedaan dari array dan map!]

Contoh program menggunakan fungsi map

```C++
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Membuat map dengan key tipe string dan value tipe int
    map<string, int> umur;

    // Menambahkan data ke dalam map
    umur["Alice"] = 25;
    umur["Bob"] = 28;
    umur["Charlie"] = 32;

    // Menampilkan semua data dalam map
    for (const auto &pair : umur) {
        cout << pair.first << " berumur " << pair.second << " tahun." << endl;
    }

    return 0;
}
```
Penjelasan:
Berdasarkan program diatas dapat didefinisikan, map digunakan untuk menyimpan pasangan key-value di mana key adalah nama orang dan value adalah umurnya. map memungkinkan kita untuk mengakses elemen dengan key yang diberikan, yang tidak mungkin dilakukan dengan array.

Perbedaan antara map dan array
map adalah struktur data yang lebih kompleks yang menyediakan akses berbasis key dan memungkinkan penyimpanan elemen secara dinamis dengan urutan tertentu berdasarkan key.
sedangkan array adalah struktur data sederhana dengan akses berbasis indeks,yang merupakan bilangan bulat. Dimana ukuran array ditentukan pada saat kompilasi dan tidak bisa berubah.Semua elemen array disimpan dalam urutan kontigu di memori.




## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.