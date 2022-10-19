using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class Replace_Alternate
    {
        void replaceAlternateChar(string str)
        {
            for(int i = 0; i < str.Length; i++)
            {
                if(i%2 == 0)
                    Console.Write('*');
                else
                    Console.Write(str[i]);               
            }
        }
        static void Main7(string[] args)
        {
            Replace_Alternate obj = new Replace_Alternate();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();
            obj.replaceAlternateChar(str);
            Console.ReadLine();
        }
    }
}
