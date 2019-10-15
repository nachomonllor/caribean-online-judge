http://coj.uci.cu/24h/problem.xhtml?pid=1099


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
            string input = "";

            do
            {
                int a, b, c;
                input = Console.ReadLine();

                if (input.Length > 1)
                {
                    a = int.Parse(input.Split(' ')[0]);
                    b = int.Parse(input.Split(' ')[1]);
                    c = int.Parse(input.Split(' ')[2]);

                    List<int> lista = new List<int>(new int[] { a, b, c });
                    lista.Sort();

                    if (lista[0] * lista[0] + lista[1] * lista[1] == lista[2] * lista[2])
                    {
                        Console.Write("right\n");
                    }
                    else
                    {
                        Console.Write("wrong\n");
                    }
                }

            } while (input != "0");

            Console.ReadLine();

        }
    }
}
