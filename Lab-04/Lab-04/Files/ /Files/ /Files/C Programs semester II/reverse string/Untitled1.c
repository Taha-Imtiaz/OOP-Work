#include <stdio.h>
#include <string.h>


int main()
{
    int ch,len,i;
    char t;
    printf("enter the characters in a string");
    scanf("%d",&ch);
    char a[ch];
    printf("enter the string\n");
    for(i=0;i<ch;i++)
    scanf("%s",a[i]);

    printf("the string in reverse order is\n");
    for(i=ch-1;i>=0;i--)
    printf("%c",a[i]);
}
