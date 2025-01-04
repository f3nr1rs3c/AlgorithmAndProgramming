using System;

namespace IF_STATEMENTS
{
    class Program // Main metodunu içeren bir sınıf
    {
        static void Main(string[] args) // Programın giriş noktası
        {
            Console.WriteLine("Please Enter a Number: ");
            int num = Convert.ToInt32(Console.ReadLine());
            if (num > 0)
            {
                Console.WriteLine("When The Why Gets Stronger,");
                Console.WriteLine("The How Gets Easier.");
            }
            else if (num == 0)
            {
                Console.WriteLine("If you want to be good at something ");
                Console.WriteLine("then be bad at it first.");
            }
            else
            {
                Console.WriteLine("We are what we repeatedly do.");
                Console.WriteLine("Excellence, then, is not an act, but a habit.");
            }
            Console.ReadKey();
        }
    }
}
