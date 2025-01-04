using System;

namespace UserInput
{
    class Program // Main metodunu içeren bir sınıf
    {
        static void Main(string[] args) // Programın giriş noktası
        {
            Console.WriteLine("What's your name? ");
            String name = Console.ReadLine();
            Console.WriteLine("How old are you? ");
            int age = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Hello, " + name);
            Console.WriteLine("You are " + age + " years old");
            Console.ReadKey();
        }
    }
}
