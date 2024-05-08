#include <iostream>
using namespace std;

void selectionSort(float arr[], int n) {
    int i, j, max_idx;
    float temp;

    for (i = 0; i < n-1; i++) {
        max_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] > arr[max_idx])
            max_idx = j;

        temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    float ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips)/sizeof(ips[0]);

    selectionSort(ips, n);

    cout << "IPS terurut dari yang terbesar hingga terkecil: ";
    for (int i = 0; i < n; i++)
        cout << ips[i] << " ";
    cout << endl;

    return 0;
}