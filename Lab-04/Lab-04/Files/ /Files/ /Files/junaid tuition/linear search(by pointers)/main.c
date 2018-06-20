// linear search
#include <stdio.h>
#include <stdlib.h>

int main()
{
   void linear (int*,int*,int);
    int n,i,search,*p;

    printf("enter the no.of elements in the array ");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    int a[n];
    p=&a[0];
    for(i=0;i<n;i++)
    scanf("%d",p+i);
    printf("enter the element that you want to search");
    scanf("%d",&search);
    linear((p+i),&search,n);
    printf("%d is present at %d location" ,search,i+1);
    }

    void linear (int*(p+i),int*search,int n)
    {
       int i;

    for(i=0;i<n;i++)
    {
    if(*(p+i)==*search)
       break;
        }
    }

