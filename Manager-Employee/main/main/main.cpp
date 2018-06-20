#include<iostream>
using namespace std;
#include <string>
#include "Employee.h"
#include "Manager.h"
#include "Sceretary.h"

int main()
{

Manager m(5,"ht");
cout<<m;
Employee *e =new Sceretary(5000,"Usman");
cout<<*e<<endl;
m.quarrel(e);
cout<<m;
cout<<*e;
system("pause");



}