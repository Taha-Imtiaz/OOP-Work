#include <stdio.h>
#include <stdlib.h>
void binary_search(int);
int i,c=0,start=0,end=9,mid,search;
 int a[10]={10,9,8,7,6,5,4,3,2,1};
int main()
{
printf("enter a number you want to search");
 scanf("%d",&search);
 binary_search(search);
}
 void binary_search(int n)
 {
     mid=(start+end)/2;
     if (a[mid]==search)
     {
      printf("number is found\n");
      c++;
     }

    if (a[mid]<search){
         start=mid+1;
         binary_search(n);
        }
    else{
    end=mid-1;
    binary_search(n);
    }


if(c==0)
printf("number not found\n");
}
