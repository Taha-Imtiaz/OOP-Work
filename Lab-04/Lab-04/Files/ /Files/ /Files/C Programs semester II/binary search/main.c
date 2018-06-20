#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,i,c,start,end,mid,search;
 printf("Enter the size of an array");
 scanf("%d",&n);
 int a[n];
 printf("enter numbers");
 for (i=0;i<n;i++){
 scanf("%d",&a[i]);}
 c=0;
 start=0;
 end=n-1;
 printf("enter a number you want to search");
 scanf("%d",&search);
 while(start<=end)
 {
     mid=(start+end)/2;
     if (a[mid]==search)
     c++;
    if (a[mid]<search){
         start=mid+1;
        }
    else{
    end=mid-1;
    }
    }
    printf("number is found on index %d\n",start);


if(c==0)
printf("number not found\n");
     }
