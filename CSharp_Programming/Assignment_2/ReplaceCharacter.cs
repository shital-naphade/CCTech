using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class ReplaceCharacter
    {
        void replaceChar(string str, int p,char ch)
        {            
            char[] ch1 = str.ToCharArray();
            ch1[p] = ch; // index starts at 0!
            string newstring = new string(ch1);
            Console.WriteLine(newstring);            
        }
        static void Main4(string[] args)
        {
            ReplaceCharacter obj = new ReplaceCharacter();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();
            Console.WriteLine("Enter position : ");
            int p = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter character : ");
            char ch=Convert.ToChar(Console.ReadLine());
            obj.replaceChar(str, p,ch);
            Console.ReadLine();
        }
    }
}
