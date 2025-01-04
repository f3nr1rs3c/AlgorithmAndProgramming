using System;

namespace IF_STATEMENTS
{
    class Program // Main metodunu içeren bir sınıf
    {
        static void Main(string[] args) // Programın giriş noktası
        {
            Console.WriteLine("What's your favorite movie: ");
            String movie = Console.ReadLine();
            if (movie != "")
            {
                Console.WriteLine("Nice Choice!");
            }
            else
            {
                Console.WriteLine("You didn't answer!");
            }
            Console.WriteLine();
        }
    }
}
