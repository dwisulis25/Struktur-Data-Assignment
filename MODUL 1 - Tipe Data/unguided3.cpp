#include <iostream>
#include <map>
using namespace std;

int main() {
    // Membuat map dengan key tipe string dan value tipe int
    map<string, int> umur;

    // Menambahkan data ke dalam map
    umur["Alice"] = 25;
    umur["Bob"] = 28;
    umur["Charlie"] = 32;

    // Menampilkan semua data dalam map
    for (const auto &pair : umur) {
        cout << pair.first << " berumur " << pair.second << " tahun." << endl;
    }

    return 0;
}