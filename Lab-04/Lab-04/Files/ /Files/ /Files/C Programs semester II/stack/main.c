// stack
#include <stdio.h>
#include <stdlib.h>

int emptystack(void);
int fullstack(void);
int peek(void);
int pop(void);
void push(int);
int top=-1;
int value,val;maxsize=20;
int stack[20];
int main()
{

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    value=peek();
    printf("%d",value);
    val=pop();
    printf("%d",val);
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
int peek()
{
    return stack[top];
}
int pop()
{
if(!emptystack()){
top=top-1;
}
else
printf("stack is empty");
}
void push(int value)
{
    if(!fullstack())
    {
    top=top+1;
    stack[top]=value;
}
else
printf("stack is full");
}

