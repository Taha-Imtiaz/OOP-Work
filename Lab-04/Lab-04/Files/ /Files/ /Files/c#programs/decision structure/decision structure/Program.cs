using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace decision_structure
{
    class Program
    {
        static void Main(string[] args)
        {
            int age, money;
            Console.WriteLine("Please Enter your age");
            age = int.Parse(Console.ReadLine());
            Console.WriteLine("Please enter your money");
            money = int.Parse(Console.ReadLine());
            if (age > 10 && money > 20)
            {
                Console.WriteLine("You can come to my shop");
                Console.ReadLine();
            }
            else
            {
                Console.WriteLine("Best try next time");
                Console.ReadLine();
            }
        }
    }
}