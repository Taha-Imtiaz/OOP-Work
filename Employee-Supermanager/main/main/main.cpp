#include<iostream>
using namespace std;
#include <string>
#include "Employee.h"
#include "Manager.h"
#include "SuperManager.h"

int main()
{
Manager HT(5,"HT");
Employee TW(12000,"TW");
cout<<HT;
cout<<TW;
TW.Paycut(300);
cout<<TW;
cout<<HT;
HT.Paycut(300);
cout<<HT<<endl;
 Manager *ht= new Manager(5,"Ht");
  Employee *tw= new Employee(12000,"Tw");
  Employee *vc= new SuperManager("Vice chancellor");
  cout<<*vc<<endl;
  vc->Paycut(300);
  cout<<*vc<<endl;
  vc->Payrise();
  cout<<*vc<<endl;
  vc->Employee::Paycut(300);
  cout<<*vc<<endl;
system("pause");
}