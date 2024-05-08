# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori
### 1. Konsep Dasar Sorting
Algoritma sorting adalah algoritma untuk meletakkan kumpulan elemen data ke dalam urutan tertentu, berdasarkan satu atau beberapa kunci ke dalam tiap-tiap elemen. Betdasarkan uritanya algoritma sorting dibagi menjadi dua jenis:
#### a. Ascending: Pengurutan berdasarkan dari kecil ke besar. Contohnya: a, b, c, d, e.
#### b. Descending : Pengurutan berdasarkan dari besar ke kecil. Contohnya : e, d, c, b, a.

### 2. Insertion Sort
### Konsep Dasar Inseetion Sort
Cara mengurutkanya di cek satu persatu mulai dari yang kedua sampai dengan yang terakhir.  Apabila ditemukan data sebelumnya, maka data tersebut disisipkan pada posisi yang sesuai.

### Pseudocode Algoritma Insertion Sort

```C++
#include <iostream>
using namespace std;

for i = n-1
        set j-i
        set t = a[j]
        repeat while j > 0 and a[j-2] > t
        move a[j-1] to right
        end repeat
        set a[j] - t
and for

return 0;
}
```

### Prosedur Insertion Sort dalam bahasa C++

```C++
#include <iostream>
using namespace std;

void inseetion_sort(int arr[], int length) {
 int i, j,tmp;

      for (i = 1; i < length; i++) {
             j = i;

             while (j > 0 && arr[j - 1] > arr[j]) {
               tmp = arr[j - 1];
               arr[j] = arr[j - 1];
               arr[j - 1] = tmp;
               j--;
             }//end of while loop
       }//end of for loop
}

return 0;
}
```
### 3. Bubble Sort
#### Konsep Dasar Algoritma Bubble Sort
Cara mengurutkannya adalah membandingkan elemen yang sekarang dengan elemen yang berikutnya. Jika elemen sekarang > elemen berikutnya, maka tukar.

#### Contoh Prosedur Bubble Sort dalam bahasa C++

```C++
#include <iostream>
using namespace std;
void bubble_sort(int arr[], int length){
    bool not_sorted = true;
    int j=0, tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i ++){
            if (arr[i] > arr[i + 1]) {
               tmp = arr[i];
               arr[i] = arr[i + 1];
               arr[i + 1] = tmp;
               not_sorted = true;
            }//end of if
         }//end of while loop
}//end of bubble_sort

}
return 0;
}
```

### 4. Selection Sort
#### Konsep Dasar Algoritma Selection Sort:
Cara mengurutkannya adalah dengan membandingkan elemen sekarang dengan elemen yang berikutnya sampai terakhir. Jika ditemukan elemen paling kecil, kemudian ditukar dengan elemen sekarang.

#### Contoh Prosedur Selection Sort

```C++
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int pos_min,temp;
      for (int i=0; i < n-1; i++) {
      if (arr[j] < arr[pos_min])
         pos_min=j;
      }

    if (pos_min != i) {
       temp = arr[i];
       arr[i] = arr[pos_min];
       arr[pos_min] = temp;
    }
  }
}

}
return 0;
}
```
  
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
Kode di atas digunakan untuk
Kode C++ di atas adalah implementasi dari algoritma Bubble Sort untuk mengurutkan array berisi bilangan bertipe double secara ascending (menaik). Berikut adalah penjelasan dari setiap bagian kode:

Fungsi bubble_sort:
Menerima dua parameter: sebuah array arr dan panjang array length.
Menggunakan variabel not_sorted sebagai penanda apakah array sudah terurut atau belum.
Melakukan iterasi dengan while loop selama array belum terurut.
Di dalam while loop, ada for loop yang berjalan dari awal array hingga elemen yang belum terurut.
Jika elemen saat ini (arr[i]) lebih besar dari elemen berikutnya (arr[i + 1]), maka kedua elemen tersebut ditukar posisinya.
Jika ada pertukaran, not_sorted diatur kembali ke true untuk melanjutkan proses sorting.
Fungsi print_array:
Menerima array a dan panjang array length sebagai parameter.
Mencetak semua elemen array ke layar dengan menggunakan for loop.
Fungsi main:
Mendeklarasikan array a dengan 6 elemen bertipe double.
Mencetak urutan bilangan sebelum dan setelah dilakukan sorting.
Memanggil fungsi bubble_sort untuk mengurutkan array.
Memanggil fungsi print_array untuk mencetak array sebelum dan setelah diurutkan.
Ketika program dijalankan, outputnya akan menunjukkan array a sebelum dan setelah diurutkan dengan algoritma Bubble Sort. Algoritma ini memiliki kompleksitas waktu rata-rata dan terburuk O(n^2), yang berarti waktu eksekusinya meningkat secara kuadratik dengan jumlah elemen yang diurutkan.

## Output
## Screenshoot

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
Kode di atas digunakan untuk 
Kode C++ di atas adalah implementasi dari algoritma Insertion Sort untuk mengurutkan array berisi karakter secara descending (dari terbesar hingga terkecil). Berikut adalah penjelasan dari setiap bagian kode:

Fungsi insertion_sort:
Menerima dua parameter: sebuah array arr dan panjang array length.
Menggunakan dua variabel indeks, i dan j, untuk menelusuri array.
for loop dimulai dari indeks kedua array (indeks 1) karena elemen pertama dianggap sudah terurut.
while loop membandingkan elemen yang sedang diperiksa (arr[j]) dengan elemen sebelumnya (arr[j - 1]).
Jika elemen sebelumnya lebih kecil dari elemen yang sedang diperiksa, kedua elemen tersebut ditukar posisinya.
Proses ini berlanjut hingga semua elemen telah diperiksa dan array terurut secara descending.
Fungsi print_array:
Menerima array a dan panjang array length sebagai parameter.
Mencetak semua elemen array ke layar dengan menggunakan for loop.
Fungsi main:
Mendeklarasikan array a dengan 6 elemen bertipe char.
Mencetak urutan karakter sebelum dan setelah dilakukan sorting.
Memanggil fungsi insertion_sort untuk mengurutkan array.
Memanggil fungsi print_array untuk mencetak array sebelum dan setelah diurutkan secara descending.
Ketika program dijalankan, outputnya akan menunjukkan array a sebelum dan setelah diurutkan dengan algoritma Insertion Sort secara descending. Algoritma ini efektif untuk dataset yang kecil dan hampir terurut, dengan kompleksitas waktu rata-rata dan terburuk O(n^2).

## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!

```C++
#include <iostream>
using namespace std;

void selectionSort(float arr[], int n) {
    int i, j, max_idx;
    float temp;

    for (i = 0; i < n-1; i++) {
        max_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] > arr[max_idx])
            max_idx = j;

        temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    float ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips)/sizeof(ips[0]);

    selectionSort(ips, n);

    cout << "IPS terurut dari yang terbesar hingga terkecil: ";
    for (int i = 0; i < n; i++)
        cout << ips[i] << " ";
    cout << endl;

    return 0;
}
```
#### Output:
![unguided1](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/ca859128-77b2-47bb-aadf-bac1e3fd026b)

Kode di atas digunakan untuk mencetak 
Program ini mendefinisikan fungsi selectionSort yang mengambil array arr dan ukuran array n sebagai parameter. Fungsi ini kemudian mengurutkan array menggunakan algoritma Selection Sort. Di dalam fungsi main, array ips didefinisikan dengan nilai-nilai yang diberikan, dan fungsi selectionSort dipanggil untuk mengurutkan nilai-nilai tersebut. Setelah itu, program mencetak nilai-nilai IPS yang telah terurut

#### Full code Screenshot:
![fullcode1](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/a9878bb5-2d01-4aca-b72f-edf94a832837)

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

```C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void bubbleSort(vector<string>& arr) {
    int i, j;
    bool swapped;
    for (i = 0; i < arr.size()-1; i++) {
        swapped = false;
        for (j = 0; j < arr.size()-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main() {
    vector<string> warga = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    bubbleSort(warga);

    cout << "Nama warga setelah diurutkan: ";
    for (const string& nama : warga)
        cout << nama << " ";
    cout << endl;

    return 0;
}
```
#### Output:
![unguided2](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/7f325814-4041-4994-9fca-c98283b97a81)

Kode di atas digunakan untuk program dalam bahasa C++ yang digunakan untuk mengurutkan nama-nama warga berdasarkan alfabet. Program tersebut menggunakan algoritma Bubble Sort.
Program di atas menggunakan vector untuk menyimpan nama-nama warga.
Fungsi bubbleSort mengurutkan elemen-elemen dalam vector berdasarkan alfabet.
Variabel swapped digunakan untuk memeriksa apakah ada pertukaran yang terjadi selama proses pengurutan.
Setelah pengurutan selesai, program mencetak nama-nama warga yang telah terurut.


#### Full code Screenshot:
![fullcode2](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/5902a7b4-f60c-44f0-82a9-e2d66bed65ed)

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