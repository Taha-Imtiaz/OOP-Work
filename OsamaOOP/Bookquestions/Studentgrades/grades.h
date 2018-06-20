#include <iostream>
using namespace std;

class StudentGrade{
public:
StudentGrade()
{
  for(int i=0;i<=5;i++)
  {
    this->grades[i]=0;
  }
}

StudentGrade(int grades[])
{
  for(int i=0;i<=5;i++)
  {
    this->grades[i]=grades[i];
  }
}

StudentGrade(StudentGrade& student)
{
    for(int i=0;i<=5;i++)
    {
      this->grades[i]= student.grades[i];
    }
}

int getgrades()
{
  for(int i=0;i<=5;i++)
  {
    return this->grades[i];
  }
}

void setgrades(int grades[])
{
  for(int i=0;i<=5;i++)
  {
    this->grades[i]= grades[i];
  }
}


float sum()
{
  int sum=0;
for(int i=0;i<=5;i++)
 {
 sum=sum+this->grades[i];
 }
 return sum;
}

float Avggrade()
{
  
  float avg;
 
avg= this->sum/6;
 return avg;
}

float percentage()
{
  return (this->sum/600)*100;
}

bool operator > (StudentGrade B)
{
  if(this->percentage>B.percentage)
  {
  return true;
  }
  else
  return false;
}

void show()
{
  cout<<"\nThe grades of all the subjects are:\n";
  for(int i=0;i<=5;i++)
  {
    cout<<grades[i]<<endl;
  }
}




private:
int grades[6];


};