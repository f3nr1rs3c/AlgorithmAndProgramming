#include <iostream>
using namespace std;

int main() {
	
	int tatil_paket;
	int kisi_basi;
	double toplam_ücret;

	// Tatil Paketleri
	cout << "Tatil Paketi Seçenekleri: " << endl;
	cout << "1. Antalya Tatili - 1000 TL " << endl;
	cout << "2. Marmaris Tatili - 1500 TL " << endl;
	cout << "3. Yurtdışı Tatili - 2000 TL " << endl;

	// Tatil paketi seçim işlemini yazıyoruz.
	cout << "Tatil paketi numarasını giriniz (1-3): ";
	cin >> tatil_paket;

	// Kişi Başı Sayı Oranı
	cout << "Rezervasyon sayisi alabilir miyim? ";
	cin >> kisi_basi;

	// Tatil seçimi ve fiyat hesaplama işlemi
	if (tatil_paket == 1) {
		toplam_ücret = kisi_basi * 1000; // Antalya Tatili.
		cout << "Antalya tatilini seçtiniz. " << endl;
	}
	else if (tatil_paket == 2) {
		toplam_ücret = kisi_basi * 1500; // Marmaris Tatili
		cout << "Marmaris tatilini seçtiniz. " << endl;
	}
	else if (tatil_paket == 3) {
		toplam_ücret = kisi_basi * 2000; // Yurtdışı Tatili
		cout << "Yurtdışı tatilini seçiniz. " << endl;
	}
	else {
		cout << "Geçersiz bir tatil seçimi yaptınız!" << endl;
		return 1; // İşlemlere hata kodu ile sonlandır.
	}

	// Toplam fiyatları ve tatil seçimlerini ekrana yazdırıyoruz.
	cout << "Toplam fiyat: " << toplam_ücret << " TL " << endl;

	return 0;
}
