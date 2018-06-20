#include <iostream>
#include "secretary.h"
using namespace std;

secretary::secretary(float s, string n):employee(n,s)
{
  
}

void secretary::paycut(float amt)
{
  cout<<name<<" is angry\n";
  cout<<*this<<" is angry\n";
  salary-=amt;
}