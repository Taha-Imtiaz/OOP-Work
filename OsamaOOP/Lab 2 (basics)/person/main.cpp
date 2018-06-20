
# include <iostream>
# include <string>
#include "person.h"
using namespace std;

int main()
{
  int year;
 Person Me;
 Me.show();
 cout<<"\n\nEnter current year:";
 cin>>year;
 Me.Age (year);
 Me.Heightinmeters();
 system("pause");


}