
#include<stdio.h>
#include<conio.h>
main()
{
int no,i;
printf("enter the size of array");
scanf("%d",&no);
int a[no];
printf("enter numbers");
for(i=0;i<no;i++)
scanf("%d",&a[i]);
int *ptr=&a[0];
while(ptr<=&a[no-1])
{
printf("%d\n",*ptr);
ptr+=2;
}
}
