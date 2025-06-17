#include <iostream>
#include <fstream> // Dosya işlemleri için tanımlanan kütüphane
using namespace std;

int main(){
    ofstream dosya("Ilkornek2.txt"); // Dosyayı yazma modunda açıyor.
    if(!dosya) {
        cout << "Dosya oluşturulamadı!" << endl;
        return 1;
    }
    dosya << "Merhaba Dünya!" << endl; //Dosyaya yazma
    dosya << "Ben Doğukan İSPİRLİ" << endl;
    dosya << "---------------------" << endl;
    dosya << "Karşılama Ekranı" << endl;
    dosya << "Hoşgeldiniz " << endl;
    dosya << "Buda son eklediğim yazı" << endl;
    
    dosya.close(); // Dosya kapatma
    cout << "Veri dosyaya yazıldı. " << endl;
    return 0;
}
// 2.Dosyadan Okuma

#include <iostream>
using namespace std;

int main(){
    cout << "Hello World Denemesi!";
}
