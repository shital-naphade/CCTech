using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class Divisible
    {
        void check(int a,int b)
        {
            if (a % b == 0)
                Console.WriteLine(a + " is divisible by "+ b);
            else
                Console.WriteLine(a + " is not divisible by " + b);
        }
        static void Main6(string[] args)
        {
            Divisible obj = new Divisible();
            Console.WriteLine("Enter numerator number: ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter denominator number: ");
            int b = Convert.ToInt32(Console.ReadLine());
            obj.check(a,b);
            Console.ReadLine();
        }
    }
}
