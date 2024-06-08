# <h1 align="center">Laporan Praktikum Modul Priority Queue & Heap</h1>
<p align="center">Dwi Sulistyani</p>

## Dasar Teori
#### Priority queue 
adalah jenis queue yang mengatur elemen berdasarkan nilai
prioritasnya. Elemen dengan nilai prioritas lebih tinggi umumnya akan diambil
sebelum elemen dengan nilai prioritas lebih rendah.Dalam priority queue, setiap elemen memiliki nilai prioritas yang terkait dengannya. Ketika menambahkan elemen ke antrian, elemen tersebut dimasukkan ke dalam posisi berdasarkan nilai prioritasnya. Misalnya, jika menambahkan elemen dengan nilai prioritas tinggi ke priority queue, elemen tersebut mungkin dimasukkan di dekat
bagian depan antrian, sementara elemen dengan nilai prioritas rendah mungkin
dimasukkan di dekat bagian belakang.

Ada beberapa cara untuk mengimplementasikan priority queue, termasuk menggunakan array, linked list, heap, atau binary search tree. Setiap metode memiliki kelebihan dan kekurangannya sendiri, dan pilihan terbaik akan tergantung pada kebutuhan spesifik aplikasi. Priority queue sering digunakan dalam sistem real-time, di mana urutan pemrosesan elemen dapat memiliki konsekuensi yang signifikan. Selain itu, priority queue juga digunakan dalam algoritma untuk meningkatkan efisiensi, seperti algoritma Dijkstra untuk menemukan jalur terpendek dalam grafik dan algoritma pencarian A* untuk pencarian jalur.
### Heap
Dalam struktur data adalah struktur berbasis pohon biner (binary tree) dengan aturan tertentu. Heap memiliki beberapa ciri khas yang membedakannya dari pohon
binary biasa, yaitu:
#### Complete Binary Tree: 
Heap harus berbentuk complete binary tree, di mana setiap levelnya terisi penuh kecuali level paling bawah. Level paling bawah
pun harus terisi dari kiri ke kanan.
#### Order Property: 
Heap bisa dibagi menjadi dua jenis, yaitu max-heap dan
min-heap.
#### Max-heap:
Pada setiap node, nilai orang tua (parent) harus lebih besar atau sama dengan nilai anaknya (children).
### Min-heap: 
Pada setiap node, nilai orang tua harus lebih kecil atau sama dengan nilai anaknya. Dengan aturan ini, nilai terbesar (max-heap) atau terkecil (min-heap) akan selalu berada di node paling atas (root). Heap sering digunakan untuk algoritma sorting seperti heap sort dan juga untuk priority queue.
Heap memiliki kelebihan dalam hal kecepatan operasi. Menambah atau menghapus
elemen dalam heap hanya membutuhkan waktu O(log N), sedangkan mencari elemen
minimum/maksimum hanya membutuhkan waktu konstan O(1).

## Guided 

### 1. Guided

```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
        return (i - 1) / 2;
}

int leftChild(int i) {
        return ((2 * i) + 1);
}

int rightChild(int i) {
        return ((2 * i) + 2);
}

void shiftUp(int i) {
        while (i > 0 && H[parent(i)] < H[i]) {
                std::swap(H[parent(i)], H[i]);
                i = parent(i);
        }
}

void shiftDown(int i) {
        int maxIndex = i;
        int l = leftChild(i);
        if (l <= heapSize && H[l] > H[maxIndex]) {
                maxIndex = l;
        }
        int r = rightChild(i);
        if (r <= heapSize && H[r] > H[maxIndex]) {
                maxIndex = r;
        }
        if (i != maxIndex) {
                std::swap(H[i], H[maxIndex]);
                shiftDown(maxIndex);
        }
}

void insert(int p) {
        heapSize = heapSize + 1;
        H[heapSize] = p;
        shiftUp(heapSize);
}

int extractMax() {
        int result = H[0];
        H[0] = H[heapSize];
        heapSize = heapSize - 1;
        shiftDown(0);
        return result;
}

void changePriority(int i, int p) {
        int oldp = H[i];
        H[i] = p;
        if (p > oldp) {
                shiftUp(i);
        } else {
                shiftDown(i);
        }
}

int getMax() {
        return H[0];
}

void remove(int i) {
        H[i] = getMax() + 1;
        shiftUp(i);
        extractMax();
}

int main() {
        insert(45);
        insert(20);
        insert(14);
        insert(12);
        insert(31);
        insert(7);
        insert(11);
        insert(13);
        insert(7);

        std::cout << "Priority Queue : ";
        for (int i = 0; i <= heapSize; ++i) {
                std::cout << H[i] << " ";
        }

        std::cout << "\n";

        std::cout << "Node with maximum priority : " << extractMax() << "\n";

        std::cout << "Priority queue after extracting maximum : ";

        for (int i = 0; i <= heapSize; ++i) {
                std::cout << H[i] << " ";
        }
        std::cout << "\n";

        changePriority(2, 49);
        std::cout << "Priority queue after priority change : ";
        for (int i = 0; i <= heapSize; ++i) {
                std::cout << H[i] << " ";
        }
        std::cout << "\n";

        remove(3);
        std::cout << "Priority queue after removing the element : ";
        for (int i = 0; i <= heapSize; ++i) {
                std::cout << H[i] << " ";
        }

        return 0;
}
```
Kode di atas adalah implementasi dari priority queue yang menggunakan heap.
int H[50]; mendeklarasikan array H yang akan digunakan sebagai penyimpanan elemen heap.
int heapSize = -1; mendeklarasikan variabel heapSize yang menunjukkan ukuran heap saat ini.parent, leftChild, rightChild adalah fungsi pembantu yang menghitung indeks orang tua, anak kiri, dan anak kanan dari elemen yang diberikan di heap.
shiftUp adalah fungsi yang memperbaiki heap jika elemen anak lebih besar dari elemen orang tuanya. Ini digunakan saat menambahkan elemen baru ke heap.
shiftDown adalah fungsi yang memperbaiki heap jika elemen orang tua lebih kecil dari salah satu anaknya. Ini digunakan saat menghapus elemen dari heap.
insert adalah fungsi untuk menambahkan elemen baru ke dalam heap.
extractMax adalah fungsi untuk mengambil dan menghapus elemen dengan prioritas tertinggi dari heap.
changePriority adalah fungsi untuk mengubah prioritas elemen yang ada di heap dan memperbaiki heap sesuai dengan perubahan tersebut.
getMax adalah fungsi untuk mendapatkan elemen dengan prioritas tertinggi tanpa menghapusnya dari heap.
remove adalah fungsi untuk menghapus elemen tertentu dari heap.
main adalah fungsi utama yang menunjukkan bagaimana fungsi-fungsi tersebut digunan

## Unguided 

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user

```C++
#include <iostream>
#include <algorithm>
#include <vector>

class PriorityQueue {
private:
    std::vector<int> H;
    int heapSize = -1;

    int parent(int i) {
        return (i - 1) / 2;
    }

    int leftChild(int i) {
        return ((2 * i) + 1);
    }

    int rightChild(int i) {
        return ((2 * i) + 2);
    }

    void shiftUp(int i) {
        while (i > 0 && H[parent(i)] < H[i]) {
            std::swap(H[parent(i)], H[i]);
            i = parent(i);
        }
    }

    void shiftDown(int i) {
        int maxIndex = i;
        int l = leftChild(i);
        if (l <= heapSize && H[l] > H[maxIndex]) {
            maxIndex = l;
        }
        int r = rightChild(i);
        if (r <= heapSize && H[r] > H[maxIndex]) {
            maxIndex = r;
        }
        if (i != maxIndex) {
            std::swap(H[i], H[maxIndex]);
            shiftDown(maxIndex);
        }
    }

public:
    void insert(int p) {
        heapSize++;
        if (heapSize >= H.size()) {
            H.push_back(p);
        } else {
            H[heapSize] = p;
        }
        shiftUp(heapSize);
    }

    int extractMax() {
        if (heapSize < 0) {
            throw std::length_error("Heap is empty");
        }
        int result = H[0];
        H[0] = H[heapSize];
        heapSize--;
        shiftDown(0);
        return result;
    }

    void changePriority(int i, int p) {
        int oldp = H[i];
        H[i] = p;
        if (p > oldp) {
            shiftUp(i);
        } else {
            shiftDown(i);
        }
    }

    int getMax() {
        if (heapSize < 0) {
            throw std::length_error("Heap is empty");
        }
        return H[0];
    }

    void remove(int i) {
        H[i] = getMax() + 1;
        shiftUp(i);
        extractMax();
    }

    void printHeap() {
        for (int i = 0; i <= heapSize; ++i) {
            std::cout << H[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    PriorityQueue pq;
    int choice, value;

    do {
        std::cout << "1. Insert\n";
        std::cout << "2. Extract Max\n";
        std::cout << "3. Change Priority\n";
        std::cout << "4. Remove\n";
        std::cout << "5. Print Heap\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the value to insert: ";
                std::cin >> value;
                pq.insert(value);
                break;
            case 2:
                std::cout << "Max value: " << pq.extractMax() << "\n";
                break;
            case 3:
                int index;
                std::cout << "Enter the index and value to change priority: ";
                std::cin >> index >> value;
                pq.changePriority(index, value);
                break;
            case 4:
                std::cout << "Enter the index to remove: ";
                std::cin >> index;
                pq.remove(index);
                break;
            case 5:
                pq.printHeap();
                break;
            case 6:
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

```
#### Output:
Kode di atas adalah implementasi dari priority queue yang menggunakan heap yang dumodifikasi yang mana heap dikonstruksi secara manual berdasarkan user. H diubah menjadi std::vector<int> untuk memungkinkan penambahan elemen secara dinamis. Fungsi main yang memungkinkan pengguna untuk memilih operasi yang ingin dilakukan pada heap, seperti memasukkan elemen, mengambil elemen dengan prioritas tertinggi, mengubah prioritas elemen, menghapus elemen, dan mencetak heap. 

#### Full code Screenshot:
![image](https://github.com/dwisulis25/Struktur-Data-Assignment/assets/162300904/c98d1b97-1e74-4367-9121-bb894844ec39)

## Kesimpulan
Priority queue adalah struktur data yang efisien untuk mengelola kumpulan elemen dengan prioritas yang berbeda-beda. Dengan menggunakan heap, baik itu max-heap atau min-heap, priority queue dapat melakukan operasi penambahan dan penghapusan elemen dengan waktu yang sangat cepat, yaitu O(log N), dan memungkinkan akses ke elemen dengan prioritas tertinggi atau terendah dalam waktu konstan O(1).

## Referensi
[1] GeeksforGeeks. (2024, Mei 12). Priority Queue - Set 1: Introduction.
https://www.geeksforgeeks.org/priority-queue-set-1-introduction/. Diakses tanggal 13
Mei 2024. 2.

[2] Programiz. (n.d.). Heap Data Structure.
https://www.programiz.com/dsa/heap-data-structure. Diakses tanggal 13 Mei 2024
