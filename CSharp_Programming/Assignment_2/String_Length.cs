using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class String_Length
    {
        void length(string str)
        {
            int count = 0;
            for (int i = 0; i < str.Length; i++)
            {
                if (str[i] != ' ')
                    count++;
            }
            Console.WriteLine("Length of " + str + " is : " + count);
        }
        static void Main1(string[] args)
        {            
            String_Length obj = new String_Length();
            Console.WriteLine("Enter string to find its length : ");
            string str= Console.ReadLine();
            obj.length(str);
            Console.ReadLine();
        }
    }
}
