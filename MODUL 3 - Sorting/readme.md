# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori
Algoritma sorting adalah algoritma untuk meletakkan kumpulan elemen data ke dalam urutan tertentu, berdasarkan satu atau beberapa kunci ke dalam tiap-tiap elemen. Betdasarkan uritanya algoritma sorting dibagi menjadi dua jenis:
### a. Ascending: Pengurutan berdasarkan dari kecil ke besar. Contohnya: a, b, c, d, e.
### b. Descending : Pengurutan berdasarkan dari besar ke kecil. Contohnya : e, d, c, b, a.

## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length) {
	bool not_sorted = true;
 	int j=0;
 	double tmp;

 	while (not_sorted) {
 		not_sorted = false;
 		j++;
 		for (int i = 0; i < length - j; i++) {
 			if (arr[i] > arr[i + 1]) {
 				tmp = arr[i];
 				arr[i] = arr[i + 1];
 				arr[i + 1] = tmp;
 				not_sorted = true;
 			} //end of if
 		} //end of for loop
 	} //end of while loop
} //end of bubble_sort

void print_array(double a[], int length) {
	for(int i=0; i<length; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}

int main() {
	int length = 6;
 	double a[] = {22.1, 15.3, 8.2, 33.21, 99.99, 99.99};
 
 	cout << "Urutan bilangan sebelum sorting: " << endl;
 	print_array(a, length);
 
 	bubble_sort(a, length);
 	cout << "\nUrutan bilangan setelah sorting: " << endl;
 
 	print_array(a, length);

 	return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort

```C++
#include <iostream>
using namespace std;

void insertion_sort(char arr[], int length) {
	int i, j;
 	char tmp;

 	for (i = 1; i < length; i++) {
 		j = i;

 		while (j > 0 && arr[j - 1] < arr[j]) {
 			tmp = arr[j];
 			arr[j] = arr[j - 1];
 			arr[j - 1] = tmp;
 			j--;
 		} //end of while loop
 	} //end of for loop
}

void print_array(char a[], int length) {
	for(int i=0; i<length; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}

int main() {
	int length = 6;
 	char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
 	
 	cout << "Urutan karakter sebelum sorting: " << endl;
 	print_array(a, length);
 	
 	insertion_sort(a, length);
 	cout << "\nUrutan karakter setelah sorting secara descending: " << endl;
 	
 	print_array(a, length);

 	return 0;

}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!

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

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

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

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!
![3](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/85603b6b-3047-4c6b-9640-44022fdfe7dd)

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