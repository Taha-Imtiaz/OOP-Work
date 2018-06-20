#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    int i,t;
    printf("enter a string\n");
    gets(a);
    t=strlen(a);
    for(i=t-1;i>=0;i--)
    {
      printf("%c",a[i]);
    }
}
