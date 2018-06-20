// ICS PROJECT


// first include header files
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
// declaring all functions
void infix_postfix(void);
void infix_prefix(void);
void postfix_infix(void);
void prefix_infix(void);
void prefix_postfix(void);
void postfix_prefix(void);

int main()
{
    int choice;
    while(1)
    {
    system("cls");                                              // clear the screen
    printf("\nYou have the following options to convert from:");
    printf("\n1.\tInfix to Postfix");     // menu displays to the user
    printf("\n2.\tInfix to Prefix");
    printf("\n3.\tPostfix to Infix");
    printf("\n4.\tPrefix to Infix");
    printf("\n5.\tPrefix to Postfix");
    printf("\n6.\tPostfix to Prefix");
    printf("\n7.\tExit");
    printf("\n\n");
    printf("\nEnter your choice\n");        // ask the user to input choice
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("\nYou want to convert from infix to postfix");
    infix_postfix();                 //calling  function
    break;
    case 2:
    printf("\nYou want to convert from infix to prefix");
    infix_prefix();
    break;
    case 3:
    printf("\nYou want to convert from postfix to infix");
    postfix_infix();
    break;
    case 4:
    printf("\nYou want to convert from prefix to infix");
    prefix_infix();
    break;

    case 5:
    printf("\nYou want to convert from prefix to postfix");
    prefix_postfix();
    break;

    case 6:
    printf("\nYou want to convert from postfix to prefix");
    postfix_prefix();
    break;

    case 7:
    exit(0);
    default:
    printf("You have entered an invalid choice");
}
printf("\n");
system("pause");
}

}
void push(char);
void pop (void);
int i,top = -1;
char x[100],str[100];

// IST CONVERSION PROGRAM DEFINITION
infix_postfix()                                             // 1st conversion infix to postfix
{
printf("\nPlease enter an Infix Expression\n");
fflush(stdin);
fgets(x,sizeof(x),stdin);                                   //input infix

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
        push(x[i]);                      // push the operator
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




/*2ND CONVERSION PROGRAM DEFINITION*/
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
fflush(stdin);
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




/*3RD CONVERSION PROGRAM DEFINITION*/
void push2(char);        // declaring functions
char pop2(void);

int i,top2 = -1;         // defining variables
char data,op,op1;
char x[100],str[100],str1[100];     // definining arrays

postfix_infix()                     // FUNCTION DEFINITION
{

char m,j=0;
printf("\nPlease enter an postfix Expression\n");
fflush(stdin);
gets(x);
printf("Postfix is:\t");
puts(x);                       // input postfix expression
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
// defining functions PUSH AND POP
void push2(char x)
{
    str[++top2]=x;
}
char pop2()
{
return str[top2--];
}



/*4TH CONVERSION PROGRAM DEFINITION*/
// declaring functions
void push3(char);
char pop3(void);
int i,top3 = -1;
char data,op,a;
char x[100],str[100];

prefix_infix()
{
printf("\nPlease enter an prefix Expression\n");
fflush(stdin);
gets(x);                    // input prefix expression
printf("prefix is:\t");
puts(x);
int len=strlen(x);          // calculating length of the string
printf("Calculating infix Please Weight...................\n");
Sleep(5000);
printf("the infix of the given prefix expression is\n\n");
for(i=0;i<len;i++)
{
    if((x[i]=='+')||(x[i]=='-')||(x[i]=='*')||(x[i]=='/'))
    {
    push3(x[i]);             // push the operator to stack
    }
    else
    {
    op=pop3();               // pop the operator
    a=x[i];
    printf("%c%c",a,op);
    }
}
}
// defining functions
void push3(char x)
{
    str[++top3]=x;
}

char pop3()
{
 return str[top3--];
}




/*5TH CONVERSION PROGRAM DEFINITION*/
void push4(char);
char pop4(void);
int i,top4 = -1,K=0;
char data,op,a,b,c;
char x[100],str[100],str1[100],str2[100];
int index = 0;
prefix_postfix()
{
printf("\nPlease enter an prefix Expression\n");
fflush(stdin);
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



/*6TH CONVERSION PROGRAM DEFINITION*/
void push5(char*);        // declaring functions
void pop5(char*);

int i,top5 = -1;         // defining variables
char data,op3[100],op2[100];
char x[100],str3[100][100],str1[100],str2[100];
char operator[] = {'/', '*', '+', '-'};

postfix_prefix()
{

char m=0,j=0;
printf("\nPlease enter a postfix Expression\n");
fflush(stdin);
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
    pop5(op3);
    pop5(op2);
    str1[0]=x[i];
    strcpy(str2,str1);
    strcat(str2,op2);
    strcat(str2,op3);
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
