using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class ExtractSubstring
    {
        void substring(string str, int p, int l)
        {
            char[] ch1 = str.ToCharArray();                  
            int c=0;            
            //Console.WriteLine("The output string is : "+str.Substring(p-1,l));            
            while (c < l)
            {
                Console.Write(ch1[p + c - 1]);
                c++;
            }
        }
        static void Main(string[] args)
        {
            ExtractSubstring obj = new ExtractSubstring();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();
            Console.WriteLine("Enter position : ");
            int p = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter length : ");
            int l = Convert.ToInt32(Console.ReadLine());
            obj.substring(str, p, l);
            Console.ReadLine();
        }
    }
}
