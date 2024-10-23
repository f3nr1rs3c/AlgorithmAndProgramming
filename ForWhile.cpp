#include <iostream>
using namespace std;

int main()
{
    int secim;
    int bakiye = 1000;

    cout << "1. Ana Yemek " << endl;
    cout << "2. Tatlılar " << endl;
    cout << "3. İçecekler " << endl;
    cin >> secim;
    while (true) {
        switch (secim) {
        case 1:
            cout << "Etli Yemek kalan bakiye: " << bakiye - 200;
            break;
        case 2:
            cout << "Tavuklu Yemek kalan bakiye: " << bakiye - 150;
            break;
        case 3:
            cout << "Sebzeli Yemek kalan bakiye: " << bakiye - 100;
            break;

            switch (secim) {
            case 1:
                cout << "Sütlü Tatlı kalan bakiye: " << bakiye - 150;
                break;
            case 2:
                cout << "Şerbetli Tatlı kalan bakiye: " << bakiye - 100;
                break;
            case 3:
                cout << "Çikolatalı  Tatlı kalan bakiye: " << bakiye - 100;
                break;

                switch (secim) {
                case 1:
                    cout << "Gazlı İçecek kalan bakiye: " << bakiye - 50;
                    break;
                case 2:
                    cout << "Tatlı içecek kalan bakiye: " << bakiye - 20;
                    break;
                case 3:
                    cout << "Ekşi içecek kalan bakiye: " << bakiye - 10;
                    break;

                    return 0;
                }
            }
    }
    }




    /* switch (secim) {
     case 1:
         cout << "Etli Yemek Kalan bakiye";
         cout << "1. Etli Yemek " << endl;
         cout << "2. Tavuklu Yemek" << endl;
         cout << "3. Pilav " << endl;
         cin >> secim;
     switch (secim) {
     case 2:
         cout << "1. Kadayıf " << endl;
         cout << "2. Puding " << endl;
         cout << "3. Cheesecake " << endl;
         cin >> secim;
     switch (secim) {
     case 3:
         cout << "1. RedBull " << endl;
         cout << "2. Coca Cola " << endl;
         cout << "3. Limonata " << endl;
         cin >> secim;
     }
         }
     }*/
}
