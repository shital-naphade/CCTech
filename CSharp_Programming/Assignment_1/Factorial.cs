using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class Factorial
    {
        int fact(int n)
        {
            if (n == 0)
                return 0;
            else if (n == 1)
                return 1;
            else
                return n = n * fact(n - 1);
        }
        static void Main13(string[] args)
        {
            Factorial obj = new Factorial();
            Console.WriteLine("Enter number to find factorial: ");
            int n = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Factorial of "+ n +" is : "+ obj.fact(n));
            Console.ReadLine();
        }
    }
}
