#include <stdio.h>
#include <stdlib.h>

// insertion sort
int main()
{
    int n,i,temp,j;
    printf("enter elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)

        {
            if(a[j]>a[i])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i--;
            }
            }
            }
    printf("the data in ascending order is");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);

}
