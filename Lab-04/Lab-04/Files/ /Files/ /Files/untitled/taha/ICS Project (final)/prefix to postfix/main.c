// prefix to infix
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void push(char);
char pop(void);
int i,top = -1,j=0;
char data,op,a,b,c;
char x[100],str[100],str1[100];

main()
{
printf("\nPlease enter an prefix Expression\n");
gets(x);
int len=strlen(x);
printf("Calculating postfix Please Weight...................\n");
Sleep(5000);
printf("the postfix of the given prefix expression is\n\n");
for(i=0;i<len;i++)
{
    if((x[i]=='+')||(x[i]=='-')||(x[i]=='*')||(x[i]=='/'))
    {
    push(x[i]);
    }
    else
    {
        if()
        {

        }
    str1[j]=x[i];
    j++;
    }
}
str1[j]=pop();
puts(str1);

}
void push(char x)
{
    str[++top]=x;
}

char pop()
{
 return str[top--];
}
