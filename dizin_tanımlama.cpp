#include <iostream>
using namespace std;

int main() {
	string ogrenciNo[4] = { "101", "202", "303", "404" };
	string adSoyad[4] = { "mehmet", "ahmet", "recep", "dogukan" };
	string dogumTarihi[4] = { "2002", "2003", "2004", "2005" };

	string arama;

	cout << "Lütfen aramak istediğiniz öğrencinin numarasını giriniz: ";
	cin >> arama;

	int no = -1;
	for (int i = 0; i < 5; i++) {
		if (arama == ogrenciNo[i]) {
			cout << " ögrenci numarası: " << ogrenciNo[i];
			cout << "ad soyad: " << adSoyad[i] << " ";
			cout << "dogum tarihi: " << dogumTarihi[i] << " ";
		}
	}
}
