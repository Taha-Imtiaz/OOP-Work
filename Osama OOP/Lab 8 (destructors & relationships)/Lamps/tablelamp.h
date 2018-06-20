#include <iostream>
using namespace std;

class tablelamp
{
  public:
    
tablelamp()
{
  this->on_off= off;
}

void press_switch()
{
  this->on_off= (this->on_off==off)? on:off; 
}

friend ostream& operator<<(ostream& o, const tablelamp& t)
{
   return ((t.on_off==0)?o<<"It is on":o<<"It is off");
}
 

 protected:
  enum state {on,off} on_off;
};
