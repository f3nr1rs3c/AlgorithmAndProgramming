#include <iostream>
using namespace std;


int main()
{
    int secim;
    cout << "Lütfen 1-7 arası değer giriniz.";

    switch (secim) { // Sayısal seçimlerde kullanılıyor "switch"
    case 1:
        cout << "Pazartesi";
        break;
    case 2:
        cout << "Salı";
        break;
    case 3:
        cout << "Çarşamba";
        break;
    case 4:
        cout << "Perşembe";
        break;
    case 5:
        cout << "Cuma";
        break;
    case 6:
        cout << "Cumartesi";
        break;
    case 7:
        cout << "Pazar";
        break;
    }
}
