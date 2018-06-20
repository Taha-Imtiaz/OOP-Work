#include <iostream>
using namespace std;
class point
{
public:
	point()
	{
	this->x=1;
	this->y=1;
	}
	point(float x, float y)
	{
	this->x=x;
	this->y=y;

	}
	point(point& P1)
	{
	this->x=P1.x;
	this->y=P1.y;
	}
	float getx()
	{
	return this->x;
	}
	void setx(float X)
	{
	this->x=X;
	}
	float gety()
	{
	return this->y;
	}
	void sety(float Y)
	{
	this->y=Y;
	}

	point add(point z1, point z2)
	{
	point result;
	float x=z1.x+z2.x;
	float y=z1.y+z2.y;
	result.set(x,y);
	return result;
	}
	point operator+(point z2)
	{
	point result;
	float x=this->x+z2.x;
	float y=this->y+z2.y;
	result.set(x,y);
	return result;
	}
	point operator+(double B)
	{
	point PP;
	float x=this->x+B;
	float y=this->y+B;
	PP.set(x,y);
	return PP;
	}
	friend point operator+(double a, point b)
	{
	point result;
	double x = a + b.x;
	double y = a +b.y;
	result.set(x, y);
	return result;

	}
	point operator=( point z2)
	{
		point result;
	this->x=z2.x;
	this->y=z2.y;

	return result;
	}
	bool operator>(point& z2)
	{
	bool x=this->x>z2.x;
	bool y=this->y>z2.y;
	if(x==y)
	{
	return x;
	}

     }
	friend ostream& operator << (ostream& out, point p)
	{

	return out <<" X:"<<p.getx()<<" Y:"<<p.gety()<<endl;
	}
	point(float a)
	{
	this->x=a;
	this->y=a;
	}
	void set(float x, float y)
	{
	this->x=x;
	this->y=y;
	}
	void display()
	{
	cout<<"X:"<<x<<endl;
	cout<<"Y:"<<y<<endl;
	}
private:
	float x;
	float y;

}; 
