#include <iostream>
#include <string>
using namespace std;

int main()
{
	string isim;
	int yas;

	cout << "İsminizi giriniz: ";
	cin >> isim;

	cout << "Yasinizi giriniz: ";
	cin >> yas;

	if(yas == 18){
		cout << "Yasiniz yetiyor.";
		getline(cin, isim);
	}
	else if(yas < 18) {
		cout << "Yasiniz kücüktür.";
		getline(cin, isim);
	}
	else if (yas > 18) {
		cout << "Yaşınız büyük, geç buyur!";
		getline(cin, isim);
	}

	return 0;
}


