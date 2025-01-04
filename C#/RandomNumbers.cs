using System;

namespace RandomNumbers
{
    static void Main(string[] args)
    {
        Random random = new Random();
        int num1 = random.Next(1, 11);
        int num2 = random.Next(1, 11);
        int num3 = random.Next(1, 11);
        int num4 = random.Next(1, 11);
        int num5 = random.Next(1, 11);
        Console.WriteLine("Random Number 1 : " + num1);
        Console.WriteLine("Random Number 2 : " + num2);
        Console.WriteLine("Random Number 3 : " + num3);
        Console.WriteLine("Random Number 4 : " + num4);
        Console.WriteLine("Random Number 5 : " + num5);

        Console.ReadKey();
    }
}
