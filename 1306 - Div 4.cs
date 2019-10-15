http://coj.uci.cu/24h/problem.xhtml?pid=1306
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            int T =int.Parse(Console.ReadLine());

            while (T-- > 0)
            {

                string N = Console.ReadLine();

                if (N.Length == 1)
                {
                    if (int.Parse(N) % 4 == 0)
                    {
                        Console.WriteLine("YES");
                    }
                    else
                    {
                        Console.WriteLine("NO");
                    }
                }
                else
                {

                    int ultimasCifras = int.Parse(N.Substring(N.Length - 2, 2));

                    if (ultimasCifras % 4 == 0)
                    {
                        Console.WriteLine("YES");
                    }
                    else
                    {
                        Console.WriteLine("NO");
                    }
                }
            }


            Console.ReadLine();
        }
    }
}
