http://coj.uci.cu/24h/problem.xhtml?pid=2152

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

            int t = int.Parse(Console.ReadLine());

            while (t-- > 0)
            {
                string n = Console.ReadLine();
                int sum = 0;
                for (int i = 0; i < n.Length; i++)
                {
                    if (n[i] != '-')
                    {
                        sum += int.Parse(n[i].ToString());
                    }
                }
                Console.WriteLine(sum);
            }

            Console.ReadLine();
        }
    }
}
