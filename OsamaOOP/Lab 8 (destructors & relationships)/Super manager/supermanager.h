#include <iostream>
#include <string>
#include "manager.h"
using namespace std;

class supermanager:public manager{
public:
supermanager(string n):manager(10,n)
{


}

void paycut(float cut)
{
  this->salary= this->salary*2;
}



private:
};
