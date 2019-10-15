http://coj.uci.cu/24h/problem.xhtml?pid=1102

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
             

            while (true)
            {
                string N = Console.ReadLine();

                if (N == "0")
                {
                    break;
                }

                int sumPar = 0, sumImpar = 0;
                for (int i = 0; i < N.Length; i++)
                {
                    if (i % 2 == 0)
                    {
                        sumPar += int.Parse(N[i].ToString());
                    }
                    else
                    {
                        sumImpar += int.Parse(N[i].ToString());
                    }
                }

                if (sumPar - sumImpar == 0 || (sumPar - sumImpar) % 11 == 0)
                {
                    Console.WriteLine("{0} is a multiple of 11.", N);
                }
                else
                {
                    Console.WriteLine("{0} is not a multiple of 11.", N);
                }

            }

            Console.ReadLine();
        }
    }
}

