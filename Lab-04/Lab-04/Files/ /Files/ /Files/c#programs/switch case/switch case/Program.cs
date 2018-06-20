using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace switch_case
{
    class Program
    {
        static void Main(string[] args)
        {
            string select;
            Console.WriteLine("Mian metho-----Press 1 to 3");
            select = Console.ReadLine();
           switch(select)
           {
            case "1":
            Console.WriteLine("You will become successful deveper");
            break;
           case "2":
            Console.WriteLine("You will get rich soon");
            break;
            case "3":
            Console.WriteLine("Today is your lucky day");
            break;
               default :
            Console.WriteLine("You have entered an invalid entry----Please try again");
            break;
           }


        }
    }
}
