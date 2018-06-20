#include <iostream>
#include "manager.cpp"
#include "employee.cpp"
#include "secretary.cpp"
using namespace std;

int main()
{
  manager m (5,"ht");
  cout<<m<<endl;

  employee *emp = new secretary(5000,"Ali");
  cout<<*emp<<endl;
  m.quarrel(emp);
  cout<<m<<endl;
  cout<<*emp<<endl;
  system("pause");
  
}