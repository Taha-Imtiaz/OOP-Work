#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p,i,n;

    printf("enter n numbers\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers",n);
    p=&a[0];
    for(i=0;i<n;i++)
    scanf("%d",p+i);
    printf("the numbers are\n");
    for(i=0;i<n;i++)
    printf("%d\n",*(p+i));
}
