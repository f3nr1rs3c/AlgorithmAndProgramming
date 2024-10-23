#include <iostream>
using namespace std;

int main()
{
    int secim;
    bool tekrar = true;
    while (tekrar) {
        int bakiye = 1000;
        cout << " 1.Ana Yemek " << endl;
        cout << " 2. Tatlı " << endl;
        cout << " 3. Çıkış " << endl;
        cin >> secim;

        switch (secim) {
        case 1:
            cout << "1. Etli Yemek " << endl;
            cout << "2. Tavuklu Yemek " << endl;
            cout << "3. Sebzeli Yemek " << endl;
            cin >> secim;
        switch (secim) {
        case 1:
            cout << "Etli Yemek kalan bakiye: " << bakiye - 200 << endl;
            break;
        case 2:
            cout << "Tavuklu Yemek kalan bakiye: " << bakiye - 150 << endl;
            break;
        case 3:
            cout << "Sebzeli Yemek kalan bakiye: " << bakiye - 100 << endl;
            break;
        }
        case 2:
            cout << "1. Sütlü Tatlı " << endl;
            cout << "2. Şerbetli Tatlı " << endl;
            cout << "3. Çikolatalı Tatlı " << endl;
            cin >> secim;
        switch (secim) {
        case 1: 
            cout << "Sütlü Tatlı kalan bakiye: " << bakiye - 200 << endl;
            break;
        case 2:
            cout << "Şerbetli Tatlı kalan bakiye: " << bakiye - 150 << endl;
            break;
        case 3:
            cout << "Çikolata Tatlı kalan bakiye: " << bakiye - 100 << endl;
            break;
        }
        case 3:
                cout << " 1.Ayran " << endl;
                cout << " 2.Kola " << endl;
                cout << " 3.Meyve Suyu " << endl;
                cin >> secim;
        switch (secim) {
        case 1:
            cout << " Ayran kalan bakiye: " << bakiye - 200 << endl;
            break;
        case 2:
            cout << " Kola kalan bakiye: " << bakiye - 150 << endl;
            break;
        case 3:
            cout << " Meyve suyu kalan bakiye: " << bakiye - 100 << endl;
        }
        break;
        case 4:
            tekrar = false;
            break;
        }
    }
}
