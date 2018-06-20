#include <stdio.h>
#include <stdlib.h>

int fact(int);
int main()
{
    int n,t;
    printf("enter a number\n");
    scanf("%d",&n);
    t=fact(n);
    printf("the factorial of %d is %d",n,t);
}
int fact(int a)
{

    if(a==1)
        return 1;
    else
        return a*fact(a-1);
}
