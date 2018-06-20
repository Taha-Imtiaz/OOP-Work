// postfix to infix
// include header files
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

void push2(char);        // declaring functions
char pop2(void);

int i,top2 = -1;         // defining variables
char data,op,op1;
char x[50],str[100],str1[100];

main()
{

char m,j=0;
printf("\nPlease enter an postfix Expression\n");
gets(x);                        // input postfix expression
strrev(x);                      // reverse string
int len=strlen(x);              //calculating length
printf("Calculating infix Please Weight...................\n");
Sleep(5000);
printf("the infix of the given postfix expression is\n\n");
for(i=0;i<len;i++)
{
    if((x[i]=='+')||(x[i]=='-')||(x[i]=='*')||(x[i]=='/'))      // operator precedence
    {
    push2(x[i]);         // push operator
    }
    else
    {
     str1[j]=x[i];
     j++;
     str1[j]=pop2();     // pop operator
     j++;
    }

}
    strrev(str1);               // reverse string
    printf("%s\n",str1);
}
    // defining functions
void push2(char x)
{
    str[++top2]=x;
}
char pop2()
{
return str[top2--];
}
