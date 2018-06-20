#include <iostream>
#include "door.h"
using namespace std;

int main()
{
  door d(4455);
  d.typecode(4455);
  d.pushhandle();

  d.typecode(4455);
  d.typecode(6677);
  d.pushhandle();
  d.a_switch();
  system("pause");


}