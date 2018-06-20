#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Vector{
public:
Vector()
{
  this->dx=7.0;
  this->dy=6.0;
  this->dz=5.0;
}

Vector(float dx, float dy, float dz)
{
  this->dx=dx;
  this->dy=dy;
  this->dz=dz;
}

Vector(Vector& Vectorcopy)
{
  this->dx=Vectorcopy.dx;
  this->dy=Vectorcopy.dy;
  this->dz=Vectorcopy.dz;
}

float getdx()
{
  return this->dx;
}

float getdy()
{
  return this->dy;
}

float getdz()
{
  return this->dz;
}

void setdx(float dx)
{
  cout<<"\nEnter the new value of dx: ";
  cin>>dx;
  this->dx=dx;
}

void setdy(float dy)
{
  cout<<"\nEnter the new value of dy: ";
  cin>>dy;
  this->dy=dy;
}

void setdz(float dz)
{
  cout<<"\nEnter the new value of dz: ";
  cin>>dz;
  this->dz=dz;
}

void setvector(float dx, float dy,float dz)
{
  
  this->dx=dx;
  
  this->dy=dy;
  
  this->dz;
}



float operator * (Vector b)
{
  return this->dx*b.dx+this->dy*b.dy+this->dz*b.dz;
}

Vector Vectormultiplication(Vector c)
{
 Vector result;
 result.dx=(this->dy*c.dz)-(this->dz*c.dy);
 result.dy=(-1)*((this->dx*c.dz)-(this->dz*c.dx));
 result.dz=(this->dx*c.dy)-(this->dy*c.dx);
 return result;

}

float Magnitude()
{
     return sqrt(pow (this->dx,2)+ pow(this->dy,2)+ pow(this->dz,2));
}

Vector Unitvector(Vector C)
{
  Vector unit;
  unit.dx= this->dx/C.Magnitude();
  unit.dy= this->dy/C.Magnitude();
  unit.dz= this->dz/C.Magnitude();
  return unit;
}

Vector operator +(Vector b)
{
  Vector resultant;
  resultant.dx=this->dx+b.dx;
  resultant.dy=this->dy+b.dy;
  resultant.dz=this->dz+b.dz;
  return resultant; 
}

Vector operator -(Vector b)
{
  Vector resultant;
  resultant.dx=this->dx-b.dx;
  resultant.dy=this->dy-b.dy;
  resultant.dz=this->dz-b.dz;
  return resultant; 
  
}

void show()
{
  cout<<"\nThe vector is: ";
  cout<<dx<<"i "<<dy<<"j "<<dz<<"k\n"<<endl;
}



private:
float dx;
float dy;
float dz;
};