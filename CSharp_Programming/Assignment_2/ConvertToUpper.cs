using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class ConvertToUpper
    {
        void toUpper(string str)
        {
            Console.WriteLine("String in upper case letters : " + str.ToUpper());
        }
        static void Main9(string[] args)
        {
            ConvertToUpper obj = new ConvertToUpper();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();
            obj.toUpper(str);
            Console.ReadLine();
        }
    }
}
