#include <iostream>
#include "employee.h"
using namespace std;

class secretary:public employee
{
public:
secretary(float s, string n);

void paycut(float amt);

friend ostream& operator<<(ostream& o, const secretary& s)
{
  return o<<(employee)s<<endl;
}

private:

};