#include <iostream>
using namespace std;

class object{
public:
object()
{
  this->value=0;
}

void addValue(int value_in)
{
  value += value_in;
}

int get_value()
{
  return this->value;
}


private:
int value;
};