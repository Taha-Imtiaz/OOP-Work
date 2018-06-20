#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    int b;
    printf("Enter a string\n");
    gets(a);
    b=strlen(a);
    printf("%d",b);
}
