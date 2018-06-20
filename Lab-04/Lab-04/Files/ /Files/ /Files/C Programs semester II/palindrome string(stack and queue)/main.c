#include <stdio.h>
#include <stdlib.h>

int max_size=6;
char stack[6];
int top=-1;

int emptystack()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int fullstack()
{
    if(top==max_size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peak()
{
    return stack[top];
}

int pop()
{
    if(!emptystack())
    {
        int data=stack[top];
        top--;
        return data;

    }
    else
    {
        printf("\nThe stack is empty\n");
    }
}

void push(char value)
{
    if(!fullstack())
    {
        top++;
        value=getche();
        stack[top]=value;
        return stack[top];
    }
    else
    {
        printf("\n\nThe stack is full\n");
    }
}

int maxsize=6;
char queue[6];
int front;
int rear;


void create_queue()
{
    front=0;
    rear=0;
}

void destroy_queue()
{
    front=0;
    rear=0;
}

int empty_queue()
{
    if(front==rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full_queue()
{
    if((rear+1)%maxsize==front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void enqueue(char value)
{
    if(!full_queue())
    {
        rear=(rear+1)%maxsize;
        value=getche();
        queue[rear]=value;
    }
    else
    {
        printf("\nThe queue is full\n");
    }
}


int  dequeue()
{
    if(!empty_queue())
    {
        front=(front+1)%maxsize;
        return queue[front];
    }
    else
    {
        printf("\nThe queue is empty\n");
    }
}

int main()
{
    int i,k=0;
    char dequed[3],q1,q2,q3,p1,p2,p3,poped[3];
    printf("\n\nEnqueue your string in the queue: ");
    enqueue(q1);
    enqueue(q2);
    enqueue(q3);
    printf("\n\nPush your string in the stack: ");
    push(p1);
    push(p2);
    push(p2);
    for(i=0;i<3;i++)
    {
    dequed[i]=dequeue();
    poped[i]=pop();
    if(dequed[i]!=poped[i])
    {
        k++;
        break;

    }
    }

    if(k>0)
    {
        printf("\n\nThe string is not a palindrome\n");
    }

    else
    {
        printf("\n\nThe string is a palindrome\n");
    }

}
