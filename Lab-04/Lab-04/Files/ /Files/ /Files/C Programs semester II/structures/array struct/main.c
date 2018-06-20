#include <stdio.h>
#include <stdlib.h>
struct patient_record{
char name[20];
int diastolic,systolic;
};

int main()
{

    int n,i;
    printf("enter the size of an array");
    scanf("%d",&n);
    int a[n];
    struct patient_record patient[n];
    for(i=0;i<n;i++)
    {

    printf("enter %d patient name,diastolic systolic\n",i+1);
    gets(patient[i].name);
    scanf("%d\n",&patient[i].diastolic);
    fflush(stdin);
    scanf("%d\n",&patient[i].systolic);
    }
   for(i=0;i<n;i++)
    {
    puts(patient[i].name);
    printf("%d\n",patient[i].diastolic);
    printf("%d\n",patient[i].systolic);
    }
}
