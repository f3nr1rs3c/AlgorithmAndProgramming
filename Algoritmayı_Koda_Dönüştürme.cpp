#include <iostream>
using namespace std;

int main()
{
    int topOrt = 0;
    int not1, not2;
    int sınıfOrt = 0;
    int ort = 0;

    for (int i = 1; i <= 3; i++) {
        cout << "Vize notunu giriniz: ";
        cin >> not1;
        cout << "Final notunu giriniz: ";
        cin >> not2;
        
        ort = (not1 + not2) / 2;
        topOrt += ort;
    }
}
