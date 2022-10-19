using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class N_Odd_Numbers
    {
        void print(int n)
        {
            int count = 1,odd=1;
            Console.WriteLine("First " + n + " odd numbers are : ");
            while (count <= n)
            {
                if (odd % 2 != 0)
                {
                    Console.WriteLine(odd);
                    count++;
                }
                odd++;        
            }
        }
        static void Main8(string[] args)
        {
            N_Odd_Numbers obj = new N_Odd_Numbers();
            Console.WriteLine("Enter number of odd numbers you want to print : ");
            int n = Convert.ToInt32(Console.ReadLine());            
            obj.print(n);
            Console.ReadLine();
        }
    }
}
