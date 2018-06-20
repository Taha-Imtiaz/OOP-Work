#include <stdio.h>
#include <stdlib.h>
void rev_num(int);
int main()
{
   int a;
    printf("enter a number\n");
    scanf("%d",&a);
    rev_num(a);
}
void rev_num(int a)
{
int b;
while(a>0)
{
    b=a%10;
    a=a/10;
    printf("%d\t",b);
    rev_num(a);
}
}
