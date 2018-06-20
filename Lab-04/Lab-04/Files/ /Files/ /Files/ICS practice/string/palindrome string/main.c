#include <stdio.h>
#include <string.h>

int main()
{
   char a[20];
   int t,i,j;
    printf("enter a string!\n");
    gets(a);
    t=strlen(a);
    for(i=t-1;i>=0;i--)
    if(a[i]==a[t-1])

        printf("the string is a palinndrome string");


}
