#include <iostream>
#include "Door.h"
using namespace std;

int main()
{
  Door d(4455);
  d.typecode(4455);
  d.pushhandle();

  d.typecode(4455);
   d.pushhandle();
  d.typecode(6677);
  d.pushhandle();
  d.a_switch();
  system("pause");


}

