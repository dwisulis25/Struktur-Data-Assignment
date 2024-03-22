# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori

Tipe Data adalah cara pengumpulan dan mengatur data dengan tujuan agar operasi di komputer dapat dilakukan dengan efektif.
Berikut tipe data yang dipelajari:
1. Tipe Data Primitif
2. Tipe Data Abstrak
3. Tipe Data Koleksi

Tipe Data Primitif

Tipe data primitif adalah kategori dasar dari tipe data yang tersedia dalam bahasa pemrograman yang tidak dapat dibagi lagi menjadi tipe data yang lebih kecil. Berikut contoh tipe data primitif

Integer: Merupakan tipe data yang digunakan untuk menyimpan data numerik tanpa komponen desimal. Contohnya adalah angka 26 yang disebutkan dalam buku “Algoritma dan Struktur Data” oleh Penerbit Widina1.
Float: Tipe data untuk menyimpan bilangan pecahan atau bilangan dengan komponen desimal.
Char: Tipe data yang digunakan untuk menyimpan karakter tunggal. Dalam konteks bahasa pemrograman, ‘char’ merupakan tipe data primitif karena hanya mengandung satu karakter.
Boolean: Tipe data yang hanya memiliki dua nilai, yaitu true atau false. Ini digunakan untuk logika perbandingan dan kondisional.
String: Meskipun secara teknis bukan tipe data primitif dalam beberapa bahasa pemrograman karena terdiri dari rangkaian karakter, namun sering kali dikelompokkan bersama karena fungsinya yang fundamental dalam menyimpan dan memanipulasi teks.

Tipe Data Abstrak

Tipe Data Abstrak (TDA) adalah model matematika yang disertai dengan sekumpulan operasi terhadap model tersebut. TDA memungkinkan kita untuk mendefinisikan dan bekerja dengan data dalam cara yang lebih abstrak dan terorganisir. Sebagai contoh, TDA bisa berupa himpunan bilangan bulat dengan operasi seperti gabungan dan irisan1.

Dalam implementasi, TDA diwujudkan melalui struktur data yang berisi variabel-variabel yang dapat terdiri dari berbagai tipe data. Struktur data ini mempunyai berbagai jenis dan cara relasi antara setiap variabelnya. Operasi-operasi dalam TDA dapat mengambil operand yang bukan hanya elemen dari TDA itu sendiri, tetapi juga dari TDA lain, dan hasil operasinya pun bisa berupa elemen atau TDA lain1.

Contoh implementasi TDA dalam pemrograman adalah melalui struktur data abstrak seperti stack atau tumpukan. 

Tipe Data Koleksi

Tipe Data Koleksi adalah struktur data yang memungkinkan penyimpanan dan pengelolaan sejumlah elemen data secara terorganisir. Tipe data ini biasanya mencakup array, list, stack, queue, set, dan map, yang masing-masing memiliki karakteristik dan operasi khusus1. Contoh tipe data koleksi:

Array: Kumpulan elemen data yang memiliki tipe sama dan disimpan secara berurutan dalam memori. Setiap elemen dapat diakses menggunakan indeks.

List: Struktur data yang memungkinkan penyimpanan elemen secara berurutan dengan kemampuan untuk menambahkan atau menghapus elemen dari posisi manapun.
Java

Stack: Koleksi yang beroperasi dengan prinsip LIFO (Last In, First Out), di mana elemen terakhir yang ditambahkan akan menjadi elemen pertama yang dihapus.

Queue: Koleksi yang beroperasi dengan prinsip FIFO (First In, First Out), di mana elemen pertama yang ditambahkan akan menjadi elemen pertama yang dihapus.

Map: Koleksi yang menyimpan pasangan kunci-nilai, di mana setiap kunci unik dan terkait dengan satu nilai.

Set: Kumpulan elemen yang tidak berurutan dan tidak mengizinkan duplikasi elemen.

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
Kode di atas adalah kode yang berfungsi sebagai kalkulator.

#include<iostream>: 
merupakam direktif preprocessor untuk memberitahu compiler untuk menyertakan file header iostream yang diperlukan untuk input dan output.
using namespace std;:
merupakam compiler untuk menggunakan namespace standar (std) yang mendefinisikan banyak fungsi input dan output standar.
int main() { ... }:
memiliki fungsi utama di mana eksekusi program dimulai.
char op;:
digunakan untuk mendeklarasikan variabel op sebagai tipe data karakter, yang akan digunakan untuk menyimpan operator matematika yang dimasukkan oleh pengguna.
float num1, num2;: 
berguna untuk mendeklarasikan dua variabel num1 dan num2 sebagai tipe data float, yang akan digunakan untuk menyimpan angka yang dimasukkan oleh pengguna.
cin >> op;: 
untuk membaca operator dari input pengguna.
cin >> num1 >> num2;: Ini membaca dua angka dari input pengguna.
switch(op) { ... }: 
adalah pernyataan switch yang memilih blok kode yang akan dieksekusi berdasarkan nilai dari op.
case '+':: 
akkan mengeksekusi kode cout << num1 + num2; yang menjumlahkan num1 dan num2.
case '-'::
Operator pengurangan
case '*': dan case '/':: Ini mengeksekusi perkalian dan pembagian, masing-masing.
return 0;: 
untuk mengakhiri fungsi main dan mengembalikan nilai 0, yang menandakan bahwa program telah berjalan dengan sukses.
Tipe data primitif yang digunakan di sini adalah char untuk op dan float untuk num1 dan num2. 

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
Kode di atas digunakan untuk mencetak struct Mahasiswa yaitu mhs1 dan mhs2. Setiap instance diisi dengan data nama, alamat, dan umur yang spesifik. Kemudian, kode tersebut mencetak informasi dari kedua instance tersebut menggunakan fungsi printf.

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
Kode diatas merupakan tipe data koleksi dengan menggunakan array yang digunakan untuk menyimpan lima nilai integer. Kode diatas digunakan untuk mencetak nilai-nilai yang telah disimpan dalam array ke konsol.

## Unguided 

### 1. [Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi data primitif tersebut!.]

```C++
#include <iostream>
using namespace std;

// Menambahkan dua bilangan bulat
<<<<<<< HEAD
float tambah(int a, int b) {
=======
int tambah(int a, int b) {
>>>>>>> 10825b934e862f6d27eb4c64d48648c0d4c3014f
    return a + b;
}

// Mengalikan dua bilangan bulat
<<<<<<< HEAD
float kali(int a, int b) {
=======
int kali(int a, int b) {
>>>>>>> 10825b934e862f6d27eb4c64d48648c0d4c3014f
    return a * b;
}

int main() {
    int num1 = 5; // Tipe data primitif int
    int num2 = 3; // Tipe data primitif int

    // Hasil penjumlahan dan perkalian
    cout << "Hasil penjumlahan: " << tambah(num1, num2) << endl;
    cout << "Hasil perkalian: " << kali(num1, num2) << endl;

<<<<<<< HEAD
    return 0;
}
```

#### Output:
![Screenshot (333)](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/91455543/f3037012-b00c-4fbf-a238-dbc3ad8ea4a3)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.
Kode di atas digunakan untuk mendefinisikan dua fungsi, tambah dan kali, dari kode penjumlahan dan perkalian dua bilangan bulat. Tipe data primitif int, yaitu dari Fungsi main yang mendeklarasikan dua variabel num1 dan num2, selanjutnya kedua fungsi tersebut dipanggil untuk menampilkan hasil.

Penjelasan:

int pada tipe data primitif digunakan untuk menyimpan nilai numerik sederhana.
Fungsi dari tambah dan kali digunakan untuk menerima argumen tipe data primitif dan mengembalikan hasil operasi matematika.

Kesimpulan: 
Dalam pembuatan program dan memahami cara data diolah dan disimpan dalam komputer, dengan Tipe data primitif dalam C++ dapat menjadikan lebih efisien saat menyimpan dan memanipulasi data pada operasi dasar seperti aritmatika. 

#### Full code Screenshot:
![Screenshot (331)](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/91455543/22ed0660-6586-4184-909f-43fb86cc107b)
=======
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


>>>>>>> 10825b934e862f6d27eb4c64d48648c0d4c3014f

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

#### Output:
![Screenshot (334)](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/91455543/3f9d2356-bd68-4b54-990d-38739676928b)

Penjelasan:
Berdasarkan contoh di atas, class Mobil memiliki tiga atribut (merk, model, tahun) dan satu metode (display). Objek mobilSaya dibuat dari class Mobil dan metode display dipanggil untuk menampilkan data mobil tersebut.


Fungsi Struct
Fungsi struct digunakan untuk menggabungkan berbagai tipe data menjadi satu unit. Tujuannya untuk mendefinisikan struktur data yang kompleks, di mana dapat digunakan menyimpan data yang terkait dalam satu variabel. Fungsi ini mirip dengan fungsi class, hanya saja biasanya digunakan untuk struktur data yang lebih sederhana yang mana tidak memiliki konstruktor atau destruktor secara default. Anggota dan fungsi anggota dari struct secara default adalah public. Biasanya sering digunakan ketika hanya ingin menyimpan data tanpa memerlukan fungsi tambahan.

#### Full code Screenshot:
![Screenshot (328)](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/91455543/d37b4760-c0e3-4bc5-844a-7c5da32e3df6)

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

#### Output:
![Screenshot (335)](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/91455543/6f44c440-409b-45f2-b25f-4cb3c8588ce2)

Penjelasan:
Berdasarkan contoh diatas, struct Mahasiswa digunakan untuk menyimpan informasi tentang mahasiswa,diantaranya nama, umur, dan IPK. Objek mhs1 berasal dari struct Mahasiswa dan digunakan untuk menyimpan dan menampilkan data mahasiswa tersebut. struct pada program ini berfungsi sebagai cara untuk mengelola data yang berhubungan dengan cara yang logis dan mudah diakses.

#### Full code Screenshot:
![Screenshot (329)](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/91455543/955929a9-d378-4169-9916-fb45bc4e5230)

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

#### Output:
![Screenshot (336)](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/91455543/501934f8-9892-4c0f-b382-22346a0fd1bb)

Penjelasan:
Berdasarkan program diatas dapat didefinisikan, map digunakan untuk menyimpan pasangan key-value di mana key adalah nama orang dan value adalah umurnya. map memungkinkan kita untuk mengakses elemen dengan key yang diberikan, yang tidak mungkin dilakukan dengan array.

Perbedaan antara map dan array
map adalah struktur data yang lebih kompleks yang menyediakan akses berbasis key dan memungkinkan penyimpanan elemen secara dinamis dengan urutan tertentu berdasarkan key.
sedangkan array adalah struktur data sederhana dengan akses berbasis indeks,yang merupakan bilangan bulat. Dimana ukuran array ditentukan pada saat kompilasi dan tidak bisa berubah.Semua elemen array disimpan dalam urutan kontigu di memori.

#### Full code Screenshot:
![Screenshot (330)](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/91455543/5451e8de-2649-4d58-b507-78de737102d9)

## Kesimpulan
Jadi berdasarkan tipe data yang sudah di pelajari bahwa tipe data primitif dapat memberikan dasar yang efisien untuk operasi dasar, tipe data abstrak memungkinkan struktur data yang lebih kompleks dan terorganisir, dan tipe data koleksi menyediakan cara untuk mengelola kumpulan data yang besar dengan lebih efektif..

## Referensi

<<<<<<< HEAD
[1] Meidyan P., Guntoro B., Rezania A., Yunjansyah, Andri S., Yesi S., Arsia R., Fadhila T., (2022). Algoritma dan Struktur Data.https://repository.penerbitwidina.com/media/publications/557434-algoritma-dan-struktur-data-2ceb12a5.pdf.
=======
[1] Meidyan P., Guntoro B., Rezania A., Yunjansyah, Andri S., Yesi S., Arsia R., Fadhila T., (2022). Algoritma dan Struktur Data.https://repository.penerbitwidina.com/media/publications/557434-algoritma-dan-struktur-data-2ceb12a5.pdf.
>>>>>>> 10825b934e862f6d27eb4c64d48648c0d4c3014f
