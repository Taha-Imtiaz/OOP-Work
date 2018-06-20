#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int no_of_std,enrol_no[20],i,j,tot_cre_hr=20,cred_hr[20];
    float GP[20],CGPA_tot,sum=0;
    FILE *fp;
    fp=fopen("laptop.txt","w");
    if (fp==NULL)
       printf("File not found\n");
    else
    {
       while(fp!=NULL){
        printf("Enter the number of students\n ");
        scanf("%d",&no_of_std);
        for(i=0;i<no_of_std;i++)
        {
        printf("Enter the name of student %d:\n",i+1);
        fflush(stdin);
        gets(str);
        printf("Enter the enrollment no. of student %d:\n",i+1);
        scanf("%d\n",&enrol_no[i]);
        printf("Enter of GPA of all courses of student %d\n",i+1);
        for(j=0;j<6;j++)
        {
        printf("enter the GP Of subject %d:\n",j+1);
        scanf("%f",&GP[j]);
        printf("Enter Credit hrs of a course %d:\n",j+1);
        scanf("%d",&cred_hr);
        sum=sum+(cred_hr[j]*GP[j]);
        }
        CGPA_tot=(sum)/(tot_cre_hr);
        printf("CGPA of student %d=%f\n",i+1,CGPA_tot);
        printf("\n");
        fclose(fp);
        }
        }
        }
}
