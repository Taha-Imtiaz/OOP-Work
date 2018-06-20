#include <iostream>
#include <string>
#include "adjtablelamp.h"
using namespace std;


int main()
{
 adjtablelamp your_lamp;
 cout<<your_lamp<<endl;
 your_lamp.print(cout);
 your_lamp.press_switch();
 your_lamp.dim();
 your_lamp.print(cout);
 system("pause");
}