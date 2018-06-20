// prefix to infix
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void push(char);
char pop(void);
int i,top = -1,j=0;
char data,op,b,a,c;
char x[100],str[100],str1[100],str2[100];

int
main()
{

printf("\nPlease enter an postfix Expression\n");
gets(x);
printf("postfix expression is:\t");
puts(x);
int len=strlen(x);
printf("Calculating prefix Please Weight...................\n");
Sleep(5000);
printf("the prefix of the given postfix expression is\n\n");
for(i=0;i<len;i++)
{
    if((x[i]=='+')||(x[i]=='-')||(x[i]=='*')||(x[i]=='/'))
    {
    b=pop();
    a=pop();
   str2[0]=x[i];
    strcpy(str1,str2);
    strcat(str1,a);
    strcat(str1,b);
    push(str1);

    }

    else
    {

push(x[i]);

}
}
for(i=0;i<top;i++)
printf("%s",str[i]);

}

void push(char x)
{
    str[++top]=x;
}

char pop()
{
 return str[top--];
}
