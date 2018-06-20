#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no,age;
    char name[15];
};

int main()
{
    struct student position;
    printf("enter the roll no of student\n");
    scanf("%d",&position.roll_no);
    fflush(stdin);
    printf("enter the name of student\n");
    gets(position.name);
    printf("enter students age\n");
    scanf("%d",&position.age);
    printf("the name of the student is %s\n",position.name);
    printf("the roll no of a student is %d\n",position.roll_no);
    printf("the age of a student is %d\n",position.age);


}
