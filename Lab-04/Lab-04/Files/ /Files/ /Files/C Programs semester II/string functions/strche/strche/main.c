#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char i,ch;
    printf("enter the length of strings");
    scanf("%d",&n);
    char a[n];
    printf("\nenter the string");
    gets (a);
    printf("\nenter any character you want to search");
    gets(ch);
    for(i=0;i<n;i++)
    {
        if(ch==a[i])
            printf("\nthe character is present on index is %c and character is %c",a[i],i);
        else
            printf("\nthe character is not present");
    }

}
