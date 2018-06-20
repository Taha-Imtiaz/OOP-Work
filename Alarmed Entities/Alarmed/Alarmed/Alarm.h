#include<iostream>
using namespace std;
#include <string>
class Alarm
{
public:
	Alarm()
	{
	this->active=true;
	}
	Alarm(bool active)
	{
	this->active=active;
	}
	void callpolice()
{
  cout<<((this->active==true)?"Police called\n":"Police not called");
}

bool is_active()
{
  return((this->active==true)?1:0);

}

void a_switch()
{
  this->active= (this->active==false)? true:false;
}




private:
		bool active;
};