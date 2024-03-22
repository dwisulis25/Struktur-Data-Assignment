#include <iostream>
using namespace std;

// Menambahkan dua bilangan bulat
float tambah(int a, int b) {
    return a + b;
}

// Mengalikan dua bilangan bulat
float kali(int a, int b) {
    return a * b;
}

int main() {
    int num1 = 5; // Tipe data primitif int
    int num2 = 3; // Tipe data primitif int

    // Hasil penjumlahan dan perkalian
    cout << "Hasil penjumlahan: " << tambah(num1, num2) << endl;
    cout << "Hasil perkalian: " << kali(num1, num2) << endl;

    return 0;
}
