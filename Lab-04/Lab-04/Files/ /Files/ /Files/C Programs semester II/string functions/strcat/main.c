#include <stdio.h>
#include <string.h>

int main()
{
    char a[10]="abcd";
    char b[10]="efgh";
    int t=strlen(a);
    int u=strlen(b);
    int i;
    for(i=0;i<u;i++)
    {
    a[t]=b[i];
    t++;
     }
    for(i=0;i<t;i++)
    printf("%c",a[i]);


}
