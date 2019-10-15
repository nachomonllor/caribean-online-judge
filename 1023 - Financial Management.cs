http://coj.uci.cu/24h/problem.xhtml?pid=1023
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
            double sum = 0;

            int N = 12;

            //double[] arr = { 
            //100.00,
            //489.12,
            //12454.12,
            //1234.10,
            //823.05,
            //109.20,
            //5.27,
            //1542.25,
            //839.18,
            //83.99,
            //1295.01,
            //1.75
            //};

            for (int i = 0; i < N; i++)
            {
                double ingreso = double.Parse(Console.ReadLine());
                sum += ingreso;
            }
            Console.WriteLine( "$" + (sum / N)  );

            Console.ReadLine();
        }
    }
}

