#include <stdio.h>
#include <stdlib.h>
void soc(int);
int main()
{
    int n;
    printf("Enter n numbers\n");
    scanf("%d",&n);
    soc(n);

}
void soc(int n)
{
    int a;
    if(n>=1)
    {
     a=n*n*n;
     soc(n-1);
     printf("%d\t",a);

    }
}
