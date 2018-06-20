#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("enter the size of an array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in the array");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
      for(j=i+1;j<n;j++)
      {
          if(a[i]!=a[j])
            break;

            printf("%d",a[j]);
        }
      }
     }
