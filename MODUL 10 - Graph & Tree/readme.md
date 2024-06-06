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

### 2. Program Tree

```C++
----------isi-----------
```
Kode di atas digunakan untuk mencetak 

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
