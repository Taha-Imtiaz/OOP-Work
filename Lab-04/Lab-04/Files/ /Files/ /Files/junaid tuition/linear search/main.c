// linear search
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,search;
    printf("enter the no.of elements in the array ");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element that you want to search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
    if(a[i]==search)
        printf("%d is present at %d location" ,search,i+1);
        }

}
