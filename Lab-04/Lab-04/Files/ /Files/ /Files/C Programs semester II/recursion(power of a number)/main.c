#include <stdio.h>
#include <stdlib.h>

int exp(int,int);
int main()
{
    int b,p,s;
    printf("enter the base and power");
    scanf("%d%d",&b,&p);
    s=exp(b,p);
    printf("the result is %d",s);
}
int exp(int a,int b)
{
    int e;
    if (b==0)
    return 1;
    e= a*exp(a,b-1);
    return e;


}
