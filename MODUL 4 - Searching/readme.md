# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori

Berikan penjelasan teori terkait materi modul ini dengan bahasa anda sendiri serta susunan yang terstruktur per topiknya.

## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data

```C++
#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;

    // algoritma Sequential Search
    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }
    cout << "\n\t Program Sequential Search Sederhana\n" << endl;
    cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu){
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;

}
```
Kode di atas digunakan untuk 
Kode yang Anda berikan adalah program C++ yang melakukan pencarian sederhana, dikenal sebagai Sequential Search atau Linear Search, untuk menemukan suatu nilai dalam array. Berikut adalah interpretasi dari kode tersebut:

Program mendeklarasikan sebuah array data dengan 10 elemen integer.
Nilai yang dicari, disimpan dalam variabel cari, adalah 10.
Variabel boolean ketemu digunakan untuk menandai apakah nilai yang dicari telah ditemukan dalam array.
Program menggunakan loop for untuk melalui setiap elemen dalam array data.
Jika elemen yang sedang diperiksa sama dengan nilai cari, variabel ketemu diatur menjadi true dan loop dihentikan dengan break.
Setelah loop, program mencetak pesan yang menunjukkan apakah nilai yang dicari ditemukan atau tidak.
Jika nilai ditemukan, program juga mencetak indeks di mana nilai tersebut ditemukan.
Output dari program akan tergantung pada isi array dan nilai yang dicari. Dalam kasus ini, karena nilai 10 ada dalam array data pada indeks ke-9 (indeks dimulai dari 0), program akan mencetak:.

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```
Kode di atas digunakan untuk 
Program C++ yang Anda berikan adalah contoh implementasi dari algoritma Selection Sort untuk mengurutkan array dan Binary Search untuk mencari elemen dalam array yang sudah diurutkan. Berikut adalah interpretasi dari kode tersebut:

Deklarasi Array dan Variabel:
bil_data adalah array yang berisi 7 bilangan integer.
cari adalah variabel yang akan digunakan untuk menyimpan nilai yang ingin dicari oleh pengguna.
Fungsi selection_sort:
Fungsi ini mengimplementasikan algoritma Selection Sort untuk mengurutkan elemen dalam array bil_data.
Algoritma ini bekerja dengan mencari elemen terkecil dalam array dan menukarnya dengan elemen pertama, kemudian mencari elemen terkecil kedua dan menukarnya dengan elemen kedua, dan seterusnya hingga seluruh array terurut.
Fungsi binary_search:
Setelah array diurutkan, fungsi binary_search digunakan untuk mencari nilai yang ditentukan oleh pengguna (cari) dalam array yang sudah diurutkan.
Algoritma ini membagi array menjadi dua bagian, membandingkan nilai yang dicari dengan elemen tengah, dan mengulangi proses ini pada bagian array yang sesuai hingga nilai ditemukan atau seluruh array telah dicari.
Fungsi main:
Fungsi ini menampilkan array bil_data sebelum diurutkan.
Meminta pengguna untuk memasukkan nilai yang ingin dicari (cari).
Menampilkan array bil_data setelah diurutkan menggunakan fungsi selection_sort.
Mencari nilai yang dimasukkan pengguna dalam array yang sudah diurutkan menggunakan fungsi binary_search.
Jika nilai ditemukan, program akan mencetak indeks di mana nilai tersebut ditemukan. Jika tidak, program akan mencetak pesan bahwa data tidak ditemukan.

## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
#include <iostream>
#include <algorithm> // untuk std::sort
#include <string>    // untuk std::string dan std::getline

using namespace std;

// Fungsi untuk melakukan binary search pada string
bool binarySearch(const string& str, char value) {
    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (str[middle] == value) {
            return true; // Huruf ditemukan
        } else if (str[middle] < value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return false; // Huruf tidak ditemukan
}

int main() {
    string kalimat;
    char huruf;

    // Meminta user untuk memasukkan sebuah kalimat
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    // Meminta user untuk memasukkan huruf yang ingin dicari
    cout << "Masukkan huruf yang ingin Anda cari: ";
    cin >> huruf;

    // Mengurutkan kalimat
    sort(kalimat.begin(), kalimat.end());

    // Mencari huruf menggunakan binary search
    bool found = binarySearch(kalimat, huruf);

    // Menampilkan hasil
    if (found) {
        cout << "Huruf '" << huruf << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
```
#### Output:
![unguided1](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/b39e3846-13bf-4ed4-b273-a0c9cffc18f8)

Kode di atas digunakan untuk
Program di atas akan meminta pengguna untuk memasukkan sebuah kalimat dan huruf yang ingin dicari. Kemudian, program akan mengurutkan kalimat tersebut dan melakukan pencarian dengan Binary Search. Jika huruf ditemukan, program akan memberitahu pengguna bahwa huruf tersebut ditemukan; jika tidak, program akan memberitahu bahwa huruf tersebut tidak ditemukan.

Perlu diingat bahwa Binary Search efektif untuk pencarian dalam kumpulan data yang besar dan terurut, tetapi mungkin tidak efisien untuk kalimat pendek atau untuk kasus di mana urutan huruf dalam kalimat penting. Untuk kasus seperti itu, pencarian linear mungkin lebih sesuai.

#### Full code Screenshot:
![fullcode1](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/395447ea-faa6-420d-b9d5-c70d7777c40e)

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    int jumlah_vokal = 0;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    // Menghitung jumlah huruf vokal
    for (int i = 0; i < kalimat.length(); i++) {
        char huruf = tolower(kalimat[i]); // Mengubah huruf menjadi lowercase untuk memudahkan perbandingan
        if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u') {
            jumlah_vokal++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlah_vokal << endl;

    return 0;
}
```
#### Output:
![unguided2](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/940c3f09-525c-4bcc-abc8-da962581709d)

Kode di atas digunakan untuk 
Program ini akan meminta pengguna untuk memasukkan sebuah kalimat. Kemudian, program akan mengiterasi setiap karakter dalam kalimat tersebut, memeriksa apakah karakter tersebut adalah huruf vokal (a, e, i, o, u) dengan membandingkannya dalam bentuk huruf kecil (lowercase), dan menghitung jumlah total huruf vokal yang ditemukan. Hasilnya akan ditampilkan ke pengguna..

#### Full code Screenshot:
![fullcode2](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/ac31787f-55ba-4dd3-9bd5-9d92dec58d17)

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
#include <iostream>
using namespace std;

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int n = sizeof(data) / sizeof(data[0]); // Menghitung jumlah elemen dalam array
    int cari = 4;
    int jumlah = 0;

    // Algoritma Sequential Search
    for (int i = 0; i < n; i++) {
        if (data[i] == cari) {
            jumlah++;
        }
    }

    cout << "Angka " << cari << " ditemukan sebanyak " << jumlah << " kali dalam array." << endl;

    return 0;
}
```
#### Output:
![unguided3](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/805677f1-7435-41b3-bebe-e6bd49f72bb9)

Kode di atas digunakan untuk 
Kode yang Anda berikan adalah program C++ yang menghitung berapa kali angka 4 muncul dalam array data. Mari kita interpretasikan kode tersebut:

Inisialisasi Array dan Variabel:
Array data berisi elemen-elemen: 9, 4, 1, 4, 7, 10, 5, 4, 12, dan 4.
Variabel n dihitung sebagai jumlah elemen dalam array data.
Algoritma Sequential Search:
Program menggunakan loop for untuk melalui setiap elemen dalam array data.
Jika elemen yang sedang diperiksa sama dengan angka 4, variabel jumlah ditambah 1.
Output:
Program mencetak berapa kali angka 4 muncul dalam array data..

#### Full code Screenshot:
![fullcode3](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/65552230-7534-4088-bd57-9c081d1ff100)

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.