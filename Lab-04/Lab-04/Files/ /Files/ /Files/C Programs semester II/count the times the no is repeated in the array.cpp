// count the repeating elements in array
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
printf("enter a no which is repeating more than once");
scanf("%d",&no);
printf("the no. of times,number is repeated are\n");
for(i=0;i<n;i++)
if(a[i]==no)
count++;
 printf("%d\n",count);

if(count==0)
printf("value is not found");
}

