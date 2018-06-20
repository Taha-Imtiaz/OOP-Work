#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int greatest(int[],int);
int G,i;
int main()
{
   int n,i,t;
    printf("enter the elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("enter numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    t=greatest(a,n);
    printf("the greatest number in the array is %d",t);

}
int greatest(int a[],int n)
{
    int max;
    if(n==1)
    return a[0];
    else
        max= greatest(a,n-1);
return max;
}

