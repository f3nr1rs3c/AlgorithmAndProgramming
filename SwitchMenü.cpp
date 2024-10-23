#include <iostream>
using namespace std;

int main()
{
	int tatil_paket;
	int kisi_basi;
	double toplam_ucret = 0;

	// Tatil Paketleri
	cout << "Tatil Paketi Seçenekleri: " << endl;
	cout << "1. Antalya Tatili - 1000 TL " << endl;
	cout << "2. Marmaris Tatili - 1500 TL " << endl;
	cout << "3. Yurtdışı Tatili - 2000 TL " << endl;

	// Kişi sayısı alınır
	cout << "Kaç kişi için rezervasyon yapmak istiyorsunuz? ";
	cin >> kisi_basi;

	// Tatil paketi seçimi
	cout << "Tatil paketi numarasını giriniz (1-3): ";
	cin >> tatil_paket;

	switch (tatil_paket) { // Tatil paketinin seçimi yapıyoruz.
	case 1:
		cout << "Antalya Tatilini seçtiniz." << endl;
		toplam_ucret = kisi_basi * 1000;
		break;
	case 2:
		cout << "Marmaris Tatilini seçtiniz." << endl;
		toplam_ucret = kisi_basi * 1500;
		break;
	case 3:
		cout << "Yurtdışı Tatilini seçtiniz." << endl;
		toplam_ucret = kisi_basi * 2000;
		break;
	default:
		cout << "Geçersiz bir seçim yaptınız." << endl;
		return 1; // Hatalı seçimde programı bitirir
	}

	cout << "Toplam ücret: " << toplam_ucret << " TL" << endl;

	return 0;
}
