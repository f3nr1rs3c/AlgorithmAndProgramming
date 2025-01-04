#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0; // i'ye 0 tanımlattım.
    do {
        cout << i << " ";
        i++;
    } while (i < 5);
    // Çıktı olarakta 4'e kadar sayıyor. 5 neden yazdırılmıyor denilirse de, 0'da kapsıyor ve 5 için 6 yapmak gerekiyor.
}
