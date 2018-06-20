#include <iostream>
#include "employee.h"
using namespace std;

class manager:public employee
{
public:
manager():employee()
{

}

manager(int l, string s):employee(s,l*10000)
{
  this->level=l;
}

friend ostream& operator<<(ostream& o, const manager& m)
{
  return o<<(employee)m<<" at level "<<m.level<<endl;
}



friend ostream& operator&&(ostream& s, const manager& m)
{
  return s<<m<<" at level "<<m.level<<endl;
}


private:
int level;
};