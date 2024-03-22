#include <iostream>
using namespace std;

// Definisi class
class Mobil {
public:
    string merk;
    string model;
    int tahun;

    // Fungsi untuk menampilkan data mobil
    void display() {
        cout << "Merk: " << merk << endl;
        cout << "Model: " << model << endl;
        cout << "Tahun: " << tahun << endl;
    }
};

int main() {
    // Membuat objek dari class Mobil
    Mobil mobilSaya;
    mobilSaya.merk = "Toyota";
    mobilSaya.model = "Corolla";
    mobilSaya.tahun = 2020;

    // Memanggil fungsi display
    mobilSaya.display();

    return 0;
}