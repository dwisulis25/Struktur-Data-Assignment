#include <iostream>
#include <iomanip>
using namespace std;

string simpul[7] = {"Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"};

int busur[7][7] = {
	{0, 7, 8, 0, 0, 0, 0},
	{0, 0, 5, 0, 9, 15, 0},
	{0, 5, 0, 9, 5, 0, 0},
	{0, 0, 0, 2, 4, 0, 8},
	{3, 0, 0, 1, 0, 0, 0},
	{0, 0, 7, 0, 0, 9, 4},
	{0, 0, 0, 0, 8, 0, 0}
};

void tampilGraph() {
	for (int baris = 0; baris < 7; baris++) {
		cout << simpul[baris] << ": ";
		for (int kolom = 0; kolom < 7; kolom++) {
			if (busur[baris][kolom] != 0)
				cout << " -> " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
		}
		cout << endl;
	}
}

int main() {
	tampilGraph();
	return 0;
}