#include <iostream>
#include "grades.h"
using namespace std;

int main()
{
float avg;
int n=0;
int grades[]={85,77,80,90,75,87};
n= (sizeof(grades))/(sizeof(grades[0]));
cout<<n;
int grades2[]={70,78,81,80,60,90};
StudentGrade Osama;
StudentGrade Ali(grades2);
Osama.setgrades(grades);
Osama.show();
if(Ali > Osama)
{
  cout<<"\nAli is a better student\n"<<endl;
}
else
{
  cout<<"\nOsama is a better student\n"<<endl;
}
avg=Osama.Avggrade();
cout<<"\nThe average of the student's grade is: "<<avg;
system("pause"); 
}