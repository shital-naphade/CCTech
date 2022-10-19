using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class Reverse_String
    {
        void reverse(string str)
        {
            int i;
            for (i = 0; i < str.Length; i++) ;
            i--;
            for(int j = i; j >=0 ; j--)           
                Console.Write(str[j]);                   
        }
        static void Main2(string[] args)
        {
            Reverse_String obj = new Reverse_String();
            Console.WriteLine("Enter string  : ");
            string str = Console.ReadLine();
            Console.WriteLine("The reverse string is : ");
            obj.reverse(str);
            Console.ReadLine();
        }
    }
}
