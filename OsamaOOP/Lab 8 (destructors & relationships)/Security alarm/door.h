#include <iostream>
#include "alarm.h"
using namespace std;

class door:public alarm
{
  public:
  door(int c):alarm(),code(c)
  {

  }

  void typecode(int code)
  {
    if(this->code==code)
    {
      a_switch();
    }
    else
    {
      cout<<"\nNice try\n";
    }
  }

  void pushhandle()
  {
    if(is_active())
    {
      callpolice();
    }
    else
    {
      open();
    }
  }

  void open()
  {
    cout<<"crr "<<"door opened"<<endl;
  }

  private:
  int code;
};