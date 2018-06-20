#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// Language Selector
int main()
{
   int choice;
    char CsharpOOP='Y', CplusOOP='Y',JavaOOP='Y',PythonOOP;
    int OOPCsharp=0,OOPCplus=0,OOPJava=0,OOPython=0;
    float csharp_ps,java_ps,cplus_ps,python_ps;
    float rat_csharp,rat_cplus,rat_java,rat_python;

    printf("Select a language that will be best for teaching a course of Object oriented Programming.\n");
    printf("The selection is based upon the following factors.\n");
    printf("1. The language must be object oriented.\n2. Processing Speed.\n3.Ratings.\n");
    printf("\n1.C#");
    printf("\n2.C++");
    printf("\n3.Java");
    printf("\n4.Python");
    printf("\n\nEnter Y if C# is Object Oriented");
    scanf("%c",&CsharpOOP);
    printf("\nEnter Y if C++ is Object Oriented");
    fflush(stdin);
    scanf("%c",&CplusOOP);
    printf("\nEnter Y if Java is Object Oriented");
    fflush(stdin);
    scanf("%c",&JavaOOP);
    printf("\nEnter Y if Python is Object Oriented");
    fflush(stdin);
    scanf("%c",&PythonOOP);
    if((CsharpOOP=='Y'&&CplusOOP!='Y')&&(JavaOOP!='Y'&&PythonOOP!='Y'))
    {
        OOPCsharp++;
    }
    else if((CsharpOOP!='Y'&&CplusOOP=='Y')&&(JavaOOP!='Y'&&PythonOOP!='Y'))
        {
        OOPCplus++;
        }
    else if((CsharpOOP!='Y'&&CplusOOP!='Y')&&(JavaOOP=='Y'&&PythonOOP!='Y'))
        {
        OOPJava++;
        }
         else if((CsharpOOP!='Y'&&CplusOOP!='Y')&&(JavaOOP!='Y'&&PythonOOP=='Y'))
        {
        OOPython++;
        }
     else if((CsharpOOP=='Y'&&CplusOOP=='Y')&&(JavaOOP!='Y'&&PythonOOP!='Y'))
        {
        OOPCsharp++;
        OOPCplus++;
        }
        else if((CsharpOOP=='Y'&&CplusOOP!='Y')&&(JavaOOP=='Y'&&PythonOOP!='Y'))
        {
        OOPCsharp++;
        OOPJava++;
        }
       else if((CsharpOOP=='Y'&&CplusOOP!='Y')&&(JavaOOP!='Y'&&PythonOOP=='Y'))
        {
        OOPCsharp++;
        OOPython++;
        }
      else if((CsharpOOP!='Y'&&CplusOOP=='Y')&&(JavaOOP=='Y'&&PythonOOP!='Y'))
        {
        OOPCplus++;
        OOPJava++;
        }
    else if((CsharpOOP!='Y'&&CplusOOP=='Y')&&(JavaOOP!='Y'&&PythonOOP=='Y'))
        {
        OOPCplus++;
        OOPython++;
        }
     else if((CsharpOOP!='Y'&&CplusOOP!='Y')&&(JavaOOP=='Y'&&PythonOOP=='Y'))
        {
        OOPJava++;
        OOPython++;
        }
    if((CsharpOOP=='Y'&&CplusOOP=='Y')&&(JavaOOP=='Y'&&PythonOOP!='Y'))
        {
        OOPCsharp++;
        OOPCplus++;
        OOPJava++;
        }
    else if((CsharpOOP=='Y'&&CplusOOP=='Y')&&(JavaOOP!='Y'&&PythonOOP=='Y'))
        {
        OOPCsharp++;
        OOPCplus++;
        OOPython++;
        }
        else if((CsharpOOP=='Y'&&CplusOOP!='Y')&&(JavaOOP=='Y'&&PythonOOP=='Y'))
        {
        OOPCsharp++;
        OOPJava++;
        OOPython++;
        }
        else if((CsharpOOP!='Y'&&CplusOOP=='Y')&&(JavaOOP=='Y'&&PythonOOP=='Y'))
        {
        OOPCplus++;
        OOPJava++;
        OOPython++;
        }
        else if((CsharpOOP=='Y'&&CplusOOP=='Y')&&(JavaOOP=='Y'&&PythonOOP=='Y'))
        {
        OOPCsharp++;
        OOPCplus++;
        OOPJava++;
        OOPython++;
        }
        printf("Enter the processing speed of C#");
        scanf("%f",&csharp_ps);
        printf("Enter the processing speed of C++");
        scanf("%f",&cplus_ps);
        printf("Enter the processing speed of Java");
        scanf("%f",&java_ps);
        printf("Enter the processing speed of Python");
        scanf("%f",&python_ps);
        if((csharp_ps>cplus_ps)&&(csharp_ps>java_ps)&&(csharp_ps>python_ps))
        {
            OOPCsharp++;
        }
      else if((cplus_ps>csharp_ps)&&(cplus_ps>java_ps)&&(cplus_ps>python_ps))
        {
            OOPCplus++;
        }
       else if((java_ps>cplus_ps)&&(java_ps>csharp_ps)&&(java_ps>python_ps))
        {
            OOPJava++;
        }

        else if((python_ps>cplus_ps)&&(python_ps>csharp_ps)&&(python_ps>java_ps))
        {
            OOPython++;
        }
        else if ((csharp_ps==cplus_ps)&&(csharp_ps>java_ps)&&(csharp_ps>python_ps))
        {
        OOPCplus++;
        OOPCsharp++;
        }
          else if ((csharp_ps>cplus_ps)&&(csharp_ps==java_ps)&&(csharp_ps>python_ps))
        {
        OOPJava++;
        OOPCsharp++;
        }
        else if ((csharp_ps>cplus_ps)&&(csharp_ps>java_ps)&&(csharp_ps==python_ps))
        {
        OOPython++;
        OOPCsharp++;
        }
        else if ((cplus_ps>csharp_ps)&&(cplus_ps==java_ps)&&(cplus_ps>python_ps))
        {
        OOPCplus++;
        OOPJava++;
        }
        else if ((cplus_ps>csharp_ps)&&(cplus_ps>java_ps)&&(cplus_ps==python_ps))
        {
        OOPCplus++;
        OOPython++;
        }

        else if ((java_ps>csharp_ps)&&(java_ps>cplus_ps)&&(java_ps==python_ps))
        {
        OOPJava++;
        OOPython++;
        }
        else if ((csharp_ps==cplus_ps)&&(csharp_ps==java_ps)&&(csharp_ps>python_ps))
        {
        OOPCsharp++;
        OOPCplus++;
        OOPJava++;
        }
    else if ((csharp_ps==cplus_ps)&&(csharp_ps>java_ps)&&(csharp_ps==python_ps))
        {
        OOPCsharp++;
        OOPCplus++;
        OOPython++;
        }
    else if ((csharp_ps>cplus_ps)&&(csharp_ps==java_ps)&&(csharp_ps==python_ps))
        {
        OOPCsharp++;
        OOPython++;
        OOPJava++;
        }
    else if ((cplus_ps>csharp_ps)&&(cplus_ps==java_ps)&&(cplus_ps==python_ps))
        {
        OOPCplus++;
        OOPJava++;
        OOPython++;
        }
    else if ((csharp_ps==cplus_ps)&&(csharp_ps==java_ps)&&(csharp_ps==python_ps))
        {
        OOPCsharp++;
        OOPCplus++;
        OOPJava++;
        OOPython++;
        }
    printf("Enter the ratings of c#\n");
    scanf("%f",&rat_csharp);
    printf("Enter the ratings of c++\n");
    scanf("%f",&rat_cplus);
    printf("Enter the ratings of Java\n");
    scanf("%f",&rat_java);
    printf("Enter the ratings of Python\n");
    scanf("%f",&rat_python);
    if((rat_csharp>rat_cplus)&&(rat_csharp>rat_java)&&(rat_csharp>rat_python))
    {
        OOPCsharp++;
    }
    else if((rat_cplus>rat_csharp)&&(rat_cplus>rat_java)&&(rat_cplus>rat_python))
    {
        OOPCplus++;
    }
    else if((rat_java>rat_csharp)&&(rat_java>rat_cplus)&&(rat_java>rat_python))
    {
        OOPJava++;
    }
    else if((rat_python>rat_csharp)&&(rat_python>rat_java)&&(rat_python>rat_cplus))
    {
        OOPython++;
    }
     else if((rat_csharp==rat_cplus)&&(rat_csharp>rat_java)&&(rat_csharp>rat_python))
    {
        OOPCsharp++;
        OOPCplus++;
    }
     else if((rat_csharp>rat_cplus)&&(rat_csharp==rat_java)&&(rat_csharp>rat_python))
    {
        OOPCsharp++;
        OOPJava++;
    }
     else if((rat_csharp>rat_cplus)&&(rat_csharp>rat_java)&&(rat_csharp==rat_python))
    {
        OOPCsharp++;
        OOPython++;
    }
 else if((rat_cplus>rat_csharp)&&(rat_cplus==rat_java)&&(rat_cplus>rat_python))
    {
        OOPCplus++;
        OOPJava++;
    }
    else if((rat_cplus>rat_csharp)&&(rat_cplus>rat_java)&&(rat_cplus==rat_python))
    {
        OOPCplus++;
        OOPython++;
    }
    else if((rat_java>rat_csharp)&&(rat_java>rat_cplus)&&(rat_java==rat_python))
    {
        OOPython++;
        OOPJava++;
    }
     else if((rat_csharp==rat_cplus)&&(rat_csharp==rat_java)&&(rat_csharp>rat_python))
    {
        OOPCsharp++;
        OOPCplus++;
        OOPJava++;
    }
     else if((rat_csharp==rat_cplus)&&(rat_csharp>rat_java)&&(rat_csharp==rat_python))
    {
        OOPCsharp++;
        OOPCplus++;
        OOPython++;
    }

     else if((rat_csharp>rat_cplus)&&(rat_csharp==rat_java)&&(rat_csharp==rat_python))
    {
        OOPCsharp++;
        OOPython++;
        OOPJava++;
    }
else if ((rat_cplus>rat_csharp)&&(rat_cplus==rat_java)&&(rat_cplus==rat_python))
        {
        OOPCplus++;
        OOPJava++;
        OOPython++;
        }
       else if((rat_csharp==rat_cplus)&&(rat_csharp==rat_java)&&(rat_csharp==rat_python))
    {
        OOPCsharp++;
        OOPython++;
        OOPJava++;
        OOPCplus++;
    }
    printf("C#=%d\n",OOPCsharp);
    printf("C++=%d\n",OOPCplus);
    printf("Java=%d\n",OOPJava);
    printf("Python=%d\n",OOPython);

    if((OOPCsharp>OOPCplus)&&(OOPCsharp>OOPJava)&&(OOPCsharp>OOPython))
    printf("C# will be best for teaching");
    else if((OOPCplus>OOPCsharp)&&(OOPCplus>OOPJava)&&(OOPCplus>OOPython))
    printf("C++ will be best for teaching");
   else  if((OOPJava>OOPCsharp)&&(OOPJava>OOPCplus)&&(OOPJava>OOPython))
    printf("Java will be best for teaching");
    else if((OOPython>OOPCsharp)&&(OOPython>OOPJava)&&(OOPython>OOPCplus))
    printf("Python will be best for teaching");
   else if((OOPCsharp==OOPCplus)&&(OOPCsharp>OOPJava)&&(OOPCsharp>OOPython))
    printf("C# and C++ both are best for teaching");
    else if((OOPCsharp>OOPCplus)&&(OOPCsharp==OOPJava)&&(OOPCsharp>OOPython))
    printf("C# and JAVA both are best for teaching");
    else if((OOPCsharp>OOPCplus)&&(OOPCsharp>OOPJava)&&(OOPCsharp==OOPython))
    printf("C# and Python both are best for teaching");
    else if((OOPCplus>OOPCsharp)&&(OOPCplus==OOPJava)&&(OOPCplus>OOPython))
    printf(" C++ and JAVA both are best for teaching");
    else if((OOPCplus>OOPCsharp)&&(OOPCplus>OOPJava)&&(OOPCplus==OOPython))
    printf(" C++ and Python both are best for teaching");
    else if((OOPJava>OOPCsharp)&&(OOPJava>OOPCplus)&&(OOPJava==OOPython))
    printf(" JAVA and Python both are best for teaching");
    else if((OOPCsharp==OOPCplus)&&(OOPCsharp==OOPJava)&&(OOPCsharp>OOPython))
    printf("C# , C++ and Java are best for teaching");
    else if((OOPCsharp==OOPCplus)&&(OOPCsharp>OOPJava)&&(OOPCsharp==OOPython))
    printf("C# , C++ and Python are best for teaching");
    else if((OOPCsharp>OOPCplus)&&(OOPCsharp==OOPJava)&&(OOPCsharp==OOPython))
    printf("C# , Java and Python are best for teaching");
    else if((OOPCplus>OOPCsharp)&&(OOPCplus==OOPJava)&&(OOPCplus=OOPython))
    printf("C++ ,Java and Python are best for teaching");
    else if((OOPCsharp==OOPCplus)&&(OOPCsharp==OOPJava)&&(OOPCsharp==OOPython))
    printf("C# , C++ , Java and python all are best for teaching");
    }




