#include<iostream>
#include<string.h>
#include<string>

using namespace std;

class Student
{
private:
	string name;
	int rollno;
	string course[100];

public:
	Student()
	{
		this->name= "Ashar";
		this->rollno=101084;
		course[0]="BSCS";
	}

	Student (Student &clone)
	{
		this->name=clone.name;
		this->rollno=clone.rollno;
		int i;
		for(i=0;i<=5;i++)
		{
			course[i]=clone.course[i];
		}

	}


	void addcourse(string x, int index)
	{
	   course[index]=x;
	}


	string getcourse(int index)
	{
	return course[index];
	}


	  friend void operator <<(ostream& s, Student &s1)
  {
    cout<<"Name:"<<s1.name<<endl<<"Roll no:"<<s1.rollno<<endl;
    int i;
    for(i=0;i<5;i++)
   {
	 cout<<s1.getcourse(i)<<endl;
   }


  }

  void operator=(Student &B)
	
   {	
	this->name= B.name;
	this->rollno=B.rollno;

	int i;

	for(i=0;i<=3;i++)
	{
	this->course[i]=B.course[i];
	}

	}

		
	void display()
	{
		
		
	    cout<<this->name<<endl;
		cout<<this->rollno<<endl;
		int i;
		for(i=0;i<=4;i++)
		{
			cout<<this->getcourse(i)<<endl;
	}
}
};