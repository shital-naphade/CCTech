using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class Check_AlphaNumeric
    {
        void checkAlphaNumeric(string str)
        {
            Boolean flag = false;
            flag = Regex.IsMatch(str, @"^[a-zA-Z0-9]+$");
            if (flag)
                Console.WriteLine("All characters are alphanumeric in given string ");
            else
                Console.WriteLine("All characters are not alphanumeric in given string ");
        }
        static void Main6(string[] args)
        {
            Check_AlphaNumeric obj = new Check_AlphaNumeric();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();
            obj.checkAlphaNumeric(str);
            Console.ReadLine();
        }
    }
}
