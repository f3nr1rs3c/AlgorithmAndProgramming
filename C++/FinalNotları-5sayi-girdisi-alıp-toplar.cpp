#include <iostream>
using namespace std;

int main()
{
    int yas[5];
    int toplam, ort;
    
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "yas girin \n";
        cin >> yas[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << yas[i] << endl;
    }
    for (int i = 0; i < 5; i++) {
        toplam += yas[i];
    }
    cout << "Toplam: " << toplam << endl;
    cout << "Sonuc: " << toplam / 5;
}
