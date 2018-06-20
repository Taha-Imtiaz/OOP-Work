// postfix to infix
// include header files
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

void push5(char*);        // declaring functions
void pop5(char*);

int i,top5 = -1;         // defining variables
char data,op[100],op1[100];
char x[100],str3[100][100],str1[100],str2[100];
char operator[] = {'/', '*', '+', '-'};

main()
{

char m=0,j=0;
printf("\nPlease enter a postfix Expression\n");

gets(x);
printf("Postfix is:\t");
puts(x);                     // input postfix expression                     // reverse string
int len=strlen(x);              //calculating length
printf("Calculating prefix Please Weight...................\n");
Sleep(5000);
printf("the prefix of the given postfix expression is\n\n");
for(i=0;i<len;i++)
{
    for(j=0;j<4;j++)
    {
    if(x[i]==operator[j])      // operator precedence
    {

        m=1;
        break;
    }
    }
    if(m){
    pop5(op);
    pop5(op1);
    str1[0]=x[i];
    strcpy(str2,str1);
    strcat(str2,op1);
    strcat(str2,op);
    push5(str2);
}
    else
    {
   str1[0]=x[i];
    push5(str1);
    }
m=0;

}
   for(i=0;i<=top5;i++)
    printf("%s\n",str3[i]);
}
    // defining functions
void push5(char *x)
{
    top5++;
    strcpy(str3[top5],x);
}
void pop5(char *y)
{
strcpy(y,str3[top5]);
top5--;
}
