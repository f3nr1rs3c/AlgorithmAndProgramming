using System;

namespace ReplaceChar
{
    class Program // Main metodunu içeren bir sınıf
    {
        static void Main(string[] args) // Programın giriş noktası
        {
            String text = ".Co/ol?";
            Console.WriteLine(text);
            // Replacing Characters
            text = text.Replace("*.", "*");
            text = text.Replace("?", "*");
            text = text.Replace("/", "");
            Console.WriteLine(text);
            Console.ReadKey();
        }
    }
}
