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
Program tersebut adalah graf matriks ketetanggan yang digunakan untuk merepresentasikan hubungan antara beberapa kota di Jawa Barat dan Jawa Tengah.
Pada program ini fungsi Simpul (Vertices): digunakan untuk mereprentasikan kota-kota dalam array simpul. Lalu fungsi busur (Edges): digunakan untuk menyatakan hubungan antara kota-kota yang direpresentasikan dalam matriks busur. Nilai 0 menunjukkan bahwa tidak ada hubungan langsung antara dua kota tertentu. Output dari program ini akan menampilkan informasi tentang hubungan antara kota-kota berdasarkan matriks ketetanggaan. 

### Output
Ciamis:  -> Bandung(7) -> Bekasi(8)
Bandung:  -> Bekasi(5) -> Cianjur(9) -> Purwokerto(15)
Bekasi:  -> Bandung(5) -> Cianjur(9) -> Tasikmalaya(5)
Tasikmalaya:  -> Cianjur(2) -> Purwokerto(4) -> Yogyakarta(8)
Cianjur:  -> Ciamis(3) -> Tasikmalaya(1)
Purwokerto:  -> Bekasi(7) -> Yogyakarta(9) -> Cianjur(4)
Yogyakarta:  -> Bekasi(7) -> Purwokerto(9)

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

Kode di atas merupakan implementasi dari pohon biner. Yang pertama ada definisi Struktur Data Pohon dengan simpul yang memiliki tiga bagian: kanan, data, dan kiri.
Setiap simpul memiliki dua anak (simpul kiri dan simpul kanan), selanjutnya terdapat
Fungsi inisialisasi(): digunakan untuk menginisialisasi pohon dengan mengatur root (akar) menjadi NULL,Fungsi simpulBaru(char dataMasukkan): Untuk membuat simpul baru dengan data yang dimasukkan, Fungsi simpulAkar(): Untuk membentuk akar pohon jika belum ada dan pengguna diminta memasukkan data untuk akar, Fungsi tambahSimpul(): Untuk menambah simpul ke pohon.Data ‘0’ menandakan simpul tidak memiliki anak di arah tertentu,Fungsi bacaPohon(): Untuk membaca pohon dan menampilkan data simpul secara hierarkis.
Setiap baris menampilkan simpul-simpul pada level yang sama, Fungsi main(): Gunanya untuk memanggil fungsi-fungsi tadi untuk membentuk dan membaca pohon.

Dilanjutkan dengan Inisialisasi Pohon: Dimulai dengan fungsi inisialisasi() yang mengatur root (akar pohon) menjadi NULL, lalu membuat Simpul Baru:
Fungsi simpulBaru(char dataMasukkan) digunakan untuk membuat simpul baru dengan data yang dimasukkan, lalu membentuk Akar Pohon: Fungsi simpulAkar() memeriksa apakah root sudah ada. Jika belum, pengguna diminta memasukkan data untuk akar, Menambah Simpul:
Fungsi tambahSimpul() memungkinkan pengguna menambah simpul ke pohon, Membaca Pohon:
Fungsi bacaPohon() membaca pohon dan menampilkan data simpul, setiap baris menampilkan simpul-simpul pada level yang sama.

### Output
Silakan masukkan data: A
Masukkan data kiri: B
Masukkan data kanan: C
Masukkan data kiri: D
Masukkan data kanan: E
Masukkan data kiri: 0
Masukkan data kanan: F
Masukkan data kiri: 0
Masukkan data kanan: 0

A
B C
D E F



## Unguided 

### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.

```C++
#include <iostream>
#include <vector>
#include <map>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Representasi graf menggunakan adjacency list
typedef map<string, map<string, int>> Graph;

// Fungsi untuk menghitung jarak terpendek dengan algoritma Dijkstra
void dijkstra(const Graph& graph, const string& start) {
    map<string, int> distances;
    map<string, string> previous;
    vector<string> unvisited;

    for (const auto& pair : graph) {
        distances[pair.first] = INF;
        unvisited.push_back(pair.first);
    }

    distances[start] = 0;

    while (!unvisited.empty()) {
        string current;
        int min_distance = INF;

        for (const string& city : unvisited) {
            if (distances[city] < min_distance) {
                min_distance = distances[city];
                current = city;
            }
        }

        unvisited.erase(remove(unvisited.begin(), unvisited.end(), current), unvisited.end());

        for (const auto& neighbor : graph.at(current)) {
            int distance = distances[current] + neighbor.second;
            if (distance < distances[neighbor.first]) {
                distances[neighbor.first] = distance;
                previous[neighbor.first] = current;
            }
        }
    }

    cout << "Jarak terpendek dari " << start << " ke kota lain:" << endl;
    for (const auto& pair : distances) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    Graph graph;
    int num_edges;

    cout << "Masukkan jumlah kota: ";
    cin >> num_edges;

    cout << "Masukkan data bobot antar kota:" << endl;
    for (int i = 0; i < num_edges; ++i) {
        string city1, city2;
        int weight;
        cin >> city1 >> city2 >> weight;
        graph[city1][city2] = weight;
        graph[city2][city1] = weight;
    }

    string start_city;
    cout << "Masukkan kota awal: ";
    cin >> start_city;

    dijkstra(graph, start_city);

    return 0;
}

```
#### Output:

Kode di atas adalah implementasi dari graf digunakan untuk menghitung jarak terpendek antara kota-kota dalam graf. Pertama program dimulai dengan fungsi inisialisasi() yang mengatur root (akar pohon) menjadi NULL, dilanjutkan dengan membuat Fungsi simpulBaru(char dataMasukkan) digunakan untuk membuat simpul baru dengan data yang dimasukkan dan memiliki tiga bagian: kanan, data, dan kiri. Lalu membentuk akar dengan menggunakan Fungsi simpulAkar() memeriksa apakah root sudah ada,
Menambah Simpul: Fungsi tambahSimpul() tujuannya untjk memungkinkan pengguna menambah simpul ke pohon.Pengguna diminta memasukkan data kiri dan kanan untuk setiap simpul. Apabila terdapat data ‘0' artinya simpul tidak memiliki anak di arah tertentu.Terakhir membaca pohon dengan menggunakan fungsi bacaPohon() membaca pohon dan menampilkan data simpul .


#### Full code Screenshot:


### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, inorder, dan post order!

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
#### Output:


#### Full code Screenshot:


## Kesimpulan
Jadi dari pembelajaran graf dan tree dapat disimpulkan bahwa graf atau graph adalah struktur data yang digunakan untuk merepresentasikan hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk sisi atau edge. Graf terdiri dari simpul dan busur yang secara matematis,digunakan untuk merepresentasikan hubungan antara entitas, seperti jaringan sosial, jaringan komputer, dan rute transportasi. Sedangkan tree merupakan suatu pohon dengan sekumpulan simpul (node) yang saling terhubung satu sama lain dalam kesatuan yang membentuk layaknya struktur sebuah pohon, dapat digunakan dalam struktur data seperti pohon biner, pohon pencarian biner, dan pohon merkle. Jika dibandingkan graf lebih umum dan dapat memiliki banyak bentuk, termasuk pohon, sedangkan pohon merupakan graf khusus dengan aturan tertentu (maksimal dua anak per simpul).

## Referensi
[1] Karumanchi, N. (2011). Data Structures and Algorithms Made Easy: 700 Data Structure
and Algorithmic Puzzles. CreateSpace.

[2] 
