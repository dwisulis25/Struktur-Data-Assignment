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
