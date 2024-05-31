# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori
Array adalah salah satu tipe data terstruktur yang digunakan dalam 
Bahasa pemrograman seperti PHP,Pascal, JAVA, C++, Python. Tujuan penggunaan 
array untuk mempermudah penyimpan data karena array berisi komponen-komponen yang memiliki tipe data yang sama. Setiap anggota  array dapat diakses melalui suatu indeks. Array mempunyai beberapa jenis seperti array 1 dimensi, array 2 dimensi dan array multidimensi, dimana masing-masing array tersebut memiliki fungsi yang berbeda dalam penggunaannya. Array 1 dimensi disebut dengan vektor, array 2 dimensi sering disebut sebagai matriks sedangkan array yang memiliki dimensi lebih dari 2(dua) yang disebut tensor.

Array merupakan sebuah tipe data terstruktur yang dapat diterapkan pada suatu variabel yang dapat menyimpan banyak data dengan tipe sejenis atau homogen. Array berfungsi untuk mempermudah dalam penyimpanan data.

### 1. Array Satu Dimensi
Array 1 dimensi atau yang sering disebut dengan vektor adalah suatu array yang value atau nilainya hanya ditunjukkan oleh satu indeks. 

Array 1 dimensi dideklarasikan dengan variabel yang sudah dibentuk sebelumnya dan tidak dapat diubah selama program dijalankan. Secara umum, array 1 dimensi dideklarasikan dengan bentuk sebagai 
berikut: 
Nama array : array [1..n] of tipe_data

Nama array : nama array yang akan disimpan berisi elemen atau nilai,
1 : indeks awal elemen atau nilai, awal ini berupa konstanta tidak boleh nama variabel. Indeks awal bisa dimulai dengan angka 1 atau 0 tergantung Bahasa pemrograman,
N : indeks akhir yang menyatakan posisi/jumlah maksimum 
array yang dapat ditampung,
Tipe_data : tipe data array yang digunakan, bisa berupa tipe data dasar atau tipe data bentukan.

### 2. Array Dua Dimensi
Array 2 dimensi atau yang dapat digambarkan dengan matriks merupakan array sebuah perluasan dari array 1 dimensi, dimana jika pada array 1 dimensi hanya terdapat satu kolom dan satu baris maka pada array 2 dimensi tersusun atas beberapa elemen kolom dan beberapa elemen baris dengan 
tipe data yang sama atau sejenis.

Dalam pengisian array 2 dimensi dapat dilakukan dengan dua cara yaitu baris per baris (row major order) dan kolom per kolom (colomn major order). 
Sebagai variabel dalam algoritma, array 2 dimensi dideklarasikan dengan bentuk umum seperti berikut ini:
Indeks Kolom

NamaArray : array [1..MaxBaris, 1..MaxKolom] of TypeData

NamaArray : nama array yang dibentuk,
MaxBaris  : batas maksimal baris array atau ukuran baris dari array,
MaxKolom  : batas maksimal kolom array atau ukuran kolom dari array,
TypeData  : tipe data dari array.

### 3. Array Multidimensi
Array multidimensi adalah struktur data yang memungkinkan kita untuk menyimpan data dalam bentuk tabel dengan lebih dari satu dimensi. Dalam bahasa pemrograman, array multidimensi sering disebut sebagai “array of arrays”.

## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;

//PROGRAM INPUT ARRAY 3 DIMENSI
int main() {
	//Deklarasi Array
	int arr[2][3][3];

	//Input elemen
	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int z = 0; z < 3; z++)
			{
				cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
				cin >> arr[x][y][z];
			}
		}
		cout << endl;
	}

	//Output array
	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int z = 0; z < 3; z++)
			{
				cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
			}
		} 
	}

	cout << endl;
	//Tampilan array
	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int z = 0; z < 3; z++)
			{
				cout << arr[x][y][z] << ends;
			}
			cout << endl;
		}
		cout << endl;
	}
}
```
Kode diatas mendeklarasikan array tiga dimensi dengan yang ukuran 2x3x3. Lalu kita diminta untuk memasukkan nilai untuk setiap koordinat (x, y, z) elemen array.Setelah semua nilai selesai dimasukkan, program akan  menampilkan nilai yang telah dimasukkan oleh pengguna dalam bentuj tabel. Dalam setiap elemen dipisahkan oleh spasi, dan setiap baris dan lapisan dipisahkan oleh baris kosong.
Jadi, program di atas menampilkan nilai-nilai yang dimasukkan oleh pengguna dengan array tiga dimensi.


### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;

int main() {
	int maks, a, lokasi;
	cout << "Masukkan panjang array: ";
	cin >> a;

	if (a <= 0) {
		cout << "Panjang array harus lebih besar dari 0." << endl;
		return 1; //Return 1 to indicate error
	}

	int array[a];
	cout << "Masukkan " << a << " angka\n";

	for (int i = 0; i < a; i++){
		cout << "Array ke-" << (i+ 1) << ": ";
		cin >> array[i];
	}

	maks = array[0];
	lokasi = 0;

	for (int i = 1; i < a; i++){
		if (array[i] > maks) {
			maks = array[i];
			lokasi = i;
		}
	}

	cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << (lokasi + 1) << endl;

	return 0; //Return 0 to indicate successful execution 
}
```

Program diatas bekerja dengan cara meminta pengguna untuk memasukkan panjang array / jumlah elemen. Dengan nilai panjang array harus lebih dari 0, jika tidak maka program akan memberikan pesan bahwa panjang array harus lebih dari 0 dengan mengembalikan nilai 1. Program akan mendeklarasikan array dengan ukuran sebanyak a. Lalu, pengguna diminta memasukkan nilai untuk setiap elemen array. Program melakukan iterasi melalui elemen-elemen array (mulai dari indeks 1). Jika nilai elemen lebih besar dari nilai maksimum yang telah ditemukan sebelumnya, maka nilai maksimum diperbarui dan lokasi indeks akan disimpan. Setelah semuanya selesai, program akan mencetak nilai maksimum.


## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Data Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
```
Kode di atas digunakan untuk mencetak program yang meminta pengguna untuk memasukkan beberapa angka setelah itu program akan menampilkan data array, nomor genap, dan nomor ganjil berdasarkan input dari pengguna.

Program akan meminta kita memasukkan angka-angka sebanyak elemen yang telah ditentukan. Kemudian program akan menampilkan semua angka yang telah di masukkan sebagai data array. Lalu untuk menampilkan nilai genap program akan memeriksa setiap angka dalam array dengan cara habis membagi 2, karena jika habis dibagi 2 maka menandakan bahwa angka tersebut genap sehingga program akan menampilkannya sebagai nomor genap. Sebaliknya apabila tidak habis di bagi 2 maka itu menandakan nomor ganjil dan program akan menampilkannya sebagai nomor ganjil.

#### Output :
![unguided1](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/0e2b8fb9-a14b-4102-8150-d02fcd319910)

#### Full code Screenshot:
![fullcode1](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/8bba36cd-6fb1-4da9-acb5-c5bb16a1e9fd)


### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    int x_size, y_size, z_size;

    cout << "Masukkan ukuran array (x y z): ";
    cin >> x_size >> y_size >> z_size;

    int arr[x_size][y_size][z_size];

    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    cout << "Data Array:" << endl;
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    cout << endl;
    cout << "Tampilan array:" << endl;
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
Jadi berdasarkan program di atas, pertama kita diminta untuk memasukkan ukuran array dalam tiga dimensi (x, y, dan z). Selanjutnya kita diminta untuk memasukan nilai elemen array. Setelah semua nilai dimasukkan, program akan menampilkan data array. Selain menampilkan data array, program juga menampilkan tampilan array.

#### Output:
![unguided2](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/8c23328d-8bf4-4e0f-802f-651b42771bc4)

#### Full code Screenshot:
![fullcode2](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/1fba6653-8015-4046-a806-c22d6e694f2e)

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Mencari nilai maksimum
    int max_val = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    // Mencari nilai minimum
    int min_val = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    // Menghitung nilai rata-rata
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / n;

    cout << "Nilai maksimum: " << max_val << endl;     //Untuk menyimpan nilai max
    cout << "Nilai minimum: " << min_val << endl;     //Untuk menyimpan nilai min
    cout << "Nilai rata-rata: " << average << endl;  //Untuk menyimpan nilai rata-rata
    return 0;
}
```
#### Output :
![unguided3](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/1712fe89-1fa9-4bb1-8235-9197b32a882a)

Kode di atas digunakan untuk mencetak program mencari nilai maksimum, minimum, dan rata-rata dari suatu array. Program akan meminta kita untuk memasukkan jumlah elemen dalam array, dan memasukkan nilai-nilai elemen array. Kemudian program akan mencari nilai maksimum dan minimum dari elemen-elemen array yang telah dimasukkan.
Setelah itu Program akan melakukan perbandingan dari setiap elemen array dengan nilai maksimum dan minimum, dan akan memperbarui nilai-nilai tersebut jika ditemukan elemen yang tidak sesuai misalnya lebih besar atau lebih kecil. Untuk mencari rata-rata, program akan menghitung total dari semua elemen array. Selanjutnya nilai total akan dibagi dengan jumlah elemen untuk mendapatkan nilai rata-rata. Rata-rata akan disimpan oleh variabel average dalam bentuk bilangan desimal. Terakhir output nilai maksimum, minimun, dan rata-rata akan di tampilkan.


#### Full code Screenshot :
![fullcode3](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/da1e2cce-63a3-4b81-a7a0-3a69fe966d8b)

## Kesimpulan
Array merupakan sebuah tipe data terstruktur yang dapat diterapkan pada suatu variabel yang dapat menyimpan banyak data dengan tipe sejenis atau homogen. Array berfungsi untuk mempermudah dalam penyimpanan data.
Array dibedakan menjadi berbagai jenis antaranya:
Array satu dimensi (atau vektor) adalah kumpulan elemen dengan tipe data yang sama. 
Array dua dimensi (matriks) adalah tabel dua dimensi dengan baris dan kolom. Array tiga dimensi adalah ekstensi dari matriks ke ruang tiga dimensi. 

## Referensi
[1] Meidyan P., Guntoro B., Rezania A., Yunjansyah, Andri S., Yesi S., Arsia R., Fadhila T., (2022). Algoritma dan Struktur Data.https://repository.penerbitwidina.com/media/publications/557434-algoritma-dan-struktur-data-2ceb12a5.pdf.
