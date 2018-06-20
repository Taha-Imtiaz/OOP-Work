
#include <string>

class Employee
{
public:
	Employee()
	{
	this->Name="Taha";
	this->salary=55555509;
	}
	Employee(string name,float sal)
	{
		this->Name=name;
		this->salary=sal;
	}
	friend ostream& operator<<(ostream& out ,const Employee &e)
	{
		return out<<e.Name<<" paid "<<e.salary<<endl;
	}
	void paycut(float amt)
	{
		cout<<Name<<" is angry "<<endl;
		salary-=amt;
		cout<<"After paycut salary is:"<<salary<<endl;
	}
private:
	string Name;
protected:
	float salary;
};