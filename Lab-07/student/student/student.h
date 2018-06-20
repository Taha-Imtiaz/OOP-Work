#include<iostream>
#include<string.h>
#include<string>

using namespace std;

class Student
{
private:
	string name;
	int rollno;
	string *course;
	int count;

public:
	Student()
	{
		this->name= "Ashar";
		this->rollno=101084;
		this->course=new string[50];
		this->count=0;

		
	}

	Student (Student &clone)
	{
		this->count=clone.count;
		this->name=clone.name;
		this->rollno=clone.rollno;
		this->course=new string[count];
		int i;
		for(i=0;i<count;i++)
		{
		this->course[i]=clone.course[i];
		}

	}
	//void addcourse(string course, int ind)
	/*{
		this->course[ind] = course;


	}*/

	void addcourse(string x)
	{ 
		this->course[count]=x;
		count++;
	}
	void addcourse()
	{
		cin >> this->course[count];
		count++;
	}

	string getcourse(int index)
	{
	return this->course[index];
	}

	void setname(string name)
	{
		this->name = name;
	}

	friend ostream& operator <<(ostream& s, Student s1)
	{
    cout<<"Name:"<<s1.name<<endl<<"Roll no:"<<s1.rollno<<endl;
    int i;
    for(i=0;i<s1.count;i++)
   {
	   cout<<s1.course[i]<<endl;
   }

	return s;
  }

  void operator=(Student B)
	
   {
	 this->count=B.count;
	this->name= B.name;
	this->rollno=B.rollno;
	this->course=new string[50];
	int i;

	for(i=0;i<this->count;i++)
	{
	this->course[i]=B.course[i];
	}

	}

		
	void display()
	{
		
		
	    cout<<this->name<<endl;
		cout<<this->rollno<<endl;
		int i;
		for(i=0;i<count;i++)
		{
			cout<<this->course[i]<<endl;
	}
}
};