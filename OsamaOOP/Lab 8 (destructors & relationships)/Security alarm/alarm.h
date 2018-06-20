#include <iostream>
using namespace std;

class alarm{
public:
alarm()
{
this->status= true;
}

alarm(bool status)
{
  this->status= status;
}

void callpolice()
{
  cout<<((this->status==true)?"Police called\n":"Police not called");
}

bool is_active()
{
  return((this->status==true)?1:0);
}

void a_switch()
{
  this->status= (this->status==false)? true:false;
}






protected:
bool status;



};