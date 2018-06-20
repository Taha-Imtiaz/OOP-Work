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
   fflush(stdin);
   gets(a);
    len=strlen(a);
    printf("the string in reverse order is\n");
    for(i=0;i<len/2;i++)
    {
        t=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=t;
         printf("%c%c",a[i],a[len-1-i]);

    }




}
