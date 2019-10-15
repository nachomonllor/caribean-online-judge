http://coj.uci.cu/24h/problem.xhtml?pid=1484
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


            //int[] arr = {  15,35,11,11,21,15,35,};

            int N = int.Parse(Console.ReadLine());

            int max = int.MinValue;
            int indice = -1;
            for (int i = 0; i < N; i++)
            {
                int T = int.Parse(Console.ReadLine());

                if (T >= max)
                {
                    max = T;
                    indice = i;
                }
            }

            Console.WriteLine(indice + 1);


            Console.ReadLine();

        }
    }
}
