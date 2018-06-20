#include <stdio.h>
int main()
{
    int min(int,int);
    int n,i,k,loc,temp;
    printf("enter the no of elements in the array\n");
    scanf("%d",&n);
    printf("enter %d elements",n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(k=0;k<n-1;k++)
        {
            loc=min(k,n);
            temp=a[loc];
            a[loc]=a[k];
            a[k]=temp;
        }
    printf("the data in ascending order is\n");
    for(k=0;k<n;k++)
    printf("\n%d",a[k]);

}
    int min(int k,int n)
    {
        int j,min,loc;
        int a[n];
        min=a[k];
        for(j=k+1;j<n;j++)
        {
            if(min>a[j]);
            {
            min=a[j];
            loc=j;
            }
            }
    return loc;
    }
