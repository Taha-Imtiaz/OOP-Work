#include<iostream>
using namespace std;
#include "TableLamp.h"
#include "AdjTableLamp.h"
int main()
{
AdjTableLamp urLamp;
urLamp.Print(cout);
urLamp.PressSwith();
cout<<urLamp;
urLamp.dim();
urLamp.Print(cout);
system("pause");
}