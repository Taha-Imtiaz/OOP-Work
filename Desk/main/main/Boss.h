#include <iostream>
#include "Employee.h"
#include "pc.h"
using namespace std;

class boss:public emp
{
public:
pc mypc;

boss(office *o):emp(o)
{
  mypc.turn_on();
  cout<<"boss::boss()\n";
}

virtual ~boss()
{
  
  cout<<"boss::~boss()\n";
  mypc.turn_off();
}




};