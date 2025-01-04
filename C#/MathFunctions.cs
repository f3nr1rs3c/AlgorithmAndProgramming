using System;

namespace MathFunctions
{
    class Program // Main metodunu içeren bir sınıf
    {
        static void Main(string[] args) // Programın giriş noktası
        {
            double x = 5;
            double y = -5;
            double z = 7.15;
            double a = Math.Pow(x, 5);
            double b = Math.Sqrt(x);
            double c = Math.Abs(y);
            double d = Math.Round(z);
            double e = Math.Floor(z);
            double f = Math.Floor(z);
            double g = Math.Max(x, y);
            double h = Math.Min(y, z);
            Console.WriteLine("a = " + a);
            Console.WriteLine("b = " + b);
            Console.WriteLine("c = " + c);
            Console.WriteLine("d = " + d);
            Console.WriteLine("e = " + e);
            Console.WriteLine("f = " + f);
            Console.WriteLine("g = " + g);
            Console.WriteLine("h = " + h);
            Console.ReadKey();
        }
    }
}
