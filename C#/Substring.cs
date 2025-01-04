using System;

namespace Substring
{
    class Program // Main metodunu içeren bir sınıf
    {
        static void Main(string[] args) // Programın giriş noktası
        {
            String fullname = "Computer Programmer";
            String firtsname = fullname.Substring(0, 5);
            String lastname = fullname.Substring(5, 10);
            Console.WriteLine("Firstname: ");
            Console.WriteLine(firtsname);
            Console.WriteLine("Lastname : ");
            Console.WriteLine(lastname);
            Console.ReadKey();
        }
    }
}
