﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming
{
    internal class Negative
    {
        void check(int n)
        {
            if (n < 0)
                Console.WriteLine("The given number is negative number ");
            else
                Console.WriteLine("The given number is not negative number ");
        }
        static void Main4(string[] args)
        {
            Negative obj = new Negative();
            Console.WriteLine("Enter any number : ");
            int n = Convert.ToInt32(Console.ReadLine());
            obj.check(n);
            Console.ReadLine();
        }
    }
}
