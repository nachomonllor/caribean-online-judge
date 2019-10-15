http://coj.uci.cu/24h/problem.xhtml?pid=1483

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

            string[] input = Console.ReadLine().Split(' ');

            if (input[0] == "square")
            {
                int A = int.Parse(input[1]);
                Console.WriteLine(A * A);
            }
            else if(input[0] == "rectangle")
            {
                int A = int.Parse(input[1]);
                int B = int.Parse(input[2]);
                Console.WriteLine(A * B);
            }


            Console.ReadLine();
        }
    }
}
