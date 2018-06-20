#include <iostream>
using namespace std;
#include "test.h"
object external_object;

int main()
{
external_object.addValue(5);
for(int i=0;i<2;i++)
{
  object auto_object;
  auto_object.addValue(10);

  static object static_object;
  static_object.addValue(15);

  cout<<"The automatic object has the value: "<<auto_object.get_value()<<endl;

  cout<<"The static object has the value: "<<static_object.get_value()<<endl;
}

cout<<"The external object has the value: "<<external_object.get_value()<<endl;

system("pause");

}