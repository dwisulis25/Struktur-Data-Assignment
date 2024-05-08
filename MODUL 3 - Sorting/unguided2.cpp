#include <iostream>
#include <string>
#include <vector>
using namespace std;

void bubbleSort(vector<string>& arr) {
    int i, j;
    bool swapped;
    for (i = 0; i < arr.size()-1; i++) {
        swapped = false;
        for (j = 0; j < arr.size()-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main() {
    vector<string> warga = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    bubbleSort(warga);

    cout << "Nama warga setelah diurutkan: ";
    for (const string& nama : warga)
        cout << nama << " ";
    cout << endl;

    return 0;
}