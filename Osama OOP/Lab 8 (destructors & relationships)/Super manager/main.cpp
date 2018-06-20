#include <iostream>
#include <string>
#include "supermanager.h"
using namespace std;

int main()
{
  /*manager ht(5,"HT");
  employee TW("Tw",12000);
  cout<<TW<<endl;
  TW.paycut(300);
  cout<<TW<<endl;
  cout<<ht<<endl;
  ht.paycut(300);
  cout<<ht<<endl;
  ht.employee::paycut(300);  This line will invoke the base class function on a derived class
  cout<<ht<<endl;*/
  manager *ht= new manager(5,"Ht");
  employee *tw= new employee("Tw",12000);
  employee *vc= new supermanager("Vice chancellor");
  cout<<*vc<<endl;
  vc->paycut(300);
  cout<<*vc<<endl;
  vc->payrise();
  cout<<*vc<<endl;
  vc->employee::paycut(300);
  cout<<*vc<<endl;




  system("pause");

}