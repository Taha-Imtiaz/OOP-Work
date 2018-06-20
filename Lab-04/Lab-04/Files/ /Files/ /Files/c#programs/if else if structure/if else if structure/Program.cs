using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace if_else_if_structure
{
    class Program
    {
        static void Main(string[] args)
        {
            int marks;
            string Grade="";
            Console.WriteLine("Please Enter your marks");
            marks =int.Parse (Console.ReadLine());
            if (marks >= 80)
            {
                Grade = "A+";
            }
            else if (marks < 80 && marks >= 70)
                {
                    Grade = "A";
                }
                else if (marks < 70 && marks >= 60)
                    {
                        Grade = "B";
                    }
                    else if (marks < 60 && marks >= 50)
                        {
                            Grade = "C";
                        }
                    else if (marks < 50 && marks >= 40)
                    {
                    Grade = "D";

                    }
                    else if (marks < 40 && marks >= 33)
                     {
                    Grade = "E";
                    }
                    else if (marks < 33)
                    {
                Grade = "F";
                    }
            Console.WriteLine("Your Grade is {0}\n",Grade);
            Console.ReadLine();
                    }
                
            
        }
    }

