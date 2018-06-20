
#include <string>

class Employee
{
public:
	Employee()
	{
		this->name="Usman";
		this->salary=5000;
	}
	Employee(float s,string n)
	{
	this->name=n;
	this->salary=s;
	}
	void virtual Paycut(float amount)
	{
		this->salary-=amount;
	}
	void virtual Payrise()
	{
		this->salary+=800;
	}
	friend ostream& operator<<(ostream &o,Employee &e)
	{
		return(o<<e.name<<" paid "<<e.salary<<endl);
	}
protected:
	string name;
	float salary;

};