// prefix to infix
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void push4(char);
char pop4(void);
int i,top4 = -1,K=0;
char data,op,a,b,c;
char x[100],str[100],str1[100],str2[100];
int index = 0;
main()
{
printf("\nPlease enter an prefix Expression\n");
gets(x);
printf("Prefix is:\t");
puts(x);
int len=strlen(x);
printf("Calculating postfix Please Weight...................\n");
Sleep(5000);
printf("the postfix of the given prefix expression is\n\n");
for(i=0;i<len;i++)
{
    if((x[i]=='+')||(x[i]=='-')||(x[i]=='*')||(x[i]=='/'))
    {
    push4(x[i]);
    }
    else
    {

    str1[K]=x[i];
    index++;
    K++;

    if(index%2==0)
    {
        str1[K]=pop4();
        K++;
    }

    }
}
index = K;
for(i = 0; i<=len-K; i++)
{
    str1[index] = pop4();
    index++;
}



puts(str1);

}
void push4(char x)
{
    str[++top4]=x;
}

char pop4()
{
 return str[top4--];
}
