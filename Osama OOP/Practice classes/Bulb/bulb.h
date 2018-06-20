#include <iostream>
using namespace std;

class Bulb{
public:
Bulb()
{
  this->power=60.0;
  this->is_on=false;
  this->temperature=0.0;
}

Bulb(float power,bool is_on, float temperature)
{
  this->power= power;
  this->is_on= is_on;
  this->temperature= temperature; 
}

Bulb(Bulb& copybulb)
{
  cout<<"\nCopy constructor is called\n\n";
  this->power= copybulb.power;
  this->is_on= copybulb.is_on;
  this->temperature= copybulb.temperature;
}

Bulb operator+(Bulb& b)
{

}

Bulb operator=(Bulb& b)
{
  
}

float getpower()
{
  return this->power;
}

float getis_on()
{
  return this->is_on;
}

float gettemperature()
{
  return this->temperature;
}

void setpower(float power)
{
  this->power= power;
}

void setis_on(bool is_on)
{
  this->is_on= is_on;
}

void settemperature(float temperature)
{
  this->temperature= temperature;
}

void setbulb(float power, bool is_on, float temperature)
{
  this->power=power;
  this->is_on= is_on;
  this->temperature= temperature;
}

bool turnon()
{
  return this->is_on= true;
}

bool turnoff()
{
  return this->is_on= false;
}

void autooff()
{
  //Bulb result;
  if (this->temperature > 100)
  {
    setis_on(false);
  }
}

void show()
{
  cout<<"\nThe power of the bulb is: "<<power<<"\nThe temperature of the bulb is: "<<temperature<<"\nThe bulb is on is:  "<<is_on<<endl;
}

private:
float power;
float temperature;
bool is_on;

};