using System;

namespace IntVariable
{
    class Program
    {
        static void Main(string[] args)
        {
            int x;
            int y;
            int z;
            x = 56;
            y = 28;
            z = x + y;
            Console.WriteLine("x = " + x);
            Console.WriteLine("y = " + y);
            Console.WriteLine("z = x + y = " + x + " + " + y + " = " + z);
            Console.ReadKey();
        }
    }
}
