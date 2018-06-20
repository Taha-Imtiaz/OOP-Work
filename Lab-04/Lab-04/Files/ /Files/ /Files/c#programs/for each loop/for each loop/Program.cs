using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace for_each_loop
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = { 2, 3, 4, 5, 6 };
            foreach (int a in array)
            {
                Console.WriteLine(a);
            }
        }
    }
}
