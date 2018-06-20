#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct GPACalculation
    {
    char name[20] ;
    int enrol_no[20],cred_hr;
    float  gpa,cgpa;
    };
int main()
{
   int no_of_std,i,j ,tot_cre_hr=0;
   float CGP=0,CGPA_tot;

printf("Enter the number of students of a class");
scanf("%d",&no_of_std);
struct GPACalculation CGPA[no_of_std];
for(i=0;i<no_of_std;i++)
{
printf("Enter the name of student %d:\n",i+1);
scanf("%s",CGPA[i].name);
printf("Enter the Enrollment no.of student %d:\n",i+1);
scanf("%d",&CGPA[i].enrol_no);
printf("Enter of GPA of all courses of student %d\n",i+1);
for(j=0;j<6;j++)
{
printf("enter the GP Of subject %d:\n",j+1);
scanf("%f",&CGPA[j].gpa);


printf("Enter Credit hrs of a course %d:\n",j+1);
scanf("%d",&CGPA[j].cred_hr);
tot_cre_hr=tot_cre_hr+CGPA[j].cred_hr;
CGP=CGP+(CGPA[j].gpa*CGPA[j].cred_hr);
CGPA_tot=((CGP)/(tot_cre_hr));
}
printf("CGPA of student %d=%f\n",i+1,CGPA_tot);
printf("\n");
if(CGPA_tot>2.88)
{
    printf("laptop should be assigned a person.......Best Wishes\n");
}
else
{
    printf("Laptop should not be assigned.......Best luck next time\n");
}
}


}
