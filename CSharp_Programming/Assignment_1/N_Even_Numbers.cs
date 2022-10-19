using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class N_Even_Numbers
    {
        void print(int n)
        {
            int count = 1, ev = 2;
            Console.WriteLine("First " + n + " even numbers are : ");
            while (count <= n)
            {
                if (ev % 2 == 0)
                {
                    Console.WriteLine(ev);
                    count++;
                }
                ev++;
            }
        }
        static void Main9(string[] args)
        {
            N_Even_Numbers obj = new N_Even_Numbers();
            Console.WriteLine("Enter number of even numbers you want to print : ");
            int n = Convert.ToInt32(Console.ReadLine());
            obj.print(n);
            Console.ReadLine();
        }
    }
}
