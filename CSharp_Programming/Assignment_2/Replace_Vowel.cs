using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class Replace_Vowel
    {
        void replaceVowel(string str)
        {
            for(int i = 0; i < str.Length; i++)
            {
                if (str[i] == 'A' || str[i] == 'E'||str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                    Console.Write('*');
                else
                    Console.Write(str[i]);               
            }
        }
        static void Main8(string[] args)
        {
            Replace_Vowel obj = new Replace_Vowel();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();
            obj.replaceVowel(str);
            Console.ReadLine();
        }
    }
}
