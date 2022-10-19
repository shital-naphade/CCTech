using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class Even
    {
        void check(int n)
        {
            if (n % 2 == 0)
                Console.WriteLine("The given number is even number ");
            else
                Console.WriteLine("The given number is not even number ");
        }
        static void Main2(string[] args)
        {
            Even obj = new Even();
            Console.WriteLine("Enter any number : ");
            int n = Convert.ToInt32(Console.ReadLine());
            obj.check(n);
            Console.ReadLine();
        }
    }
}
