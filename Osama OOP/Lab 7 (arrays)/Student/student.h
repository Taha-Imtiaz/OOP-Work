#include <iostream>
#include <string>
using namespace std;


class Student{
public:

Student()
{
  this->name= "Osama";
  this->seat_number=170;
  this->max=10;
  this->courses= new string[this->max];
  this->index=0;
}

Student(Student & studentcopy)
{
  this->name= studentcopy.name;
  this->seat_number= studentcopy.seat_number;
  this->index= studentcopy.index;
  this->courses= new string[this->index];
  for(int i=0; i<studentcopy.index;i++)
  {
    this->courses[i]=studentcopy.courses[i];
  }
}

void addcourse(string coursename)
{
   if(this->index==this->max-1)
    {
      increasesize();
    }
    this->courses[this->index]= coursename;
     this->index= this->index+1;
    

  
  
}
void setindex(int index)
{
  this->index= index;
}
string getcourses(int i)
{
  return this->courses[i];
}

int getseatnumber()
{
  return this->seat_number;
}

string getname()
{
  return this->name;
}

Student& operator=(const Student& s)
{
  this->name= s.name;
  this->seat_number= s.seat_number;
  this->index= s.index;
  for(int i=0; i<this->index;i++)
  {
    this->courses[i]= s.courses[i];
    //cout<<this->courses[i]<<endl;s
  }
  return *this;
}

int getindex()
{
  return this->index;
}

void increasesize()
{
  this->max=this->max+5;
  string *coursestemp= nullptr;
   coursestemp=new string[this->max];
  for(int i=0;i<=this->index;i++)
  {
    coursestemp[i]=this->courses[i];
    //cout<<coursestemp[i];
  }
  delete [] courses;
  courses= coursestemp;
  for(int j=this->index+1;j<=this->max-1;j++)
  {
    courses[j]= " ";
  }
}

friend ostream& operator <<(ostream& out, Student &studentname)
{
  out <<"\nThe details of the student are:\n"<< studentname.name<<endl<<studentname.seat_number<<endl;
 
  for(int i=0;i<studentname.index;i++)
  {
    out<<studentname.courses[i]<<endl;
    
  }
 
}

~Student()
{
  delete[] courses;
  courses= nullptr;
}


private:
string name;
int seat_number;
int index;
string *courses= nullptr;
int count;
int max;
};