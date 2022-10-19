using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class Check_Digits
    {
        void checkDigits(string str)
        {
            Boolean flag = false;
            flag = Regex.IsMatch(str, @"^[0-9]+$");
            if (flag)
                Console.WriteLine("All characters are digits in given string ");
            else
                Console.WriteLine("All characters are not digits in given string ");
        }
        static void Main6(string[] args)
        {
            Check_Digits obj = new Check_Digits();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();
            obj.checkDigits(str);
            Console.ReadLine();
        }
    }
}
