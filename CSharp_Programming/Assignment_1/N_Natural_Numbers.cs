using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class N_Natural_Numbers
    {
        void print(int n)
        {
            Console.WriteLine("First " + n + " natural numbers are : ");
            for (int i = 1; i <= n; i++)
                Console.WriteLine(i);               
        }
        static void Main10(string[] args)
        {
            N_Natural_Numbers obj = new N_Natural_Numbers();
            Console.WriteLine("Enter how many natural numbers you want to print : ");
            int n = Convert.ToInt32(Console.ReadLine());
            obj.print(n);
            Console.ReadLine();
        }
    }
}
