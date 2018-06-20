#include <iostream>
#include "employee.h"
using namespace std;

employee::employee()
{

}

employee::employee(string n, float s)
{
     this->name=n;
     this->salary=s;
}

void employee::paycut(float amt)
{
   salary-=amt;
}