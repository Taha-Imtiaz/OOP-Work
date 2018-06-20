#include <stdio.h>
#include <stdlib.h>


int main()
{
    void swap(int*,int*);
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("the value after swapping is\n");
    printf("%d%\n%d\n",a,b);
}
void swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;

}
