#include <iostream>
#include <algorithm> // untuk std::sort
#include <string>    // untuk std::string dan std::getline

using namespace std;

// Fungsi untuk melakukan binary search pada string
bool binarySearch(const string& str, char value) {
    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (str[middle] == value) {
            return true; // Huruf ditemukan
        } else if (str[middle] < value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return false; // Huruf tidak ditemukan
}

int main() {
    string kalimat;
    char huruf;

    // Meminta user untuk memasukkan sebuah kalimat
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    // Meminta user untuk memasukkan huruf yang ingin dicari
    cout << "Masukkan huruf yang ingin Anda cari: ";
    cin >> huruf;

    // Mengurutkan kalimat
    sort(kalimat.begin(), kalimat.end());

    // Mencari huruf menggunakan binary search
    bool found = binarySearch(kalimat, huruf);

    // Menampilkan hasil
    if (found) {
        cout << "Huruf '" << huruf << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}