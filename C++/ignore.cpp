#include <iostream>
#include <string> // getline için gerekli olduğu için bu kütüphanemizi tanımladık.
using namespace std;

int main()
{
    string isim;
    int yas;

    cout << "Yaşınızı giriniz: ";
    cin >> yas;

    cin.ignore();

    cout << "İsminizi giriniz: ";
    getline(cin, isim);

    cout << "Yaşınız: " << yas << endl;
    cout << "İsminizi: " << isim << endl;

    return 0;

}
