#include <stdio.h>
#include <stdlib.h>
int son(int);
int main()
{
    int n;
    printf("enter n numbers");
    scanf("%d",&n);
    son(n);
}
int son(int n)
{

if(n>=1)
{
    son(n-1);
    printf("%d ",n);

}

}

