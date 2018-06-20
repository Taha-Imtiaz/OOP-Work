#include <stdio.h>
int main()
{
    int min(int,int);
    int n,i,k,loc,temp;
    printf("enter the no of elements in the array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("the sorted array is");
        for(k=0;k<n;k++)
        {
            loc=min(k,n);
            temp=a[loc];
            a[loc]=a[k];
            a[k]=temp;
            printf("%d\n",a[k]);
        }
}
    int min(int k,int n)
    {
        int j,min,loc;
        int a[n];
        min=a[k];
        loc=k;
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
