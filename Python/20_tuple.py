# Tuple veri tipi listeler gibi birden çok veri tipini bir arada tutmamızı sağlar.
# listelerden farklı olarak tuple'lar immutable'dır.

# * Mesela bir deniz fenerinin konumunu belirtmek istiyoruz. Bunun x ve y koordinat değerleri var
# * (x,y). Deniz fenerini söküp götüremiyoruz, ben bunu iki değerin sabit, değiştirelemez olmasını istiyorum.
# * Burada bu iki değeri tutmak için tuple kullanmam mantıklı olabilir. Değişmeyeceğini bilgidiğim değerleri bir arada tutmak için.

# * tuple'lar (element1, element2...) şeklinde tanımlanır.
# * tuple'lar listeler gibi farklı veri yapılarında elemanlardan oluşabilir. Elemanları tuple bile olabilir.

x = 10
y = 34
konum = (10, 34)

# * Aynı listelerdeki gibi indexleme yapabiliyoruz.

konum(0)
konum(:)
 
konum[0] = 100
# * Farklı veri tipleri barındırabiliyor.

t = (1, 2, 3, "a")
t
t = ((1,2),3)
t[0]
t[1]
t = ([1,2,3],2,(1,2))
t[0][0] = 23

# ! Elemanların Değerlerini Değiştirmek
# * x ve y'nin dğeelerini değiştirmek istiyorum diyelim.
x = 2
y = 3

# * bunu şöyle yapabiliriz.
temp = x 
x = y
y = temp # sonuç olarak x 3 ile y ise 2 ile eşitleniyor.

# * Ama bunu tuple'lar ile 1 satırda yapabiliriz.
x = 2
y = 3

(x, y) = (y, x)
x
y

# * parantez koymamıza gerek yok. 1,2,3,"a"... gibi parantezsiz belirtsek de python tuple olarak görüyor.

1, 2, 3, 4
a = 1,2,3,4

type(a)

x = 2
y = 3

x, y = y, x
