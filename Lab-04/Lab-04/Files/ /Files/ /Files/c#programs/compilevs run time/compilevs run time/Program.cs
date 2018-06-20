using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace compilevs_run_time
{
    class Program
    {
        static void Main(string[] args)
        {
           // int age = int.Parse("10");
            int value1;
            int value2;
            Console.WriteLine("Enter the value 1");
            value1 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter the value 2");
            value2 = int.Parse(Console.ReadLine());
            int result = value1 / value2;
            Console.WriteLine("Result = {0}",result);
        }
    }
}
