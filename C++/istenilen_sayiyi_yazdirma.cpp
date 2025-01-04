#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int toplam = 0;
    int bitis;
    cout << "Kaça kadar çift sayıları toplasın? ";
    cin >> bitis;

    for (i = 0; i <= bitis; i += 2) {
        toplam += i;
    }
    cout << "Toplam = " << toplam;
}
