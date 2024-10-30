#include <iostream>
using namespace std;

int main()
{
    // 1DEN 100E KADAR ÇİFT SAYILARIN TOPLAMI
    int i = 0;
    int toplam = 0;
    for (i = 0; i <= 100; i += 2) {
        toplam += 1;
    }
    cout << "Toplam = " << toplam;

}
