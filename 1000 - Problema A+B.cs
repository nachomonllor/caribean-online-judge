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
            int a, b;
            string input = Console.ReadLine();

            a = int.Parse(input.Split(' ')[0]);
            b = int.Parse(input.Split(' ')[1]);

            Console.WriteLine(a + b);

            Console.ReadLine();
        }
    }
}

