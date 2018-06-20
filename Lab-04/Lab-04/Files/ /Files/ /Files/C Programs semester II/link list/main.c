#include <stdio.h>
#include <stdlib.h>
struct node
{
int value;
struct node *link;
};
top=NULL;

void push(int value)
{
struct node *temp;
temp =(struct node*)(sizeof(struct node));
temp->value=value;
temp->link=top;
top=temp;
}
void pop()
{
    if(top!=NULL)
    {
      struct node *temp;
      temp=top;
      printf("%d",temp->value);
      top=temp->link;
      free(temp);
    }
    else
    printf("stack is empty");
}
void push(int);
void pop(void);
int main()
{
    int value;
    printf("Enter a number\n");
    scanf("%d",&value);
    push(value);
    pop();


}
