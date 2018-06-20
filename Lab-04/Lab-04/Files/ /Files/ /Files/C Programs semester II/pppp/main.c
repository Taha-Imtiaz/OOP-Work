#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,te,j,i,a[10]={43,6,2,10,37,5,9,3,90,7};
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }

    }
for(i=0;i<10;i++)
{
    printf("%d\n",a[i]);
}






}
