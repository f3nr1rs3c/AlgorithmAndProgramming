#include <iostream>
using namespace std;

int main() {
    int yas = 10;
    cout << "Lütfen yasinizi giriniz";
    cin >> yas;
    if(yas < 18) {
        cout << "Yasin 18'den küçük" << endl;
    }
    else if(yas > 18)
    {
        cout << "Yasiniz 18'den büyük" << endl;
    }
    else if(yas >= 18) {
        cout << "Yasiniz esit, gecebilirsiniz." << endl;
    }
    return 0;
}
