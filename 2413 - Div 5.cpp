http://coj.uci.cu/24h/problem.xhtml?pid=2413
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());

            while (T-- > 0)
            {
                string N = Console.ReadLine();

                if (N[N.Length - 1] == '5' || N[N.Length - 1] == '0')
                {
                    Console.WriteLine("YES");
                }
                else
                {
                    Console.WriteLine("NO");
                }

            }
            Console.ReadLine();

        }
    }
}
