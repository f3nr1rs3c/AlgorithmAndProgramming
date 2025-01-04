using System;

namespace StringInsert
{
    class Program // Main metodunu içeren bir sınıf
    {
        static void Main(string[] args) // Programın giriş noktası
        {
            // Insert a Character
            String name = "Computer Programmer";
            String text = name.Insert(5, "@");
            Console.WriteLine(text);
            Console.ReadKey();
        }
    }
}
