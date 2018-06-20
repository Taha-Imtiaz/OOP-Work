#include <stdio.h>
#include <stdlib.h>
int i=0,search;
int array[]={1,2,3,4,5,6,7,8,9,10};
int start=1 , end=10;
int main()
{


    int start=1,end=10;
    printf("Enter no to search!\n");
    scanf("%d",&search);
    printf("%d",BinarySearch(search));

}
int BinarySearch(int search)
{
    int mid=(start+end)/2;
    if(array[mid]==search)
     {
         printf("Number found!\n");
         i++;

     }
    else if(array[mid]<search)
    {
        start=mid+1;
        BinarySearch(search);

    }
    else
    {
        end=mid-1;
         BinarySearch(search);
    }

if(i==0)
{
    printf("Number not found!!");
}

}
