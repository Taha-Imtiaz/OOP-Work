#include<stdio.h>
#include<conio.h>
main()
{
int no;
printf("enter any no");
scanf("%d",&no);
int*ptr=&no;
printf("%u\n",ptr);
ptr++;
printf("%u\n",ptr);
ptr--;
printf("%u\n",ptr);
}
