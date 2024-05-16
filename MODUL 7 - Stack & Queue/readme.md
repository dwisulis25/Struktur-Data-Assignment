# <h1 align="center">Laporan Praktikum Modul Stack & Queue</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori

### STACK
Stack adalah struktur data sederhana yang digunakan untuk menyimpan data (mirip
dengan Linked Lists). Dalam tumpukan, urutan kedatangan data penting. Sebuah tumpukan piring di kafetaria adalah contoh bagus dari tumpukan. Piring ditambahkan ke tumpukan saat mereka dibersihkan dan ditempatkan di bagianatas. Ketika sebuah piring dibutuhkan, diambil dari bagian atas tumpukan. Piring pertama yang ditempatkan di tumpukan adalah yang terakhir digunakan. Definisi: Sebuah tumpukan adalah daftar terurut di mana penyisipan dan penghapusan dilakukan di satu ujung, disebut atas. Elemen terakhir yang
dimasukkan adalah yang pertama dihapus. Oleh karena itu, disebut daftar Last in
First out (LIFO).
Operasi pada stack melibatkan beberapa fungsi dasar yang dapat dilakukan pada
struktur data ini. Berikut adalah beberapa operasi umum pada stack: Push (Masukkan): Menambahkan elemen ke dalam tumpukan pada posisi paling atas atau ujung, Pop (Keluarkan): Menghapus elemen dari posisi paling atas atau ujung tumpukan,Top (Atas): Mendapatkan nilai atau melihat elemen teratas pada tumpukan tanpa menghapusnya, IsEmpty (Kosong): Memeriksa apakah tumpukan kosong atau tidak, IsFull (Penuh): Memeriksa apakah tumpukan penuh atau tidak (terutama pada implementasi tumpukan dengan kapasitas terbatas), Size (Ukuran): Mengembalikan jumlah elemen yang ada dalam tumpukan, Peek (Lihat): Melihat nilai atau elemen pada posisi tertentu dalam tumpukan
tanpa menghapusnya, Clear (Hapus Semua): Mengosongkan atau menghapus semua elemen dari tumpukan, Search (Cari): Mencari keberadaan elemen tertentu dalam tumpukan.

### QUEUE
Queue adalah struktur data yang digunakan untuk menyimpan data dengan metode
FIFO (First-In First-Out). Data yang pertama dimasukkan ke dalam queue akan
menjadi data yang pertama pula untuk dikeluarkan dari queue. Queue mirip dengan
konsep antrian pada kehidupan sehari-hari, dimana konsumen yang datang lebih
dulu akan dilayani terlebih dahulu.
Implementasi queue dapat dilakukan dengan menggunakan array atau linked list.
Struktur data queue terdiri dari dua pointer yaitu front dan rear. Front/head adalah
pointer ke elemen pertama dalam queue dan rear/tail/back adalah pointer ke elemen
terakhir dalam queue.

Perbedaan antara stack dan queue terdapat pada aturan penambahan dan
penghapusan elemen. Pada stack, operasi penambahan dan penghapusan elemen
dilakukan di satu ujung. Elemen yang terakhir diinputkan akan berada paling dengan
dengan ujung atau dianggap paling atas sehingga pada operasi penghapusan, elemen
teratas tersebut akan dihapus paling awal, sifat demikian dikenal dengan LIFO.

Pada Queue, operasi tersebut dilakukan ditempat berbeda (melalui salah satu ujung)
karena perubahan data selalu mengacu pada Head, maka hanya ada 1 jenis insert
maupun delete. Prosedur ini sering disebut Enqueue dan Dequeue pada kasus Queue.
Untuk Enqueue, cukup tambahkan elemen setelah elemen terakhir Queue, dan untuk
Dequeue, cukup "geser"kan Head menjadi elemen selanjutnya.
Operasi pada Queue: enqueue() : menambahkan data ke dalam queue, dequeue() : mengeluarkan data dari queue, peek() : mengambil data dari queue tanpa menghapusnya, isEmpty() : mengecek apakah queue kosong atau tidak, isFull() : mengecek apakah queue penuh atau tidak, size() : menghitung jumlah elemen dalam queue.

## Guided 

### 1. Guided 1

```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();

    cout << "\n";

    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;

    cetakArrayBuku();

    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 2. Guided 2

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.
![soal1](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/e7b3c733-ab02-49fa-be42-8bc6b6670a9e)

```C++
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string &sentence) {
    std::stack<char> stack;
    std::string cleaned;

    // Hapus semua karakter non-alfabet dan konversi ke huruf kecil
    for (char ch : sentence) {
        if (isalpha(ch)) {
            cleaned.push_back(tolower(ch));
        }
    }

    // Masukkan setengah pertama kalimat ke dalam stack
    for (size_t i = 0; i < cleaned.length() / 2; i++) {
        stack.push(cleaned[i]);
    }

    // Jika panjang kalimat ganjil, lewati karakter tengah
    size_t start = cleaned.length() / 2 + cleaned.length() % 2;

    // Bandingkan setengah kedua kalimat dengan isi stack
    for (size_t i = start; i < cleaned.length(); i++) {
        if (stack.top() != cleaned[i]) {
            return false;
        }
        stack.pop();
    }
    return true;
}

int main() {
    std::string sentence;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, sentence);

    if (isPalindrome(sentence)) {
        std::cout << "Kalimat tersebut adalah palindrom.\n";
    } else {
        std::cout << "Kalimat tersebut bukan palindrom.\n";
    }

    return 0;
}

```
#### Output:

Kode di atas digunakan untuk mengecek suatu kalimat apakah suatu kalimat polindrom atau bukan. Pertama program akan menghapus karakter yang bukan huruf dan mengubah semua huruf menjadi huruf kecil, disini program menggunakan stack dengan prinsip LIFO. Selanjutnya program akan mengabaikan huruf ditengah apabila terdapat karakter ganjil. Selanjutnya program akan membandingkan apakah kalimat sama atau tidak. Apabila cocok maka kalimat tersebut adalah polindrom.

#### Full code Screenshot:


### 2. Ubah guided queue diatas agar menjadi program inputan user dan program menu

```C++
#include <iostream>
#include <string>
using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;
string queueTeller[maksimalQueue];

bool isFull() {
    return back == maksimalQueue;
}

bool isEmpty() {
    return back == 0;
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian penuh." << endl;
    } else {
        queueTeller[back] = data;
        back++;
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong." << endl;
    } else {
        cout << "Mengeluarkan: " << queueTeller[front] << endl;
        for (int i = 0; i < back - 1; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

void viewQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong." << endl;
    } else {
        cout << "Data antrian teller:" << endl;
        for (int i = 0; i < back; i++) {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        }
    }
}

void clearQueue() {
    back = 0;
    cout << "Antrian telah dikosongkan." << endl;
}

int main() {
    int pilihan;
    string data;

    do {
        cout << "\nMenu Antrian Teller:\n";
        cout << "1. Tambah Antrian\n";
        cout << "2. Keluarkan Antrian\n";
        cout << "3. Lihat Antrian\n";
        cout << "4. Kosongkan Antrian\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore(); // Mengabaikan newline setelah input angka

        switch (pilihan) {
            case 1:
                if (isFull()) {
                    cout << "Antrian penuh." << endl;
                } else {
                    cout << "Masukkan nama: ";
                    getline(cin, data);
                    enqueueAntrian(data);
                }
                break;
            case 2:
                dequeueAntrian();
                break;
            case 3:
                viewQueue();
                break;
            case 4:
                clearQueue();
                break;
            case 5:
                cout << "Terima kasih telah menggunakan program antrian teller." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 5);

    return 0;
}

```
#### Output:

Kode di atas merupakan program inputan teller yang dimodifikasi menjadi program inputan user dan menu. Kode tersebut dimodifikasi dengan menambahkan menu untuk memungkinkan pengguna agar dapat menambahkan antrian (enqueueAntrian),mengeluarkan antrian (dequeueAntrian), melihat isi antrian (viewQueue), mengosongkan antrian (clearQueue). Sehingga program akan terus menampilkan menu sampai pengguna memilih untuk keluar.
#### Full code Screenshot:


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts,
problems, Interview Questions. CareerMonk Publications.