#include <iostream>
#include <string>
#include "boss.h"
using namespace std;

int main()
{
  office *off= new office();
  boss *pboss= new boss(off);
  delete pboss;

  cout<<endl<<endl;

  emp *pemp= new boss(off);
  delete pemp;
  system("pause");


}