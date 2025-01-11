# Dictionaries
# * Listeler bize bir arada tutulması anlamlı olacak verileri bir arada tutma gücü verir.
# * Mesela bir sınıftaki 3 öğrencinin sınavdan aldıkları notlar

notlar = [80,72,95]

isim = ["Deniz", "Ege", "Gizem"]

isim[0]

notlar[0]

print(isim[0], "adlı öğrencinin notu", notlar[0])
# * Öğrenci numaralarını tutmak istiyorsam bunu içinde ayrı bir liste oluşturmam lazım.

no = [703, 408, 690]

isim[0]

notlar[0]

# * Dictionary yapısının elemanlarına erişmek için belirli "key"'ler kullanacağız ve oda bize "value"'lar verecek.

# * dictionaryleri süslü parantez {} ile belirteyeceğiz.

# * Formumuz {key1:value2, key2:value2...} şeklinde olacak

# * Elemanlarına ulaşmak için non-scaler veri tiplerinde yaptığımız gibi [] kullanacağız. Ama * dictionarylerin elemanlarına ulaşmak için belirlediğimiz keyler kullanıcağız
# * integer, indexing değil

notlar = {"Deniz": 80, "Ege": 72, "Gizem": 95}
notlar["Ege"]
ogrenciler = {"Deniz": {"not": 80, "ogrenci_no": 703}, "Ege": {"not": 72, "ogrenci_no": 408}, "Gizem": {"not": 95, "ogrenci_no": 690}}
ogrenciler["Ege"]["not"]
ogrenciler["Ege"]["ogrenci_no"]

# ! Olmayan Bir Eleman Sorgulamak
# * Olmayan bir key ile eleman sorgusu yaparsak hata alırız.

notlar["Mert"] # mert'i getir diyince hata verir çünkü böyle öğrenci yok.

# ! Integer Indexing ile Eleman Sorgusu Yapmak
# * Dictionaryler "key-value" mantığı ile çalışıyor. O yüzden biz "notlar[0]" gibi bir sorgu yaptığmızda, "0" diye bir key var mı diye bakıyor yoksa hata veriyor.

# ! Value Değerlerini Değiştirmek
# * Diyelim ki Ege'nin notu yanlış okunmuş, notunu 5 puan arttıracağız

notlar
notlar["Ege"] = notlar["Ege"] + 5
notlar["Ege"]

# ! len()
# * len() fonksiyonunu dictioınarylerde kullandığımız zaman bize kaç tane key varsa onun sayısını veriyor

notlar # deniz ege ve gizem hepsi ve notlarının çıktsını veiryor.

len(notlar)

# ! Eleman Eklemek
# * Dictionarylere eleman eklemek gerçekten kolay. Tamam yazmayı bırakıp direkt göstereyim:

notlar
notlar["Mert"]  = 58
notlar

# ! Eleman Silmek
notlar # tüm çıktıları yine veriyor

del notlar["Mert"] # Mertin bilgileirni siliyor

notlar

# ! Sadece Immutable Tipindeki Veriler "key" olabilir

d = {1:2, 3:"b"}
d[1]
d[3]
d2 = {(1, 2): "a", (4,5): [1,2,3]}
d2[(1,2)]
d2[(4,5)]
d3 = {[1,2]:4}

# ! Boş Bir Dictionary Yaratmak

d = {}
d # çıktısı veriyor

d[1] = "a"

# ! Bir Değer Keyler Arasında Var mı Sorgusu Yapmak
# * Bir elemanın dictionary içinde olup olmadığını sorgulamak, list ve tuple'larda sorgulamaktan daha hızlıdır.

notlar

"Mert" in notlar

"Deniz" in notlar
