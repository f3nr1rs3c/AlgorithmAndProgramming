#include <iostream>
using namespace std;

int main() {
    int characterChoice; // Karakter seçimi
    int reward = 0; // Kazanılan ödül miktarı, 0 ile başlicak.
    int health; // Karakter sağlığı
    int attack; // Karakterin saldırı gücü
    int mapChoice; // Harita seçimi
    
    // Canavar değişkenleri
    int monsterHealth; // Canavarın sağlığı
    int monsterAttack; // Canavarın saldırı gücü
    char continueGame = 'e'; // Oyuna devam etme
    
    cout << " ** Canavar Savaşçısına Hoş Geldiniz ** " << endl;
    
    // Karakter Bilgileri
    cout << "1. Savaşçı (100 Sağlık, 20 Saldırı)" << endl;
    cout << "2. Suikastçi (80 Sağlık, 25 Saldırı)" << endl;
    cout << "3. Cadı (70 Sağlık, 30 Saldırı)" << endl;
    cout << "Seçimizi yapınız (1 - 2 - 3): ";
    cin >> characterChoice;
    
    // Karakter seçim bölümü
    cout << "İstediğiniz karakteri seçebilirsiniz: ";
    switch(characterChoice) {
        case 1:
            health = 100;
            attack = 20;
            break;
        case 2:
            health = 80;
            attack = 25;
            break;
        case 3:
            health = 70;
            attack = 30;
            break;
    }
    while (continueGame == 'E' || continueGame == 'e') {
        cout << "\nHarita Seçiniz:\n";
        cout << "1.Karanlık Vadi(Kurt - 100 Sağlık, 15 Saldırı)\n";
        cout << "2.Uçurum Dağı(Akrep - 100 Sağlık, 15 Saldırı)\n";
        cout << "3.Sisli Orman(Dev - 100 Sağlık, 15 Saldırı)\n";
        cout << "Seçimizi yapınız (1 - 2 - 3): ";
        cin >> mapChoice;
    }
    switch (mapChoice) {
       case 1:
           monsterHealth = 100;
           monsterAttack = 15;
        break;
       case 2:
           monsterHealth = 70;
           monsterAttack = 20;
        break;
       case 3:
           monsterHealth = 50;
           monsterAttack = 25;
        break;
    }
    cout << "Savaş başlasın o zaman!\n";
    cout << "Canavarın Sağlığı: " << monsterHealth << "  Canavarın Saldırı Gücü: " << monsterAttack << endl;
    cout << "Karakterinizin Sağlığı: " << health << "  Karakterinizin Saldırı Gücü: " << attack << endl;

    // Her iki taraf sırayla saldırıcak
    while (health > 0 && monsterHealth > 0) {
        // Karakterin saldırısı
        monsterHealth -= attack;
        cout << "Canavar " << attack << " hasar aldı. Canavarın Sağlığı: " << monsterHealth << endl;

        // Eğer canavar ölümü
        if (monsterHealth <= 0) {
            cout << "Tebrikler! Canavarı yendiniz!" << endl;
            reward += 10; // Ödül kazanıldı
            break;
        }

        // Canavarın saldırısı
        health -= monsterAttack;
        cout << "Canavar size " << monsterAttack << " hasar verdi. Karakterinizin Sağlığı: " << health << endl;

        // Oyuncu ölünce
        if (health <= 0) {
            cout << "Üzgünüz, oyunu kaybettiniz!" << endl;
            break;
        }
    }
    
    // Ödül ve son durum
    cout << "Kazandığınız ödül: " << reward << endl;
    
    // Oyuna devam etme
    cout << "Oyuna devam etmek ister misiniz? (e - devam et, h - çıkış): ";
    cin >> continueGame;

    if (continueGame == 'e' || continueGame == 'E') {
        cout << "Oyuna devam ediyorsunuz..." << endl;
    } else {
        cout << "Oyunu bitirdiniz. Görüşmek üzere!" << endl;
    }
    return 0;
}
