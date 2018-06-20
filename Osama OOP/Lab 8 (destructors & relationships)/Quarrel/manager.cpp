#include <iostream>
#include "manager.h"
using namespace std;

manager::manager():employee()
{

}

manager::manager(int l, string s):employee(s,l*10000)
{
  this->level=l;
}

void manager::quarrel(employee *e)
{
 salary+=1000;
 e->paycut(300);
 //salary= 300+e.salary; manager can't access the member of other derived object
 //e.salary=1000;  pointer can't access protected member
}