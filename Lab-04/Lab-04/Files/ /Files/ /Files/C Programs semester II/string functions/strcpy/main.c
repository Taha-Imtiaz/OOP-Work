// strcpy//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10]="abcd";
    char str2[10]="efgh";
    int c=0;
    for(c=0;c<10;c++)
    {
        str1[c]=str2[c];
        printf("%c",str1[c]);
    }
}
