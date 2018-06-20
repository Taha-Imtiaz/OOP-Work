#include <stdio.h>


int main()
{
    int a[100],i;
    printf("enter a string\n");
    gets(a);
    for(a[i]=0;a[i]!='\0';i++)
    a[i]=a[i]-32;
    printf("%s",a);
}
