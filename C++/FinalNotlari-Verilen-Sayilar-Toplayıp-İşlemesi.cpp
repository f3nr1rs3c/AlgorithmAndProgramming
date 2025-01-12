#include <iostream>
using namespace std;

void toplamaHesapla(int sayi1, int sayi2) {
    int toplam;
    toplam = sayi1 + sayi2;
    cout << toplam << endl;
}

int cikarmaHesapla(int sayi1, int sayi2) {
    int cikarma;
    cikarma = sayi1 - sayi2;
    return cikarma;
}

int main() {
    int s1, s2, s3, s4;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    cin >> s4;

    // Düzeltilen toplamaHesapla çağrıları
    toplamaHesapla(s1, s2);  // İkinci parametre eksikti, ekledik.
    toplamaHesapla(10, 5);
    toplamaHesapla(s3, s4);
    toplamaHesapla(50, 60);

    cout << cikarmaHesapla(s1, s2);
}
