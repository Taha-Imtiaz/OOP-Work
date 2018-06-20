#include<iostream>
using namespace std;
class Vector
{
public:
	Vector()
		{
	this->dx=6;
	this->dy=5;
	this->dz=2;


}

	Vector(int dx,int dy, int dz)
{
	this->dx=dx;
	this->dy =dy;
	this->dz=dz;
}
	int getdx()
	{
	return this->dx;
	}
	int getdy()
	{
	return this->dy;
	}
	int getdz()
	
{
	return this->dz;
}
	void setdx(int dx)
	{
	this->dx=dx;
	}
	void setdy(int dy)
	{
	this->dy=dy;
	}
	void setdz(int dz)
	{
	this->dy=dz;
	}
	Vector operator+(Vector B)
	{
	Vector temp;
	temp.dx=this->dx+B.dx;
	temp.dy=this->dy+B.dy;
	temp.dz=this->dz+B.dz;
	return temp;
	}
	Vector operator-(Vector B)
	{
	Vector temp;
	temp.dx=this->dx-B.dx;
	temp.dy=this->dy-B.dy;
	temp.dz=this->dz-B.dz;
	return temp;
	}
	Vector operator*(Vector B)
	{
	Vector temp;
	temp.dx=this->dx*B.dx;
	temp.dy=this->dy*B.dy;
	temp.dz=this->dz*B.dz;
	return temp;
	}

	void display()
	{
	cout<<"xcomponent = " <<this->dx <<endl;
	cout<<"ycomponent ="<<this->dy<<endl;
	cout<<"zcomponent ="<<this->dz<<endl<<endl;
	}

private:
	int dx;
	int dy;
	int dz;
};