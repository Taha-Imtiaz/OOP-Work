
#include <string>

class Sceretary:public Employee
{
public:
	void paycut(float amt)
	{
	cout<<*this<<"is angry"<<endl;
		salary-=amt;
	}
	Sceretary(float s, string n):Employee(n, s)
	{
	
	
	}
};