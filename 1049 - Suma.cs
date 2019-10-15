http://coj.uci.cu/24h/problem.xhtml?pid=1049

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

            int N = int.Parse(Console.ReadLine());

            int sum = 0;

            if (N >= 0)
            {

                for (int i = 1; i <= N; i++)
                {
                    sum += i;
                }
            }
            else
            {
                for (int i = N; i <= 1; i++)
                {
                    sum += i;
                }
            }

            Console.WriteLine(sum);

            Console.ReadLine();
        }
    }
}
