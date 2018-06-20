#include<iostream>
#include "vector.h"
using namespace std;


Vector::Vector()
{
	this->dx=6;
	this->dy=5;
	this->dz=2;


}
Vector::Vector(int dx,int dy,int dz)
{
	this->dx=dx;
	this->dy =dy;
	this->dz=dz;
}
int Vector:: getdx()
{
	return this->dx;
}
int Vector:: getdy()
{
	return this->dy;
}
int Vector:: getdz()
{
	return this->dz;
}
void Vector:: setdx(int dx)
{
	this->dx=dx;
}
void Vector::setdy(int dy)
{
	this->dy=dy;
}
void Vector::setdz(int dz)
{
	this->dy=dz;
}

Vector Vector:: operator +(Vector B)
{
Vector temp;
temp.dx=this->dx+B.dx;
temp.dy=this->dy+B.dy;
temp.dz=this->dz+B.dz;
return temp;
}
Vector Vector:: operator -(Vector B)
{
Vector temp;
temp.dx=this->dx-B.dx;
temp.dy=this->dy-B.dy;
temp.dz=this->dz-B.dz;
return temp;
}
Vector Vector:: operator *(Vector B)
{
Vector temp;
temp.dx=this->dx*B.dx;
temp.dy=this->dy*B.dy;
temp.dz=this->dz*B.dz;
return temp;
}

void Vector:: display()
{
	cout<<"xcomponent = " <<this->dx <<endl;
	cout<<"ycomponent ="<<this->dy<<endl;
	cout<<"zcomponent ="<<this->dz<<endl;

}