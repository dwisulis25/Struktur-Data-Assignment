# <h1 align="center">Laporan Praktikum Modul Rekursif & Hashtable</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori

### Rekursif
Rekursif merupakan salah satu proses pengulangan fungsi atau prosedur yang
memanggil dirinya sendiri. Dalam sebuah fungsi rekursif pemanggilan dapat terjadi
berulang kali. Karena ada proses yang berulang-ulang maka harus ada suatu kondisi
yang mengakhiri prosesnya. Jika tidak, maka proses tidak akan pernah berhenti sampai memori yang digunakan tidak dapat menampung lagi.Kode rekursif cenderung lebih singkat dan lebih mudah dibuat dibandingkan dengan
kode iteratif. Biasanya, perulangan dapat diubah menjadi fungsi rekursif saat proses
kompilasi atau interpretasi. Rekursi sangat efektif untuk menangani tugas yang dapat
diuraikan menjadi sub tugas yang serupa. Sebagai contoh, masalah pengurutan, pencarian, dan penjelajahan sering kali dapat diselesaikan dengan solusi rekursif yang sederhana.

##### Jenis-jenis Rekursi
Terdapat dua jenis fungsi rekursi yaitu:
##### a. Rekursi langsung
Dalam rekursi langsung, fungsi memanggil dirinya sendiri secara langsung.
##### b. Rekursi tidak langsung
Jika sebuah fungsi memanggil dirinya sendiri secara tidak langsung dari fungsi
lain.

##### Kelebihan
Kode rekursif menyajikan solusi yang
mudah dimengerti dan bersih,
meningkatkan kejelasan, Rekursi terbukti efektif untuk
menangani masalah yang dapat
diuraikan menjadi sub tugas-serupa,
seperti penjelajahan struktur data
pohon, dalam beberapa kasus, solusi rekursif dapat memberikan kode yang lebih elegan dan lebih kompak dibandingkan dengan pendekatan iteratif

##### Kekurangan
Efisiensi ruang menjadi masalah utama dalam rekursi karena setiap panggilan rekursif menambah overhead pada call stack, Beberapa implementasi rekursif mungkin kurang efisien secara waktu,terutama ketika terdapat overhead pemanggilan fungsi, Kesulitan dalam pemahaman konsep rekursi oleh beberapa programmer dapat memunculkan potensi bug dan kompleksitas pemecahan masalah.

### Hash Table
Hash Table adalah struktur data yang mengorganisir data ke dalam pasangan
kunci-nilai. Hash table biasanya terdiri dari dua komponen utama: array (atau
vektor) dan fungsi hash. Hashing adalah teknik untuk mengubah rentang nilai
kunci menjadi rentang indeks array. Array menyimpan data dalam slot-slot yang disebut bucket. Setiap bucket dapat menampung satu atau beberapa item data. Fungsi hash digunakan untuk menghasilkan nilai unik dari setiap item data, yang digunakan sebagai indeks array. Dengan cara ini, hash table memungkinkan pencarian data dalam waktu
yang konstan (O(1)) dalam kasus terbaik.
Sistem hash table bekerja dengan cara mengambil input kunci dan memetakkannya ke nilai indeks array menggunakan fungsi hash. Kemudian, data disimpan pada posisi indeks array yang dihasilkan oleh fungsi hash. Ketika data perlu dicari, input kunci dijadikan sebagai parameter untuk fungsi hash, dan posisi indeks array yang dihasilkan digunakan untuk mencari data. Dalam kasus hash collision, di mana dua atau lebih data memiliki nilai hash yang sama, hash table menyimpan data tersebut dalam slot yang sama dengan Teknik yang disebut
chaining.

#### Fungsi Hash Table
Fungsi hash membuat pemetaan antara kunci dan nilai, hal ini dilakukan melalui penggunaan rumus matematika yang dikenal sebagai fungsi hash. Hasil dari fungsi hash disebut sebagai nilai hash atau hash. Nilai hash adalah representasi dari string karakter asli tetapi biasanya lebih kecil dari aslinya.

#### Operasi Hash Table
##### 1. Insertion:
Memasukkan data baru ke dalam hash table dengan memanggil fungsi hash untuk menentukan posisi bucket yang tepat, dan kemudian menambahkan data ke bucket tersebut.
##### 2. Deletion:
Menghapus data dari hash table dengan mencari data menggunakan fungsi
hash, dan kemudian menghapusnya dari bucket yang sesuai.
##### 3. Searching:
Mencari data dalam hash table dengan memasukkan input kunci ke fungsi hash untuk menentukan posisi bucket, dan kemudian mencari data di dalam bucket yang sesuai.
##### 4. Update:
Memperbarui data dalam hash table dengan mencari data menggunakan fungsi hash, dan kemudian memperbarui data yang ditemukan.
##### 5. Traversal:
Melalui seluruh hash table untuk memproses semua data yang ada dalam tabel.

### Collision Resolution
Keterbatasan tabel hash adalah jika dua angka dimasukkan ke dalam fungsi hash menghasilkan nilai yang sama. Hal ini disebut dengan collision. Ada dua teknik untuk menyelesaikan masalah ini diantaranya :
##### Open Hashing (Chaining)
Metode chaining mengatasi collision dengan cara menyimpan semua item data dengan nilai indeks yang sama ke dalam sebuah linked list. Setiap node pada linked list merepresentasikan satu item data. Ketika ada pencarian atau penambahan item data, pencarian atau penambahan dilakukan pada
linked list yang sesuai dengan indeks yang telah dihitung dari kunci yang di
hash. Ketika linked list memiliki banyak node, pencarian atau penambahan item data menjadi lambat, karena harus mencari di seluruh linked list. Namun, chaining dapat mengatasi jumlah item data yang besar dengan efektif, karena keterbatasan array dihindari.
##### Closed Hashing
###### ● Linear Probing
Pada saat terjadi collision, maka akan mencari posisi yang kosong di bawah tempat terjadinya collision, jika masih penuh terus ke bawah,hingga ketemu tempat yang kosong. Jika tidak ada tempat yang kosong berarti HashTable sudah penuh.
###### ● Quadratic Probing
Penanganannya hampir sama dengan metode linear, hanya lompatannya tidak satu-satu, tetapi quadratic ( 12, 22, 32, 42, ... )
###### ● Double Hashing
Pada saat terjadi collision, terdapat fungsi hash yang kedua untuk menentukan posisinya kembali.

## Guided 

### 1. Guided 1

```C++
#include <iostream>
using namespace std;

// Fungsi ini melakukan hitung mundur dari angka yang diinputkan
void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); // 5 merupakan inputnya
    cout << endl;
    return 0;
}
```
Kode di atas merupakan contoh program yang menggunakan rekursi untuk melakukan hitung mundur berdasarkan angka yang diinputkan. Diawali dengan fungsi countdown(int n): untuk menerima parameter n atau angka yang akan dihitung mundur. Apabila n sama dengan 0, fungsi berhenti (base case) dan apabila n bukan 0, fungsi mencetak nilai n, kemudian memanggil dirinya sendiri dengan argumen n - 1. Dilanjutkan fungsi main(): atau fubgsj utama yang memanggil countdown(5) dengan input 5.

### 2. Guided 2

```C++
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
        if (n > 0) {
                cout << n << " ";
                functionB(n - 1); // Panggilan rekursif tidak langsung
        }
}

void functionB(int n) {
        if (n > 0) {
                cout << n << " ";
                functionA(n / 2); // Panggilan rekursif tidak langsung
        }
}

int main() {
        int num = 5;
        cout << "Rekursif Tidak Langsung: ";
        functionA(num);
         return 0;
}
```
Kode di atas adalah implementasi dari rekursi tidak langsung. Di dalamnya terdapat 
fungsi functionA(int n): yang gunanya untuk menerima parameter n. Apabila n lebih besar dari 0, fungsi mencetak nilai n dan memanggil fungsi functionB(n - 1). Fungsi ini merupakan  contoh rekursi tidak langsung karena fungsi functionA memanggil fungsi functionB. Fungsi functionB(int n): merupakam fungsi yang menerima parameter n.
Apabila n lebih besar dari 0, fungsi mencetak nilai n dan memanggil fungsi functionA(n / 2). Fungsi ini juga merupakan contoh rekursi tidak langsung karena fungsi functionB memanggil fungsi functionA.
Fungsi main(): fungsi utama yang memanggil functionA(num) dengan input 5.

### 3. Guided 3

```C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int TABLE_SIZE = 11;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];

public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;
    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;
    employee_map.print();

    return 0;
}
```
Kode diatas merupakan implementasi tabel hash (hash map). Pada program diatas
Kelas HashNode: digunakan merepresentasikan simpul dalam tabel hash yang dimana pada setiap simpul memiliki atribut name (nama) dan phone_number (nomor telepon).
Kelas HashMap: fungsinya mengelola tabel hash dengan menggunakan vektor sebagai wadah untuk menyimpan simpul-simpul.
Fungsi hashFunc gunanya untuk menghitung nilai hash berdasarkan nama.
Fungsi insert memasukkan simpul baru ke tabel hash.
Fungsi remove menghapus simpul berdasarkan nama.
Fungsi searchByName mencari nomor telepon berdasarkan nama. Contohnya Mistah, Pastah
Fungsi print menampilkan seluruh tabel hash.
Fungsi main(): fungsi utama yang menguji fungsionalitas tabel hash.


## Unguided 

### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

```C++
#include <iostream>
using namespace std;

int hitungFaktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * hitungFaktorial(n - 1);
    }
}

int main() {
    int angka;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> angka;

    if (angka >= 0) {
        cout << "Faktorial dari " << angka << " adalah: " << hitungFaktorial(angka) << endl;
    } else {
        cout << "Masukkan bilangan bulat positif!" << endl;
    }

    return 0;
}

```
#### Output:

Kode di atas digunakan untuk menghitung nilai faktorial dari inputan bilangan positif yang menggunakan program rekursif langsung dimana fungsi hitungFaktorial(int n) digunakan untuk menghitung faktorial dari bilangan n. Apabika n adalah 0 atau 1, fungsi mengembalikan nilai 1. Dan apabila n lebih besar dari 1, fungsi memanggil dirinya sendiri dengan argumen n - 1.

#### Full code Screenshot:
![image](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/e173572d-1a4c-4c60-874a-bbbe264f5314)


### 2. Buatlah sebuah program Rekursif Tidak Langsung (Indirect Recursion) dari soal no 1 diatas!

```C++
#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Basis rekursif: faktorial dari 0 dan 1 adalah 1
    } else {
        return n * factorial(n - 1); // Langkah rekursif: n! = n * (n-1)!
    }
}

int main() {
    int n;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    if (n < 0) {
        cout << "Input tidak valid. Masukkan bilangan bulat positif." << endl;
    } else {
        int hasil = factorial(n);
        cout << "Faktorial dari " << n << " adalah " << hasil << endl;
    }

    return 0;
}


```
#### Output:

Kode di atas digunakan untuk menghitung nilai faktorial dari bilangan bulat positif.
Dengan menggunakan dia fungsi yang memanggil satu sama lain.

#### Full code Screenshot:
![image](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/afc32c7e-6fda-44e8-a6e6-ef1609d14696)

### 3. Nomor 3
Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :
- Setiap mahasiswa memiliki NIM dan nilai.
- Program memiliki tampilan pilihan menu berisi poin C.
- Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90)

```C++
#include <iostream>
#include <vector>
using namespace std;

// Struktur data untuk mahasiswa
struct Mahasiswa {
    int nim;
    int nilai;
};

// Ukuran tabel hash
const int tableSize = 10;

// Kelas untuk tabel hash
class HashTable {
private:
    vector<vector<Mahasiswa>> table;

    // Fungsi hash sederhana
    int hashFunction(int nim) {
        return nim % tableSize;
    }

public:
    // Konstruktor
    HashTable() {
        table.resize(tableSize);
    }

    // Fungsi untuk menambahkan data baru
    void tambahData(int nim, int nilai) {
        int index = hashFunction(nim);
        Mahasiswa mahasiswa = {nim, nilai};
        table[index].push_back(mahasiswa);
    }

    // Fungsi untuk menghapus data berdasarkan NIM
    void hapusData(int nim) {
        int index = hashFunction(nim);
        for (int i = 0; i < table[index].size(); ++i) {
            if (table[index][i].nim == nim) {
                table[index].erase(table[index].begin() + i);
                cout << "Data dengan NIM " << nim << " berhasil dihapus." << endl;
                return;
            }
        }
        cout << "Data dengan NIM " << nim << " tidak ditemukan." << endl;
    }

    // Fungsi untuk mencari data berdasarkan NIM
    void cariNIM(int nim) {
        int index = hashFunction(nim);
        for (Mahasiswa mhs : table[index]) {
            if (mhs.nim == nim) {
                cout << "Data ditemukan: NIM = " << mhs.nim << ", Nilai = " << mhs.nilai << endl;
                return;
            }
        }
        cout << "Data dengan NIM " << nim << " tidak ditemukan." << endl;
    }

    // Fungsi untuk mencari data berdasarkan rentang nilai
    void cariRentangNilai(int minNilai, int maxNilai) {
        cout << "Data mahasiswa dengan nilai antara " << minNilai << " dan " << maxNilai << ":" << endl;
        for (vector<Mahasiswa> bucket : table) {
            for (Mahasiswa mhs : bucket) {
                if (mhs.nilai >= minNilai && mhs.nilai <= maxNilai) {
                    cout << "NIM = " << mhs.nim << ", Nilai = " << mhs.nilai << endl;
                }
            }
        }
    }
};

int main() {
    HashTable hashTable;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Cari Data berdasarkan NIM\n";
        cout << "4. Cari Data berdasarkan Rentang Nilai\n";
        cout << "5. Keluar\n";
        cout << "Pilih tindakan: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int nim, nilai;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan nilai: ";
                cin >> nilai;
                hashTable.tambahData(nim, nilai);
                break;
            }
            case 2: {
                int nim;
                cout << "Masukkan NIM data yang akan dihapus: ";
                cin >> nim;
                hashTable.hapusData(nim);
                break;
            }
            case 3: {
                int nim;
                cout << "Masukkan NIM data yang akan dicari: ";
                cin >> nim;
                hashTable.cariNIM(nim);
                break;
            }
            case 4: {
                int minNilai, maxNilai;
                cout << "Masukkan rentang nilai (min max): ";
                cin >> minNilai >> maxNilai;
                hashTable.cariRentangNilai(minNilai, maxNilai);
                break;
            }
            case 5:
                cout << "Terima kasih telah menggunakan program!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (choice != 5);

    return 0;
}

```


Program diatas memilimi beberapa fungsi salah satunya gungsi Utama (main):
merupakan program utama memiliki menu pilihan yang memungkinkan pengguna untuk menambah, menghapus, atau mencari data mahasiswa. Selain itu apabila ingin memilih menu hingga memilih keluar (pilihan 0).

#### Full code Screenshot:
![image](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/381ca33f-a71f-4200-bcae-4f7d8c0e0817)

## Kesimpulan
Rekursif merupakan salah satu proses pengulangan fungsi atau prosedur yang memanggil dirinya sendiri. Dimana terdapat 2 jenis rekursi yaitu rekursi langsung dan tidak langsung. Sedangkan Fungsi hash adalah fungsi untuk membuat pemetaan antara kunci dan nilai, hal ini dilakukan melalui penggunaan rumus matematika yang dikenal sebagai fungsi hash. Operasi hash antaranya:  
Insertion, Deletion, Searching, Update, dan Traversal. Rekursi digunakan untuk mengatasi masalah yang dapat dipecahkan dengan pendekatan berulang. Sedangkan Hash Table digunakan untuk mengelola data dengan efisien berdasarkan kunci

## Referensi
[1] Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts,
problems, Interview Questions. CareerMonk Publications
