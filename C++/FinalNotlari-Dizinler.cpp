#include <iostream>
using namespace std;

int main() {
	int diz[5];
	int sonuc;

	for (int i = 0; i < 5; i++) {
		cin >> diz[i];
	}
	for (int i; i <= 5; i++) {
		sonuc += diz[i];
	}
	cout << sonuc / 5;
}
