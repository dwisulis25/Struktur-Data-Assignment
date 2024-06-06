#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
	if (n > 0) {
		cout << n << " ";
		functionB(n - 1); // Panggilan rekursif tidak langsung
	}
}

void functionB(int n) {
	if (n > 0) {
		cout << n << " ";
		functionA(n / 2); // Panggilan rekursif tidak langsung
	}
}

int main() {
	int num = 5;
	cout << "Rekursif Tidak Langsung: ";
	functionA(num);
 	return 0;
}

