# <h1 align="center">Laporan Praktikum Modul Graph & Tree</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori
### 1. Graph
Graf atau graph adalah struktur data yang digunakan untuk merepresentasikan hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk sisi atau edge. Graf terdiri dari simpul dan busur yang secara matematis dinyatakan sebagai :
G = (V, E)
Dimana G adalah Graph, V adalah simpul atau vertex dan E sebagai sisi atau edge. Graph dapat digunakan dalam berbagai aplikasi, seperti jaringan sosial, pemetaan jalan, dan pemodelan data. Jenis-jenis Graph: Graph berarah (directed graph): Urutan simpul mempunyai arti. Misal busur AB
adalah e1 sedangkan busur BA adalah e8,  Graph tak berarah (undirected graph): Urutan simpul dalam sebuah busur tidak diperhatikan. Misal busur e1 dapat disebut busur AB atau BA, Weight Graph : Graph yang mempunyai nilai pada tiap edgenya. Pentingnya untuk memahami perbedaan antara simpul vertex dan simpul edge saat
membuat representasi graf dalam bentuk linked list. Simpul vertex mewakili titik atau simpul dalam graf, sementara simpul edge mewakili hubungan antara simpul-simpul
tersebut. Struktur keduanya bisa sama atau berbeda tergantung pada kebutuhan,namun biasanya seragam. Perbedaan antara simpul vertex dan simpul edge adalah bagaimana kita memperlakukan dan menggunakan keduanya dalam representasi graf.

### Tree atau Pohon
Suatu pohon merupakan sekumpulan simpul 
(node) yang saling terhubung satu sama lain dalam kesatuan yang membentuk layaknya struktur sebuah pohon. Dalam teori graf, struktur ini merupakan graf acyclic di mana setiap simpul yang terhubung, memiliki atau tidak memiliki simpul anak (children), 
dan satu simpul ayah (parent). Simpul yang tidak memiliki simpul ayah dinamakan simpul akar (root). Dalam struktur pohon, hanya terdapat satu jalur (path) yang menghubungkan satu simpul ke simpul yang lain. Operasi pada Tree
Create: digunakan untuk membentuk binary tree baru yang masih kosong, Clear: digunakan untuk mengosongkan binary tree yang sudah ada atau menghapus semua node pada binary tree, isEmpty: digunakan untuk memeriksa apakah binary tree masih kosong atau tidak, Insert: digunakan untuk memasukkan sebuah node kedalam tree, Find: digunakan untuk mencari root, parent, left child, atau right child dari suatu node dengan syarat tree tidak boleh kosong, Update: digunakan untuk mengubah isi dari node yang ditunjuk oleh pointer current dengan syarat tree tidak boleh kosong, Retrive: digunakan untuk mengetahui isi dari node yang ditunjuk pointer
current dengan syarat tree tidak boleh kosong, Delete Sub: digunakan untuk menghapus sebuah subtree (node beserta seluruh descendant-nya) yang ditunjuk pointer current dengan syarat tree tidak boleh kosong, Characteristic: digunakan untuk mengetahui karakteristik dari suatu tree.Yakni size, height, serta average lenght-nya, Traverse: digunakan untuk mengunjungi seluruh node-node pada tree dengan cara traversal. Terdapat 3 metode traversal yang dibahas dalam modul ini
yakni Pre-Order, In-Order, dan Post-Order.

#### 1. Pre-Order
Penelusuran secara pre-order memiliki alur:
Cetak data pada simpul root, Secara rekursif mencetak seluruh data pada subpohon kiri, Secara rekursif mencetak seluruh data pada subpohon kanan.

#### 2. In-Order
Penelusuran secara in-order memiliki alur:
Secara rekursif mencetak seluruh data pada subpohon kiri, Cetak data pada root, Secara rekursif mencetak seluruh data pada subpohon kanan .

#### 3. Post Order
Penelusuran secara in-order memiliki alur: Secara rekursif mencetak seluruh data pada subpohon kiri, Secara rekursif mencetak seluruh data pada subpohon kanan, Cetak data pada root.

## Guided 

### 1. Program Graph

```C++
#include <iostream>
#include <iomanip>
using namespace std;

string simpul[7] = {"Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"};

int busur[7][7] = {
        {0, 7, 8, 0, 0, 0, 0},
        {0, 0, 5, 0, 9, 15, 0},
        {0, 5, 0, 9, 5, 0, 0},
        {0, 0, 0, 2, 4, 0, 8},
        {3, 0, 0, 1, 0, 0, 0},
        {0, 0, 7, 0, 0, 9, 4},
        {0, 0, 0, 0, 8, 0, 0}
};

void tampilGraph() {
        for (int baris = 0; baris < 7; baris++) {
                cout << simpul[baris] << ": ";
                for (int kolom = 0; kolom < 7; kolom++) {
                        if (busur[baris][kolom] != 0)
                                cout << " -> " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
                }
                cout << endl;
        }
}

int main() {
        tampilGraph();
        return 0;
}
```

### 2. Program Tree

```C++
#include <iostream>
using namespace std;

//Definisi struktur pohon
struct pohon {
        pohon* kanan;
        char data;
        pohon* kiri;
};

//Deklarasi variable global
pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

//fungsi unutuk inisialisasi root
void inisialisasi() {
        root = NULL;
}

//fungsi untuk memmbuat simpul baru
void simpulBaru(char dataMasukkan) {
        simpul = new pohon;
        simpul-> data = dataMasukkan;
        simpul->kanan = NULL;
        simpul->kiri = NULL;
}

//fungsi untuk membuat simpul akar
void simpulAkar() {
        if (root == NULL) {
                char dataAnda;
                cout << "Silakan masukkan data: ";
                cin >> dataAnda;
                simpulBaru(dataAnda);
                root = simpul;
                cout << "Root terbentuk..." << endl;
        } else {
                cout << "Root sudah ada..." << endl;
        }
}

//fungsi untk menambah simpul
void tambahSimpul() {
        if (root != NULL) {
                int i = 1, j = 1, penanda = 0;
                char dataUser;
                alamat[i] = root;

                while (penanda == 0 && j < 256) {
                        cout << "Masukkan data kiri: ";
                        cin >> dataUser;
                        if (dataUser != '0') {
                                simpulBaru(dataUser);
                                saatIni = alamat[i];
                                saatIni->kiri = simpul;
                                j++;
                                alamat[j] = simpul;
                        } else {
                                penanda = 1;
                                j++;
                                alamat[j] = NULL;
                        }
                        if (penanda == 0) {
                                cout << "Masukkan data kanan: ";
                                cin >> dataUser;
                                if (dataUser != '0') {
                                        simpulBaru(dataUser);
                                        saatIni = alamat[i];
                                        saatIni->kanan = simpul;
                                        j++;
                                        alamat[j] = simpul;
                                } else {
                                        penanda = 1;
                                        j++;
                                        alamat[j] = NULL;
                                }
                        }
                        i++;
                }
        }
}

//fungsi untuk membaca pohon
void bacaPohon() {
        if (root != NULL) {
                int i = 1, n = 1, pencacah = 0;
                cout << endl;
                while (alamat[i] != NULL) {
                        saatIni = alamat[i];
                        cout << saatIni->data <<" ";
                        pencacah++;
                        if (pencacah == n) {
                                cout << endl;
                                pencacah = 0;
                                n = n * 2;
                        }
                        i++;
                }
        }
}

//fungsi utama
int main() {
        inisialisasi();
        simpulAkar();
        tambahSimpul();
        bacaPohon();
        return 0;
}
```


## Unguided 

### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.

```C++
----------isi-----------
```
#### Output:

Kode di atas digunakan 


#### Full code Screenshot:


### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, inorder, dan post order!

```C++
-------------isi--------------
```
#### Output:
Kode di atas digunakan untuk 

#### Full code Screenshot:


## Kesimpulan
Kesimpulan

## Referensi
[1] 
