using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class Check_Alphabets
    {
        void checkAlphabets(string str)
        {
            Boolean flag = false;
            flag=Regex.IsMatch(str, @"^[a-zA-Z]+$");
            if (flag)
                Console.WriteLine("All characters are alphabets ");
            else
                Console.WriteLine("All characters are not alphabets ");
        }
        static void Main5(string[] args)
        {
            Check_Alphabets obj = new Check_Alphabets();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();            
            obj.checkAlphabets(str);
            Console.ReadLine();
        }
    }
}
