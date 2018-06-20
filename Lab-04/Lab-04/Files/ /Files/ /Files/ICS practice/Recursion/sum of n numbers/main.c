#include <stdio.h>
#include <stdlib.h>
int num(int);
int main()
{
    int n,k;
    printf("Enter the n numbers\n");
    scanf("%d",&n);
    k=num(n);
  printf("the sum of 1st %d numbers is\n%d",n,k);
}
int num(int a)
{
    if(a==1)
    return 1;
    else
    return a+num(a-1);

}
