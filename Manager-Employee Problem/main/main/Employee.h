
#include<string>

class Employee
{
protected:
	string name;
	float salary;
public:
	Employee(string n,float s)
	{
	this->name=n;
	this->salary=s;
	}
	friend ostream & operator<<(ostream &o,const Employee &e)
	{
		return o<<e.name <<" paid "<<e.salary;
	}
};