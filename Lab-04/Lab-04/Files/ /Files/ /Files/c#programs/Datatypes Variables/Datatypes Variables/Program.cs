using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Datatypes_Variables
{
    class Program
    {
        static void Main(string[] args)
        {
            /*int a = 1;
            int b = 2;
            int sum = a + b;
            int mul = a * b;
            int min = a - b;*/
           
            //Console.WriteLine("sum={0}\nmul={1}\nmin={2}",sum,mul,min);
            //string n = "Sialkot pK";
            //Console.WriteLine(n);
            // how to concatenate two strings
            /*string firstname = "taha";
            string lastname=   "imtiaz";
            string fullname=firstname+" "+lastname;
            Console.WriteLine(fullname);*/
           // double dec = 1.4;
           // Console.WriteLine(dec);
            //float ft = 1.5f;  // f is written because data is float
            //Console.WriteLine(ft);
            //How to take input from user
            /*string n;
            Console.Write("Please enter your name:");
            n = Console.ReadLine();
            Console.WriteLine("n={0}",n);*/
           /* int age;
            Console.WriteLine("Please Enter your age:");
            age = int.Parse(Console.ReadLine());        // typecast string to int
            Console.WriteLine("age={0}",age);*/
            /*int result = 10 + 10;
            Console.WriteLine(result);*/
            // how to take float from user
            /*float ft;
            Console.Write("Please enter value of ft:");
            ft = float.Parse(Console.ReadLine());
            Console.WriteLine(ft);*/
            int a = 12;
            int b = 10;
            Console.WriteLine("a+b ={0}\na-b ={1}\na*b ={2}\n",(a+b),(a-b),(a*b));
            Console.ReadLine(); // this is used to take input from user
        }
    }
}
