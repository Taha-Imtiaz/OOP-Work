#include <stdio.h>
#include <stdlib.h>

 void fabonacci(int);
 int t=-1,b=1;
int main()
{


    int n;
    printf("enter the terms of fabonacci series\n");
    scanf("%d",&n);
    fabonacci(n);

}
void fabonacci(int a)
{

    int c;

    if(a>=1){
    c=t+b;
    printf("%d ",c);
    t=b;
    b=c;
    }
    fabonacci(a-1);

}
