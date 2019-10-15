http://coj.uci.cu/24h/problem.xhtml?pid=1188

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
            string[] input = Console.ReadLine().Split(' ');

            string A = input[0];
            string B = input[1];

            int answer = 0;

            for (int i = 0; i < A.Length; i++)
            {
                for (int j = 0; j < B.Length; j++)
                {
                    answer += int.Parse(A[i].ToString()) * int.Parse(B[j].ToString());
                }
            }

            Console.WriteLine(answer);

            Console.ReadLine();
        }
    }
}
