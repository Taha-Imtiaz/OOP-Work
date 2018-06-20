#include <iostream>
#include "desk.h"
#include "office.h"
using namespace std;

class emp{
public:
desk mydesk;
office *myoffice;
emp(office* o)
{
 myoffice=o;
 cout<<"emp::emp()\n";
}
 virtual ~emp()
{
  cout<<"emp::~emp()\n";
}


};
