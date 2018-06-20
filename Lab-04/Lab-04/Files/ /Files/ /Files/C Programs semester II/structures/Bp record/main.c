#include <stdio.h>
#include <string.h>
struct BP_record
{
    int diastolic,systolic;

};
struct patient_record{
char name[20];
int age;
struct BP_record R1
};

int main()
{
    struct BP_record R1;
    struct patient_record P1;
    printf("enter diastolic,systolic\n");
    scanf("%d\n%d\n",&R1.diastolic,&R1.systolic );
    printf("%d\n%d\n",R1.diastolic,R1.systolic);
    printf("enter the patient record\n");
    printf("enter name,age & pressure\n");
    gets(P1.name);
    scanf("%d\n",&P1.age);
    scanf("%d\n",&P1.R1.diastolic);
    puts(P1.name);
    printf("age is %d\n",P1.age);
    printf("diastolic level is %d\n",P1.R1.diastolic);
}
