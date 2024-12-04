#include <iostream>
using namespace std;

int main()
{
    string isimler[3];
    cout << "Lütfen 3 adet isim giriniz: ";
    cin >> isimler[0];
    cin >> isimler[1];
    cin >> isimler[2];
    string soyisimler[9];

    cout << "Yazdıgınız isimler = " << isimler[0] << endl;
    cout << "Yazdıgınız isimler = " << isimler[1] << endl;
    cout << "Yazdıgınız isimler = " << isimler[2] << endl;

    for (int i = 0; i < 3; i++) {
        cin >> isimler[i];
        cout << isimler[i] << " ";
    }
    for (int i = 0; i < 9; i++) {
        cout << "İsminiz: " << isimler[i];
        cout << "Soyisiminiz: " << soyisimler[i] << endl;
    }
}
