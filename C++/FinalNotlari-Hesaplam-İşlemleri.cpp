#include <iostream>
using namespace std;

int main() {
	int secim;
	int s1;
	int s2;
	while(true){
		cout << "1.Toplama 2.Çarpma 3.Tekçift kontrolü 4.Çıkış" << endl;
		cin >> secim;
		switch (secim) {
		case 1:
			cout << "Birinci sayıyı giriniz: " << endl;
			cin >> s1;
			cout << "İkinci sayıyı giriniz: " << endl;
			cin >> s2;
			cout << "Toplama işleminin sonucu: " << endl;
		break;
		case 2:
			cout << "Birinci sayıyı giriniz: " << endl;
			cin >> s1;
			cout << "İkinci sayıyı giriniz: " << endl;
			cin >> s2;
			cout << "Çarpma işleminin sonucu: " << s1 * s2 << endl;
		break;
		case 3:
			cout << "Tek çift kontrolü için bir sayı giriniz: ";
			cin >> s1;
			if (s1 % 2 == 0) {
				cout << "girdiğiniz sayı çift: " << s1 << endl;
		}
		else {
				cout << "girdiğiniz sayı tek: " << s1 << endl;
		}
		break;
		case 4:
		    return 1;
		break;
	    }
	}
}
