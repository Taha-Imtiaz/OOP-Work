#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void push(char);
void pop (void);
int i,top = -1;
char x[100],str[100];

main()
{


printf("\nPlease enter an Infix Expression\n");
fgets(x,sizeof(x),stdin);
strrev(x);
puts(x);
int len=strlen(x);
printf("Calculating Postfix Please Weight...................\n");
Sleep(5000);
printf("the prefix of the given infix expression is\n\n");
for(i=len-1;i>=0;i--)
{
    if(x[i]=='(')
    {
        pop();
    }
else if(x[i]=='+')
    {
    if((str[top]=='+')||(str[top]=='-')||(str[top]=='*')||(str[top]=='/'))
    pop();

    else
    push(x[i]);
}
else if(x[i]=='-')
    {
    if((str[top]=='+')||(str[top]=='-')||(str[top]=='*')||(str[top]=='/'))
    {
    pop();
    }
    else
    push(x[i]);
    }
    else if(x[i]=='*')
    {
        if((str[top]=='*')||(str[top]=='/'))
        pop();
        else
            push(x[i]);
    }
    else if(x[i]=='/')
    {
        if((str[top]=='*')||(str[top]=='/'))
        pop();
        else
            push(x[i]);
    }
    else if(x[i]==')')
    {
    push(x[i]);

    }
     else
    putchar(x[i]);
}
}
void push(char x)
{
    str[++top]=x;
}
void pop()
{
    if((x[i]=='+')||(x[i]=='-'))
    {
        while((str[top]=='+')||(str[top]=='-')||(str[top]=='*')||(str[top]=='/'))
        {
        putchar(str[top]);
        top--;
        }
        str[top]=x[i];
    }
    else if((x[i]=='*')||(x[i]=='/'))
        {
        while((str[top]=='*')||(str[top]=='/'))
        {
        putchar(str[top]);
        top--;
        }
        str[top]=x[i];
        }
        else if(x[i]=='(')
        {
        while(str[top]!='(')
        {
        putchar(str[top]);
        top--;
        }
        top--;
        }
        }
