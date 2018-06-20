#include <iostream>
using namespace std;
#include "tablelamp.h"

class adjtablelamp:public tablelamp
{
public:
adjtablelamp():tablelamp()
{
  this->brigtness=0.5;
}
void dim(){
if(this->brigtness>0.1)
{
  this->brigtness-=0.1;
}
else
{
  cout<<"\nThe brightness is the lowest\n";
}


}
void print(ostream&o){
  o<<*this;
  if(this->on_off==on)
  {
  cout<<" with the brightness "<<this->brigtness<<endl;
  }
  else{

    cout<<endl;
  }


}

private:
float brigtness;

};