// infix to prefix
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
// declaring functions
void push1(char);
void pop1 (void);
// defining global variables
int i,j=0;
top1 = -1;
char x[100],str[100],str1[100];

infix_prefix()
{

char m;
printf("\nPlease enter an Infix Expression\n");     // input infix expression
gets(x);
printf("Infix is:\t");
puts(x);
int len=strlen(x);
printf("Calculating Prefix Please Weight...................\n");            // calculating length of string
Sleep(5000);
printf("the prefix of the given infix expression is\n\n");
for(i=len-2;i>=0;i--)
{
    if(x[i]=='(')
    {
        pop1();                                                              // pop special character
    }
else if(x[i]=='+')                                                          // operator precedence
    {
    if((str[top1]=='+')||(str[top1]=='-')||(str[top1]=='*')||(str[top1]=='/'))      // check stack top
    pop1();                                                                      // pop the operator

    else
    push1(x[i]);
}
else if(x[i]=='-')
    {
    if((str[top1]=='+')||(str[top1]=='-')||(str[top1]=='*')||(str[top1]=='/'))
    {
    pop1();
    }
    else
    push1(x[i]);
    }
    else if(x[i]=='*')
    {
        if((str[top1]=='*')||(str[top1]=='/'))
        pop1();
        else
            push1(x[i]);
    }
    else if(x[i]=='/')
    {
        if((str[top1]=='*')||(str[top1]=='/'))
        pop1();
        else
            push1(x[i]);
    }
    else if(x[i]==')')
    {
    push1(x[i]);

    }
     else
    str1[j++]=x[i];
}
for(j=len-1;j>=0;j--)
printf("%c",str1[j]);
}
// defining functions
void push1(char x)
{
    str[++top1]=x;
}
void pop1()
{
    if((x[i]=='+')||(x[i]=='-'))
    {
        while((str[top1]=='+')||(str[top1]=='-')||(str[top1]=='*')||(str[top1]=='/'))   // checking stack top
        {
        str1[j++]=(str[top1]);
        top1--;
        }
        str[top1]=x[i];
    }
    else if((x[i]=='*')||(x[i]=='/'))
        {
        while((str[top1]=='*')||(str[top1]=='/'))
        {
       str1[j++]=(str[top1]);
        top1--;
        }
        str[top1]=x[i];
        }
        else if(x[i]=='(')
        {
        while((str[top1]=='+')||(str[top1]=='-')||(str[top1]=='*')||(str[top1]=='/'))
        {
        str1[j++]=(str[top1]);
        top1--;
        }
        top1--;
        }
        }

