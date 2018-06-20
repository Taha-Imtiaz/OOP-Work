#include <iostream>
using namespace std;

class employee{

public:

employee()
{

}

employee(string n, float s)
{
  this->name=n;
  this->salary=s;
}

friend ostream& operator<<(ostream& o,const employee& e)
{
  return o<<endl<<e.name<<" paid "<<e.salary;
}

virtual void paycut(float amt)
{
this->salary-=amt;
}

void payrise()
{
  this->salary+=800;
}





protected:
string name;
float salary;

};