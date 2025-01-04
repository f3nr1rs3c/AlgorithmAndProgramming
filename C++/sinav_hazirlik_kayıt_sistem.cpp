#include <iostream>
using namespace std;

int main()
{
    // Değişkenleri tanımladım.
    string kullaniciAdi;
    string sifre;

    int yasiniz;
    int kimlikNumaraniz;
    int mezuniyet;
    int oyunSecim;
    
    // Giriş
    cout << "** Kişisel Kayıt Sistemine Hoş Geldiniz **\n";
    
    // Kullanıcı Adı
    cout << "Lütfen kullanıcı adınızı giriniz: ";
    cin >> kullaniciAdi;
    
    // Şifre
    cout << "Lütfen şifrenizi giriniz: ";
    cin >> sifre;
    
    // Yaş
    cout << "Yaşınızı girinizi: ";
    cin  >> yasiniz;
    
    if (yasiniz < 18) {
        cout << "Yaşınız 18'den küçük olduğu için kayıt olamazsınız.\n";
        
        return 0; // Kapatıyor çünkü yaşımız yetmiyor.
    }
    else if (yasiniz > 18) {
        cout << "Yaşınız 18 veya daha büyük, kaydınız yapılabilir.\n";
    }
    
    // Kimlik 
    cout << "Kimlik Numaranızı da giriniz: ";
    cin  >> kimlikNumaraniz;
    
    cout << "Mezuniyet Durumunuz nedir? (0: Lise, 1: Üniversite): ";
    cin >> mezuniyet;
    
    // Mezuniyet 
    if (mezuniyet == 0) {
        cout << "Lise mezunu olarak kayıt girildi.\n";
    } 
    else if (mezuniyet == 1) {
        cout << "Üniversite mezunu olarak kayıt girildi.\n";
    } 
    else {
        cout << "Geçersiz mezuniyet durumu girdiniz.\n";
    }
    
    // Kayıt Tamamlandı Mesajı
    cout << "** Kayıt İşleminiz Başarılı Bir Şekilde Tamamlandı! **\n";
    cout << "Kaydınız tamamlandığına göre oyun oynamaya ne dersin? \n";
    
    cout << "Lütfen 1 ile 7 arasında seçim yapınız, yaptığınız seçim rastgele oyun verecektir: ";
    cin >> oyunSecim;
    switch (oyunSecim) { 
    case 1:
        cout << "GTA 5 seçtiniz" << endl;
        break;
    case 2:
        cout << "Battlefield seçtiniz" << endl;
        break;
    case 3:
        cout << "Valorant seçtiniz" << endl;
        break;
    case 4:
        cout << "Counter Strike seçtiniz" << endl;
        break;
    case 5:
        cout << "Call of Duty seçtiniz" << endl;
        break;
    case 6:
        cout << "Minecraft seçtiniz" << endl;
        break;
    case 7:
        cout << "Assassin's Creed seçtiniz" << endl;
        break;
    }
    return 0;
}
