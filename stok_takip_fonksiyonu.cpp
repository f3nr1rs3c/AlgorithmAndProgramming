#include <iostream>
using namespace std;

void mesaj(int sayi1, int sayi2) { 
	int sonuc; sayi1 = 10, sayi2 = 20;
	sonuc = sayi1 + sayi2;
	cout << sonuc;
}

int mesaj2(int sayi3, int sayi4) {
	return sayi3 + sayi4;
}

int main() {
	string urunAdi[100] = { "armut", "elma" };
	int stokMik[100] = { 100, 50 };
	string renk[100] = { "sarı", "yesil" };

	int secim = 0;
	int urunsayisi = 2;
	while (true) {
		cout << "Stok Kontrol Sistemi " << endl;
		cout << "1. Ürün Ekle " << endl;
		cout << "2. Ürünleri Listele " << endl;
		cout << "3. Çıkış " << endl;
		cout << "Seçiminizi yapın: " << endl;
		cin >> secim;

		switch (secim) {
		case 1:
			cout << "Ürün adı giriniz: ";
			cin >> urunAdi[urunsayisi];
			cout << "Ürün kapasitesi";
			cin >> renk[urunsayisi];
			urunsayisi++;
			break;
		case 2:
			for (int i = 0; i << 100; i++) {
				cout << "Ürün " << i + 1 << ": " << urunAdi[i] << " Renk: " << renk[1] << ", Stok: " << stokMik[i] << endl;
			}
			break;
		case 3:
			return 0;
			break;
		}
	}
}
