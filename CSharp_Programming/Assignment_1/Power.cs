using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class Power
    {
        void calculate(int a, int b)
        {
            //Console.WriteLine("a ^ b(a to the power b ) is :" + Math.Pow(a, b));
            int pow=1;
            for(int i = 1; i <= b; i++)
                pow = pow * a; 
            Console.WriteLine("a ^ b (a to the power b ) is :" + pow);
        }
        static void Main7(string[] args)
        {
            Power obj = new Power();
            Console.WriteLine("Enter an base number: ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter exponent number: ");
            int b = Convert.ToInt32(Console.ReadLine());
            obj.calculate(a, b);
            Console.ReadLine();
        }
    }
}
