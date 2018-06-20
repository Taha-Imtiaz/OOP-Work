#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]="hello";
    strchr(str1,'k');
    if(strchr(str1,'k')!=0)
    {
     printf("the character is present in the string");
    }
    else
    {
    printf("the character is not present in the string");
    }
    }



