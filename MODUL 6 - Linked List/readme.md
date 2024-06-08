# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori

### a)	Single Linked List
Linked List merupakan suatu bentuk struktur data yang berisi kumpulan data yang disebut sebagai node yang tersusun secara sekuensial, saling sambung menyambung, dinamis, dan terbatas. Setiap elemen dalam linked list dihubungkan ke elemen lain melalui pointer. Masing-masing komponen sering disebut dengan simpul atau node atau verteks. Pointer adalah alamat elemen. Setiap simpul pada dasarnya dibagi atas  dua bagian pertama disebut bagian isi atau informasi atau data yang berisi nilai yang disimpan oleh simpul. Bagian kedua disebut bagian pointer yang berisi alamat dari node berikutnya atau sebelumnya. Dengan menggunakan struktur seperti ini, linked list dibentuk dengan cara menunjuk pointer next suatu elemen ke elemen yang mengikutinya. Pointer next pada elemen terakhir merupakan NULL, yang menunjukkan akhir dari suatu list. Elemen pada awal suatu list disebut head dan elemen terakhir dari suatu list disebut tail.

#### Linked List Circular 
Linked list circular merupakan linked list yang tidak memiliki akhir karena node  terakhir (tail) tidak bernilai ‘NULL’, tetapi terhubung dengan node pertama (head).  Saat menggunakan linked list circular kita membutuhkan dummy node atau node  pengecoh yang biasanya dinamakan dengan node current supaya program dapat  berhenti menghitung data ketika node current mencapai node pertama (head). Linked list circular dapat digunakan untuk menyimpan data yang perlu diakses  secara berulang, seperti daftar putar lagu, daftar pesan dalam antrian, atau  penggunaan memori berulang dalam suatu aplikasi.

### b)	Double Linked List

Double Linked List adalah struktur data Linked List yang mirip dengan Single Linked List, namun dengan tambahan satu pointer tambahan pada setiap simpul yaitu pointer prev yang menunjuk ke simpul sebelumnya. Dengan adanya pointer prev, Double Linked List memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul mana saja secara efisien. Setiap simpul pada Double Linked List memiliki tiga elemen penting, yaitu elemen data (biasanya berupa nilai), pointer next yang menunjuk ke simpul
berikutnya, dan pointer prev yang menunjuk ke simpul sebelumnya.

Keuntungan dari Double Linked List adalah memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul dimana saja dengan efisien, sehingga sangat berguna dalam implementasi beberapa algoritma yang membutuhkan operasi tersebut. Selain itu, Double Linked List juga memungkinkan kita untuk melakukan traversal pada list baik dari depan (head) maupun dari belakang (tail) dengan mudah. Namun, kekurangan dari Double Linked List adalah penggunaan memori yang lebih besar dibandingkan dengan Single Linked List, karena setiap simpul membutuhkan satu pointer tambahan. Selain itu, Double Linked List juga membutuhkan waktu eksekusi yang lebih lama dalam operasi penambahan dan penghapusan jika dibandingkan dengan Single Linked List.

Di dalam sebuah linked list, ada 2 pointer yang menjadi penunjuk utama, yakni pointer HEAD yang menunjuk pada node pertama di dalam linked list itu sendiri dan pointer TAIL yang menunjuk pada node paling akhir di dalam linked list. Sebuah linked list dikatakan kosong apabila isi pointer head adalah NULL. Selain itu, nilai pointer prev dari HEAD selalu NULL, karena merupakan data pertama. Begitu pula dengan pointer next dari TAIL yang selalu bernilai NULL sebagai penanda data terakhir.

## Guided 

### 1. Latihan Single Linked List

```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
```

### 2. Latihan Double Linked List

```C++
#include <iostream>
using namespace std;

class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) { //tambahdepan
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```


## Unguided 

### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut: 
<br>a. Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah nama dan usia anda.</br>
<br>b. Hapus data Akechi</br>
<br>c. Tambahkan data berikut diantara John dan Jane : Futaba	18</br>
<br>d. Tambahkan data berikut diawal : Igor	20</br>
<br>e. Ubah data Michael menjadi : Reyn	18</br>
<br>f. Tampilkan seluruh data</br>

```C++
#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    int usia;
    Mahasiswa* next;
};

void insertDepan(Mahasiswa** head, string nama, int usia) {
    Mahasiswa* new_node = new Mahasiswa();
    new_node->nama = nama;
    new_node->usia = usia;
    new_node->next = (*head);
    (*head) = new_node;
}

void insertBelakang(Mahasiswa** head, string nama, int usia) {
    Mahasiswa* new_node = new Mahasiswa();
    Mahasiswa* last = *head;
    new_node->nama = nama;
    new_node->usia = usia;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void insertTengah(Mahasiswa* prev_node, string nama, int usia) {
    if (prev_node == NULL) {
        cout << "Node sebelumnya tidak boleh NULL";
        return;
    }
    Mahasiswa* new_node = new Mahasiswa();
    new_node->nama = nama;
    new_node->usia = usia;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void hapusNode(Mahasiswa** head, string key) {
    Mahasiswa* temp = *head, *prev;
    if (temp != NULL && temp->nama == key) {
        *head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->nama != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    delete temp;
}

void ubahData(Mahasiswa* head, string namaLama, string namaBaru, int usiaBaru) {
    Mahasiswa* temp = head;
    while (temp != NULL) {
        if (temp->nama == namaLama) {
            temp->nama = namaBaru;
            temp->usia = usiaBaru;
            return;
        }
        temp = temp->next;
    }
}

void cetakList(Mahasiswa* node) {
    while (node != NULL) {
        cout << node->nama << " " << node->usia << endl;
        node = node->next;
    }
}

int main() {
    Mahasiswa* head = NULL;
    
    // a. Masukkan data Anda
    insertDepan(&head, "NamaAnda", 20); // Ganti "NamaAnda" dengan nama Anda dan "20" dengan usia Anda
    
    // d. Tambahkan data Igor di awal
    insertDepan(&head, "Igor", 20);
    
    // b. Hapus data Akechi
    hapusNode(&head, "Akechi");
    
    // c. Tambahkan data Futaba di antara John dan Jane
    // Kode ini asumsikan bahwa John ada di list dan berada tepat sebelum Jane
    Mahasiswa* temp = head;
    while (temp != NULL && temp->nama != "John") {
        temp = temp->next;
    }
    if (temp != NULL) {
        insertTengah(temp, "Futaba", 18);
    }
    
    // e. Ubah data Michael menjadi Reyn
    ubahData(head, "Michael", "Reyn", 18);
    
    // f. Tampilkan seluruh data
    cetakList(head);
    
    return 0;
}
```
#### Output:
![image](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/f62b8209-90bc-45f5-b680-7a01c3060e2c)

### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.
Case:
1.	Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific
2.	Hapus produk wardah
3.	Update produk Hanasui menjadi Cleora dengan harga 55.000
4.	Tampilkan menu seperti dibawah ini
    <br>Toko Skincare Purwokerto
  	<br>1.	Tambah Data
    <br>2.	Hapus Data
    <br>3.	Update Data
    <br>4.	Tambah Data Urutan Tertentu
    <br>5.	Hapus Data Urutan Tertentu
    <br>6.	Hapus Seluruh Data
    <br>7.	Tampilkan Data
    <br>8.	Exit</br>
    <br>Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :</br>
        <br>Nama Produk	    Harga
        <br>Originote	    60.000
        <br>Somethinc	    150.000
        <br>Azarine	        65.000
        <br>Skintific	    100.000
        <br>Cleora	        55.000
```C++
#include <iostream>
#include <string>

struct Product {
    std::string name;
    double price;
    Product* prev;
    Product* next;
};

class SkincareStore {
private:
    Product* head;
    Product* tail;

public:
    SkincareStore() {
        head = nullptr;
        tail = nullptr;
    }

    void addProduct(const std::string& name, double price) {
        Product* newProduct = new Product;
        newProduct->name = name;
        newProduct->price = price;
        newProduct->prev = nullptr;
        newProduct->next = nullptr;

        if (!head) {
            head = newProduct;
            tail = newProduct;
        } else {
            tail->next = newProduct;
            newProduct->prev = tail;
            tail = newProduct;
        }
    }

    void removeProduct(const std::string& name) {
        Product* current = head;
        while (current) {
            if (current->name == name) {
                if (current->prev) {
                    current->prev->next = current->next;
                } else {
                    head = current->next;
                }
                if (current->next) {
                    current->next->prev = current->prev;
                } else {
                    tail = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
        std::cout << "Product not found: " << name << std::endl;
    }

    void updateProduct(const std::string& oldName, const std::string& newName, double newPrice) {
        Product* current = head;
        while (current) {
            if (current->name == oldName) {
                current->name = newName;
                current->price = newPrice;
                return;
            }
            current = current->next;
        }
        std::cout << "Product not found: " << oldName << std::endl;
    }

    void displayProducts() {
        std::cout << "Nama Produk\tHarga" << std::endl;
        Product* current = head;
        while (current) {
            std::cout << current->name << "\t\t" << current->price << std::endl;
            current = current->next;
        }
    }

    ~SkincareStore() {
        Product* current = head;
        while (current) {
            Product* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    SkincareStore store;
    store.addProduct("Originote", 60000);
    store.addProduct("Somethinc", 150000);
    store.addProduct("Skintific", 100000);

    // Modifikasi sesuai permintaan
    store.addProduct("Azarine", 65000); // Tambahkan Azarine di antara Somethinc dan Skintific
    store.removeProduct("Wardah"); // Hapus produk Wardah (tidak ada dalam data)
    store.updateProduct("Hanasui", "Cleora", 55000); // Update Hanasui menjadi Cleora

    // Tampilkan menu
    std::cout << "Toko Skincare Purwokerto" << std::endl;
    std::cout << "1. Tambah Data" << std::endl;
    std::cout << "2. Hapus Data" << std::endl;
    std::cout << "3. Update Data" << std::endl;
    std::cout << "4. Tambah Data Urutan Tertentu" << std::endl;
    std::cout << "5. Hapus Data Urutan Tertentu" << std::endl;
    std::cout << "6. Hapus Seluruh Data" << std::endl;
    std::cout << "7. Tampilkan Data" << std::endl;
    std::cout << "8. Exit" << std::endl;

    // Tampilkan data produk
    store.displayProducts();

    return 0;
}
```

Struktur Produk mendefinisikan tipe data untuk menyimpan informasi produk, termasuk nama dan harga, serta pointer ke produk sebelumnya (prev) dan berikutnya (next) dalam list. Fungsi tambahData menambahkan produk baru ke dalam list setelah produk tertentu yang ditentukan oleh namaSetelah.
Fungsi hapusData menghapus produk dengan nama tertentu dari list. Fungsi updateData memperbarui informasi produk dengan nama tertentu, mengganti nama dan harga produk tersebut. Fungsi tampilkanData mencetak informasi semua produk dalam list ke konsol, menampilkan nama produk dan harga dalam format tabel.
Dalam fungsi main, program melakukan operasi berikut:

Menambahkan produk “Azarine” dengan harga 65.000 di antara produk “Somethinc” dan “Skintific”. Menghapus produk dengan nama “wardah”. Memperbarui produk “Hanasui” menjadi “Cleora” dengan harga baru 55.000.

#### Full code Screenshot:
![image](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/46e5f1f7-9b6d-420a-9a24-342f48caa3bb)

## Kesimpulan
Linked list adalah struktur data linier yang terdiri dari node yang saling terhubung melalui pointer. Linked list terbagi menjadi beberapa jenis yaitu single, double, dan circular. Linked List memiliki kelebihan pada penggunaan memori dan fleksibekitas. Adapun kekurangannya yaitu memiliki akses acak yang lebih lambat dibandingkan array.

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
