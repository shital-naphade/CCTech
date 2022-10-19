using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class Odd
    {
        void check(int n)
        {
            if (n % 2 != 0)
                Console.WriteLine("The given number is odd number ");
            else
                Console.WriteLine("The given number is not odd number ");
        }
        static void Main1(string[] args)
        {
            Odd obj=new Odd();
            Console.WriteLine("Enter any number : ");
            int n = Convert.ToInt32(Console.ReadLine());
            obj.check(n);
            Console.ReadLine();
        }
    }
}
