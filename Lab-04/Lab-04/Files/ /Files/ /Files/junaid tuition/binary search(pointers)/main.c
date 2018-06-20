// binary search
#include <stdio.h>
#include <stdlib.h>

int main()
{
    void sear (int*,int*,int*);
    int i,n,search,u,l=0;
    printf("enter the no. of elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements\n",n);
    u=n-1;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element that you want to search");
    scanf("%d",&search);
    sear(&l,&u,&search);
    }
    void sear(int*p,int*q,int*search)
    {
    int m,i,n;
    for(i=0;i<n;i++)
    {
        m=(*p+*q)/2;
        int a[m];
        if(a[m]==search&&*p!=*q)
        break;
        else
        {
            if(a[m]>search&&*p!=*q)
            {
            q=m-1;
            }
            else
            p=m+1;

        }
    if(p==m)
    printf("%d is not present in the array",search);


}

    printf("\n%d is found on index %d\n",a[m],m);

    }
