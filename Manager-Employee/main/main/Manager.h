
#include <string>

class Manager:public Employee
{
public:
Manager():Employee()
	{
		
		
	}
	Manager (int l,string name):Employee(name,l*10000)
	{
	this->level=l;
	}
void quarrel(Employee *e)
{
	this->salary+=1000;
	e->paycut(300);
	cout<<"After quarrel salary is:"<<salary<<endl;
}
private:
	int level;
};