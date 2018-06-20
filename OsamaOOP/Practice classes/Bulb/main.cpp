#include <iostream>
#include "bulb.h"
using namespace std;

int main()
{
  Bulb saver;
  Bulb light(saver);
  Bulb tubelight;
  tubelight =saver;
  saver.setbulb(60,true,100);
  saver.show();
  saver.turnoff();
  saver.show();
  system("pause");
}