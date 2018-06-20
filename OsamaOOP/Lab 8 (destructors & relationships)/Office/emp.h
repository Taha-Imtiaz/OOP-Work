#include <iostream>
#include "desk.h"
#include "office.h"
using namespace std;

class emp{
public:
desk mydesk;
office *o;
emp(office* o)
{
 o=0;
 cout<<"emp::emp()\n";
}
virtual ~emp()
{
  cout<<"emp::~emp()\n";
}


};
