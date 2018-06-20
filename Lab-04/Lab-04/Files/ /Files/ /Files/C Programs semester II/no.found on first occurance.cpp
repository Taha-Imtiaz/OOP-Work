// no. found at first occurance
#include<stdio.h>
main()
{
int no,n,i,count=0;
printf("Enter the size of an array");
scanf("%d",&n);
int a[n];
printf("Enter numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter a no you want to search at first occurance");
scanf("%d",&no);
for(i=0;i<n;i++)
{

if(a[i]==no)
{
count++;
printf("value found on index is %d",i);
break;
}
}
if(count==0)
{

printf("value is not found");

}
}




