#include <iostream>
using namespace std;

#ifndef employee_h
#define employee_h


class employee{

public:

employee();

employee(string n, float s);

friend ostream& operator<<(ostream& o,const employee& e)
{
  return o<<endl<<e.name<<" paid "<<e.salary;
}

void paycut(float amt);





protected:
string name;
float salary;

};

#endif