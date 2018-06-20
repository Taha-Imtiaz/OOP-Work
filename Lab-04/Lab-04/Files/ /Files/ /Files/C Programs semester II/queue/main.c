#include<stdio.h>
#include<string.h>
int rear=0;
int front=0;
int maxsize=20;
int a[maxsize];
void createqueue(void);
void destroyqueue(void);
int emptyqueue(void);
int fullqueue(void);
void enque(int);
int deque(void);
main()
{
int s;
enque(1);
enque(2);
enque(3);
s=deque();
printf("%d",s);
s=deque();
printf("%d",s);
s=deque();
printf("%d",s);
s=deque();
printf("%d",s);
s=deque();
printf("%d",s);
}

void createqueue(){
front=0;
rear=0;
}
void destroyqueue()
{
front=0;
rear=0;
}
int emptyqueue()
{
    if(rear==front)
    return 1;
    else
    return 0;
}
int fullqueue()
{
    if((rear+1)%maxsize==front)
    return 1;
    else
    return 0;
}
void enque(int value)
{
    if(!fullqueue())
    {
    rear=(rear+1)%maxsize;
    queue[rear]=value;
    }
    else
    printf("queue is full");
    }
    int deque(){
    if(!emptyqueue())
    {
        front=(front+1)%maxsize;
        return queue[front];
    }
    else
        printf("queue is empty");
    }
