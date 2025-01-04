using System;

namespace TypeCasting
{
    class Program // Main metodunu içeren bir sınıf
    {
        static void Main(string[] args) // Programın giriş noktası
        {
            /* Convert Double To Int */
            double a = 2.52;
            int b = Convert.ToInt32(a);
            Console.WriteLine(b.GetType());

            /* Convert Int To Double */
            int c = 235;
            double d = Convert.ToDouble(c.GetType());
            Console.WriteLine(d.GetType());

            /* Convert Int To String */
            int e = 21;
            String f = Convert.ToString(e);
            Console.WriteLine(f.GetType());

            /* Convert String To Char */
            String g = "*";
            char h = Convert.ToChar(g);
            Console.WriteLine(h.GetType());

            /* Convert Int To Double */
            String i = "True";
            bool j = Convert.ToBoolean(i);
            Console.WriteLine(j.GetType());
            Console.ReadKey();
        }
    }
}
