using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class CovertToLower
    {
        void toLower(string str)
        {
            Console.WriteLine("String in lower case letters : "+str.ToLower());
        }
        static void Main10(string[] args)
        {
            CovertToLower obj = new CovertToLower();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();
            obj.toLower(str);
            Console.ReadLine();
        }
    }
}
