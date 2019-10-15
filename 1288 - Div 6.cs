http://coj.uci.cu/24h/problem.xhtml?pid=1288
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
            int T = int.Parse(Console.ReadLine());

            while (T-- > 0)
            {
                string N = Console.ReadLine();

                //div por 2
                bool esDivPor2 = false;
                if (int.Parse(N[N.Length - 1].ToString()) % 2 == 0)
                {
                    esDivPor2 = true;
                }
                bool esDivPor3 = false;
                int sum = 0;
                for (int i = 0; i < N.Length; i++)
                {
                    sum += int.Parse(N[i].ToString());
                }
                if (sum % 3 == 0)
                {
                    esDivPor3 = true;
                }
                if (esDivPor2 && esDivPor3)
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
