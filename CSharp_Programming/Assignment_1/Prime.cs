using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class Prime
    {
        void check(int n)
        {
            int flag = 0;
            for (int i = 2; i < n; i++)
            {
                if (n % 2 == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                Console.WriteLine("The given number is prime number");
            else
                Console.WriteLine("The given number is not prime number");
        }
        static void Main5(string[] args)
        {
            Prime obj = new Prime();
            Console.WriteLine("Enter number to check prime: ");
            int n = Convert.ToInt32(Console.ReadLine());
            obj.check(n);
            Console.ReadLine();
        }
    }
}
