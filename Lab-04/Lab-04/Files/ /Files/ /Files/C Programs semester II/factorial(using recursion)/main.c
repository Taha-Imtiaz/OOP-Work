// factorial
#include <stdio.h>
#include <stdlib.h>

int fact(int);
int main()
{
    int n,f;
    printf("enter a number");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial of a entered number is %d",f);
}
int fact(int a)
{
    int s;
    if(a==1)
    return a;
    s=a*fact(a-1);
    return s;

}
