http://coj.uci.cu/24h/problem.xhtml?pid=1318

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
            string[] nums = Console.ReadLine().Split(' ');
            int a, b, c;
            a = int.Parse(nums[0]);
            b = int.Parse(nums[1]);
            c = int.Parse(nums[2]);

            string orden = Console.ReadLine();

            List<int> lista = new List<int>(new int[]{a,b,c});
            lista.Sort();

            a = lista[0];
            b = lista[1];
            c = lista[2];

            Dictionary<char, int> diccio = new Dictionary<char, int>();
            diccio['A'] = a;
            diccio['B'] = b;
            diccio['C'] = c;

            for (int i = 0; i < orden.Length; i++)
            {
                Console.Write(diccio[orden[i]] + " ");
            }

            Console.WriteLine();


            Console.ReadLine();
        }
    }
}
