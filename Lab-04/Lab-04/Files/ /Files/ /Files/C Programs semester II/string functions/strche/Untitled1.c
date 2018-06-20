#include <stdio.h>
#include <string.h>

int main()
{
char a[]="abcd";
strchr(a,'e');
if (strchr(a,'e')!=0)
printf("the character is present in string");
else
printf("the character is not present in string");
}
