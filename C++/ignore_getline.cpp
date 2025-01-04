#include <iostream>
#include <string> // getline çalıştırabilmek için gereken kütüphaneyi tanımlatıyoruz.
using namespace std;

int main()
{
	int sayfaSayisi;
	string kitapİsmi;
	string yazarİsmi;

	cout << "Kitap sayfa sayısını giriniz: ";
	cin >> sayfaSayisi;

	cin.ignore();

	cout << "Kitap ismini giriniz: ";
	getline(cin, kitapİsmi);

	cout << "Kitabın yazarı kimdir: ";
	getline(cin, yazarİsmi);

	cout << "\nKitap Bilgileri:\n";
	cout << "Kitap İsmi: " << kitapİsmi << endl;
	cout << "Yazar İsmi: " << yazarİsmi << endl;
	cout << "Sayfa Sayısı: " << sayfaSayisi << endl;

	return 0;
}
