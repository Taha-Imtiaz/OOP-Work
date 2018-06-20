#include <stdio.h>
#include <string.h>

int main()
{
   char a[20];
   int i,count=0,b;
    printf("Enter a string!\n");
    gets(a);
    b=strlen(a);
    for(i=0;i<b;i++){
    if((a[i]=='a')||(a[i]=='e'),(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
    {
    count++;
    }
    }
    printf("%d",count);

}
