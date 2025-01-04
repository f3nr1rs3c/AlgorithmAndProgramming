using System;

namespace StringMethods
{
    class Program // Main metodunu içeren bir sınıf
    {
        static void Main(string[] args) // Programın giriş noktası
        {
            Console.WriteLine("*Uppercase*");
            String name = ("Ultra Programmer");
            name = name.ToUpper();
            Console.WriteLine(name);
            Console.WriteLine("*Lowercase*");
            name = name.ToLower();
            Console.WriteLine(name);
            Console.ReadKey();
        }
    }
}
