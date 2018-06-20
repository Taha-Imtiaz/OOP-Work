
#include<string>


class Manager:public Employee
{
private:
int level;
public:
	Manager(int l,string s):Employee(s,l*10000)
	
	{
		this->level=l;
	}
	friend ostream& operator&&(ostream &o,const Manager &m)
	{
return	(o<<m<<" at level "<<m.level<<endl);
	}
};