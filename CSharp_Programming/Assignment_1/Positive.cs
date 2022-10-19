using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class Positive
    {
        void check(int n)
        {
            if (n >= 0)
                Console.WriteLine("The given number is positive number ");
            else
                Console.WriteLine("The given number is not positive number ");
        }
        static void Main3(string[] args)
        {
            Positive obj = new Positive();
            Console.WriteLine("Enter any number : ");
            int n = Convert.ToInt32(Console.ReadLine());
            obj.check(n);
            Console.ReadLine();
        }
    }
}
