using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class Fibonacci
    {
        void fibo(int n)
        {
            int a = 0, b = 1, f;
            Console.WriteLine("First " + n + " fibonacci numbers : ");
            if (n == 0)
                return;
            else if (n == 1)
                Console.WriteLine(a);
            else if (n == 2)
            {
                Console.WriteLine(a);
                Console.WriteLine(b);
            }
            else
            {
                Console.WriteLine(a);
                Console.WriteLine(b);
                for (int i = 2; i < n; i++)
                {
                    f = a + b;
                    Console.WriteLine(f);
                    a = b;
                    b = f;
                }
            }
        }
        static void Main12(string[] args)
        {
            Fibonacci obj = new Fibonacci();
            while (true)
            {
                Console.WriteLine("Enter how many fobonacci terms you want to print : ");
                int n = Convert.ToInt32(Console.ReadLine());
                if (n >= 0)
                {
                    obj.fibo(n);
                    break;
                }
                else
                    Console.WriteLine("Please enter valid input........ ");
            }
            Console.ReadLine();
        }
    }
}
