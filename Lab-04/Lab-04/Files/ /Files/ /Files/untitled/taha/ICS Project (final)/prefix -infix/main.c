// prefix to infix
// include header files
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
// declaring functions
void push(char);
char pop(void);
int i,top = -1;
char data,op,a;
char x[100],str[100];

main()
{
printf("\nPlease enter an prefix Expression\n");
gets(x);                    // input prefix expression

int len=strlen(x);          // calculating length of the string
printf("Calculating infix Please Weight...................\n");
Sleep(5000);
printf("the infix of the given prefix expression is\n\n");
for(i=0;i<len;i++)
{
    if((x[i]=='+')||(x[i]=='-')||(x[i]=='*')||(x[i]=='/'))
    {
    push(x[i]);             // push the operator to stack
    }
    else
    {
    op=pop();               // pop the operator
    a=x[i];
    printf("%c%c",a,op);
    }
}
}
// defining functions
void push(char x)
{
    str[++top]=x;
}

char pop()
{
 return str[top--];
}
