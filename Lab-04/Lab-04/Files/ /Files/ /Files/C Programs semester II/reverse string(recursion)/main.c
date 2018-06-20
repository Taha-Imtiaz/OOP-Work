#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("enter a string\t");
    reverse();
}


void reverse()
{
    char ch;
    scanf("%c",&ch);
    if(ch!='\n')
    reverse();
    printf("%c",ch);
}
