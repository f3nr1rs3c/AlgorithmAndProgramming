#include  <iostream>
using namespace std;

int main() {
    cout<<"dogukan ispirli"<<endl; // endl komutu alt alta sıralıyor boşluk için kullanılabilir.
    cout<<"merhaba dunya!\n";
    cout<<"nasilsin?"<<endl;
    cout<<"merhaba"<<" "<<"dunya"<<endl; // Boşluk bırakmayı belirtiyor << bu işaret

    cout<<"Dogukan Talha Ispirli"<<endl;
    cout<<"Izmir"<<" "<<"Bornova"<<endl;
    cout<<"21/"<<"04/"<<"2005"<<endl;

    cout<<"Dogukan Talha "<<" Ispirli"<<" 21.04.2005"<<endl; // yazıların başlarına boşluk bırakarak aralarında boşluk yaparız.

    cout<<"Islem ve Sonucu: "<<10+2<<" budur."<<endl; // Toplama İşlemi
    cout<<"Islem ve Sonucu: "<<50-10<<" budur."<<endl; // Çıkarma İşlemi
    cout<<"Islem ve Sonucu: "<<20*10<<" budur."<<endl; // Çarpma İşlemi
    cout<<"Islem ve Sonucu: "<<100%50<<" budur."<<endl; // Mod İşlemi
    cout<<"Islem ve Sonucu: "<<50/10<<" budur."<<endl; // Bölme İşlemi

    int sayi11 = 10;
    int sayi22 = 20;
    cout<<"sayi1 islemi "<< sayi11 <<" sayi2 islemi "<< sayi22<<" Toplam sonuc: "<< sayi11+sayi22<<endl;

    int sayi1 = 50;
    double sayi2 = 30;
    double bolme = sayi1/sayi2;
    int sayi3, sayi4;
    sayi3 = 20;
    cout<<sayi3<<endl;
    cout<<"birinci sayi "<<sayi1<<" ikinci sayi "<<sayi2<<endl;

    int degisken1 = 20;
    int degisken2 = 10;
    int bolmesonuc = degisken1/degisken2;

    cout<<"Bolme islem sonucu:"<<bolmesonuc<<endl;

    string isim = "Dogukan Talha ";
    int yas = 19;
    string dogumYeri = " Izmir ";
    cout<<"Bilgilerim: "<<isim<<yas<<dogumYeri<<endl;

    string adın = "Dogukan";
    int sayisal1 = 20;
    int sayisal2 = 10;
    int bolmeler = sayisal1 /sayisal2;
    int carpmalar = sayisal1 * sayisal2;
    int toplamalar = sayisal1 + sayisal2;
    int cikarmalar = sayisal1 - sayisal2;

    cout<<"Merhaba "<<isim<<" Bolme isleminin sonucu = "<< bolmeler<<endl;
    cout<<"Merhaba "<<isim<<" Carpma isleminin sonucu = "<< carpmalar<<endl;
    cout<<"Merhaba "<<isim<<" Toplama isleminin sonucu = "<< toplamalar<<endl;
    cout<<"Merhaba "<<isim<<" Cikarma isleminin sonucu = "<< cikarmalar<<endl;

    string name;
    int yaslar;

    // cout<<"Merhaba isminizi girermisiniz:";
    cin>>name;

    cout<<"Yasinizi giriniz:";
    cin>>yaslar;
    cout<<"Merhaba "<<name<<" yasiniz "<<yaslar;

    int deger1, deger2;
    cout<<"Deger1 giriniz: ";
    cin>>deger1;
    cout<<"Deger2 giriniz: ";
    cin>>deger2;

    cout<<"Toplama islemi sonucu = "<<deger1 + deger2<<endl;
}
