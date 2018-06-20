#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5,*j;
    j=&x;
    printf("%d\n",x);
    printf("%d\n",j);
    printf("%d\n",*j);
    printf("%d\n",&j);
    printf("%d\n",*&j);
    printf("%d\n",++j);



}
