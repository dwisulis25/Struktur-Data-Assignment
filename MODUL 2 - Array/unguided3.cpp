#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Mencari nilai maksimum
    int max_val = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    // Mencari nilai minimum
    int min_val = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    // Menghitung nilai rata-rata
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / n;

    cout << "Nilai maksimum: " << max_val << endl;     //Untuk menyimpan nilai max
    cout << "Nilai minimum: " << min_val << endl;     //Untuk menyimpan nilai min
    cout << "Nilai rata-rata: " << average << endl;  //Untuk menyimpan nilai rata-rata
    return 0;
}