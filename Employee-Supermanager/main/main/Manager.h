
#include <string>

class Manager:public Employee
{
private:
	int level;
public:
	Manager(int level,string name)
	{
		this->level=level;
		this->name=name;
	}
	void virtual Paycut(float amount)
	{
		this->salary+=amount*this->level;
	}
	void virtual Payrise()
	{
		this->salary+=1000;
	}

};