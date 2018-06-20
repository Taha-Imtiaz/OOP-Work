#include <stdio.h>
#include <string.h>

int main()
{
char a[]="abcd";
char b[]="efgh";
int t=strlen(a),u=strlen(b),i;
for(i=0;i<u;i++)
{
    if(a[i]==b[i])
        printf("0");
    }
    if(t==u)
        printf("<0");
    if(t!=u)
        printf(">0");

}
