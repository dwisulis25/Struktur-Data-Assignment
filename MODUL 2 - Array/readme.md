# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori
Array adalah salah satu tipe data terstruktur yang digunakan dalam 
Bahasa pemrograman seperti PHP,Pascal, JAVA, C++, Python. Tujuan penggunaan 
array untuk mempermudah penyimpan data karena array berisi komponen-komponen yang memiliki tipe data yang sama. Setiap anggota  array dapat diakses melalui suatu indeks. Array mempunyai beberapa jenis seperti array 1 dimensi, array 2 dimensi dan array multidimensi, dimana masing-masing array tersebut memiliki fungsi yang berbeda dalam penggunaannya. Array 1 dimensi disebut dengan vektor, array 2 dimensi sering disebut sebagai matriks sedangkan array yang memiliki dimensi lebih dari 2(dua) yang disebut tensor.

Array merupakan sebuah tipe data terstruktur yang dapat diterapkan pada suatu variabel yang dapat menyimpan banyak data dengan tipe sejenis atau homogen. Array berfungsi untuk mempermudah dalam penyimpanan data.

###1. Array Satu Dimensi
Array 1 dimensi atau yang sering disebut dengan vektor adalah suatu array yang value atau nilainya hanya ditunjukkan oleh satu indeks. 

Array 1 dimensi dideklarasikan dengan variabel yang sudah dibentuk sebelumnya dan tidak dapat diubah selama program dijalankan. Secara umum, array 1 dimensi dideklarasikan dengan bentuk sebagai 
berikut: 
Nama array : array [1..n] of tipe_data

Keterangan: 
Nama array : nama array yang akan disimpan berisi elemen atau nilai
1 : indeks awal elemen atau nilai, awal ini berupa konstanta tidak boleh nama variabel. Indeks awal bisa dimulai dengan angka 1 atau 0 tergantung Bahasa pemrograman. 
N : indeks akhir yang menyatakan posisi/jumlah maksimum 
array yang dapat ditampung. 
Tipe_data : tipe data array yang digunakan, bisa berupa tipe data dasar atau tipe data bentukan.

###2. Array Dua Dimensi
Array 2 dimensi atau yang dapat digambarkan dengan matriks merupakan array sebuah perluasan dari array 1 dimensi, dimana jika pada array 1 dimensi hanya terdapat satu kolom dan satu baris maka pada array 2 dimensi tersusun atas beberapa elemen kolom dan beberapa elemen baris dengan 
tipe data yang sama atau sejenis.

11  4   90   6
9   8   23   22
31  15  29   7
2   10  42   30
12  32  11   78
67  5   9    7
43  10  11   9

Susunan angka diatas menunjukkan matriks berdimensi 7 x 4, artinya terdiri dari 7 baris dan 4 kolom. Dalam pengisian array 2 dimensi dapat dilakukan dengan dua cara yaitu baris per baris (row major order) dan kolom per kolom (colomn major order). 
Sebagai variabel dalam algoritma, array 2 dimensi dideklarasikan dengan bentuk umum seperti berikut ini:
Indeks Kolom

NamaArray : array [1..MaxBaris, 1..MaxKolom] of TypeData

Keterangan : 
NamaArray : nama array yang dibentuk
MaxBaris  : batas maksimal baris array atau ukuran baris dari array
MaxKolom  : batas maksimal kolom array atau ukuran kolom dari array
TypeData  : tipe data dari array

###3. Array Multidimensi
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
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

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
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.