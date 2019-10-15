http://coj.uci.cu/24h/problem.xhtml?pid=1300

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
            HashSet<int> hs = new HashSet<int>();
            for (int i = 0; i < 10; i++)
            {
                int num = int.Parse(Console.ReadLine());
                hs.Add(num % 42);
            }

            Console.WriteLine(hs.Count);
            Console.ReadLine();
        }
    }
}
