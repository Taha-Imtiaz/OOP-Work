// binary search
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,search,m,u,l=0,c;
    printf("enter the no. of elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements",n);
    u=n-1;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element that you want to search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        m=(l+u)/2;
        if(a[m]==search&&l!=u)
       break;
        else
        {
            if(a[m]<search&&l!=u)
            {
            u=m-1;
            }
            else
            l=m+1;

        }
    if(l==u)
    printf("%d is not present in the array",search);
}
printf("\n%d is found on index %d\n",a[m],m);

}
