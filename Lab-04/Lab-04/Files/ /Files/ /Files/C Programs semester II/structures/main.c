#include <stdio.h>
#include <string.h>
struct student{
char name[20],email[30];
int age;
};

 main()
{
    struct student s1,s2;
    printf("enter the data record of 1st student\n");
    printf("enter name ,age &email\n");
    gets(s1.name);
    scanf("%d\n",&s1.age);
    gets(s1.email);
    printf("enter the data record of 2nd student\n");
    printf("enter name ,age &email\n");
    gets(s2.name);
    scanf("%d\n",&s2.age);
    gets(s2.email);
    printf("%s\n%d\n%s\n",s1.name,s1.age,s1.email);
    printf("%s\n%d\n%s\n",s2.name,s2.age,s2.email);
}
