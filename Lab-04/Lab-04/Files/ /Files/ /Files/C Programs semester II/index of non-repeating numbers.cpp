// index of non repeating numbers
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
printf("Enter a repeating value\n");
scanf("%d",&no);
printf("the non-repeating numbers found on index no are\n");
for(i=0;i<n;i++)
{
if(a[i]!=no)
{
 count++;
 printf("%d\t%d\n",a[i],i);
}
}
if(count==0)
printf("value is not found");
}

