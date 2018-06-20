// stack
#include <stdio.h>
#include <stdlib.h>

int emptystack(void);
int fullstack(void);
char peek(void);
void pop(void);
void push(char);
int top=-1;
int value,val;maxsize=20;
int stack[20];
int main()
{

    push('A');
    push('H');
    push('M');
    push('E');
    push('D');
    value=peek();
    printf("%c",value);
    pop();
    value=peek();
    printf("%c",value);
    pop();
    value=peek();
    printf("%c",value);
    pop();
    value=peek();
    printf("%c",value);
    pop();
    value=peek();
    printf("%c",value);

}
int emptystack(){


if(top==-1)
return 1; // stack is empty
else
return 0; //stack is full
}
int fullstack()
{
    if(top==maxsize-1)
    return 1;
    else
    return 0;
}
char peek()
{
    return stack[top];
}
void pop()
{
int data;
if(!emptystack()){
top=top-1;
}
else
printf("stack is empty");
}
void push(char value)
{
    if(!fullstack())
    {
    top=top+1;
    stack[top]=value;
}
else
printf("stack is full");
}

