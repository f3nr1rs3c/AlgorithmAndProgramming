#include <iostream>
using namespace std;

int main() {
    string mezun;
    int yas;

    cout << "Mezuniyetinizi giriniz: ";
    cin >> mezun;
    cout << "Yaşınızı giriniz: ";
    cin >> yas;

    if(yas > 18 && mezun == "Lise") {
        cout << "Ehliyet alabilirsiniz. ";
    }
    else if(yas < 18 && mezun == "ilkokul, ortaokul") {
        cout << "Ehliyeti alamazsınız. ";
    }
    return 0;
}
