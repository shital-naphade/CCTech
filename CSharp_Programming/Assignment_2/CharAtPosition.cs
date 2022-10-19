using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Programming.Assignment_2
{
    internal class CharAtPosition
    {
        void charAtPosition(string str,int p)
        {             
            for (int i = 0; i < str.Length; i++)
                if( i == p )    
                    Console.WriteLine( "Character of position "+ p + "  is : " + str[p]);           
        }
        static void Main3(string[] args)
        {
            CharAtPosition obj = new CharAtPosition();
            Console.WriteLine("Enter any string : ");
            string str = Console.ReadLine();
            Console.WriteLine("Enter position to get character : ");
            int p = Convert.ToInt32(Console.ReadLine());
            obj.charAtPosition(str,p);
            Console.ReadLine();
        }
    }
}
