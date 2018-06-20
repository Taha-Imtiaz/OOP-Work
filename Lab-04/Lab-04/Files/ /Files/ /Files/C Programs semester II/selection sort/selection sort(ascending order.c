// selection sort (ascending order)
#include <stdio.h>
int main()
{
    int n,i,j,min_position,minimum,temp;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    min_position=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[min_position])
        {
        min_position=j;
        minimum=a[j];
        }
        }
    temp=a[i];
    a[i]=a[min_position];
    a[min_position]=temp;
    }
    printf("The sorted array in ascending order  is\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);

    }
