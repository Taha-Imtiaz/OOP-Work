#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
// declaring functions
infix_postfix();
{
void push(char);
void pop (void);
int i,top = -1;
char x[100],str[100];

printf("\nPlease enter an Infix Expression\n");              //input infix
fgets(x,sizeof(x),stdin);
printf("Infix is:\t");
puts(x);
int len=strlen(x);
printf("Calculating Postfix Please Weight...................\n");
Sleep(5000);
printf("the postfix of the given infix expression is\n\n");
for(i=0;i<len;i++)
{
    if(x[i]=='(')
    {
        push(x[i]);     // push the operator
    }
else if(x[i]=='+')                      //check operator precedence
    {
    if((str[top]=='+')||(str[top]=='-')||(str[top]=='*')||(str[top]=='/'))      // check stack top
    pop();                                                                      // pop the operator

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
    pop();

    }
     else
    putchar(x[i]);
}

void push(char x)
{
    str[++top]=x;
}
// defining functions
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
        else if(x[i]==')')
        {
        while(str[top]!='(')
        {
        putchar(str[top]);
        top--;
        }
        top--;
        }
        }
		}
