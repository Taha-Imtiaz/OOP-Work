// value found at last occurance
#include<stdio.h>
main()
{
int no,n,i,count=0,position=0;
printf("Enter the size of an array");
scanf("%d",&n);
int a[n];
printf("Enter numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter a no you want to search at last occurance");
scanf("%d",&no);
for(i=0;i<n;i++)
{

if(a[i]==no)
{
count++;
position=i;

}
}
if(count==0)
printf("value is not found");
else
printf("value found on index is %d",position);

}

