#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum(int);
    int a,s;
    printf("enter a number\n");
    scanf("%d",&a);
    s=sum(a);
    printf("the sum of digit of %d is %d",a,s);
}
int sum(int a)
{
    int c=0,b=0;
    while(a!=0)
    {
       c=(a%10);
       a=a/10;
      b=c+sum(a);
      return b;

    }

}
