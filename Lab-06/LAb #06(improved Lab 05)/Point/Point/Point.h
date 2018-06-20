#include<iostream>
using namespace std;
class Point
{
public:
	Point()
	{
		this->x = 0;
		this->y =0;
	}
	Point(float x1, float y1)
	{

	this->x = x1;
	this->y = y1;
	}
	Point(float x1)
	{
		this->x = x1;
		this->y = x1;

	}
	Point(Point &clone){

		this->x = clone.x;
		this->y = clone.y;
	}

	void display()
	{
		cout << "x =" << x << endl << "y =" << y << endl;
	}
	Point operator+(Point b)
	{
		Point temp;
		temp. x = this->x + b.x;
		temp .y = this->y + b.y;
		
		return temp;

	}
	
	Point operator+(float b)
	{
		Point temp;
		temp.x = this->x + b;
		temp.y = this->y + b;
	
		return temp;
	}
	friend Point operator+(float a,Point b)
	{
		Point temp;
		temp.x = a + b.x;
		temp.y = a + b.y;

		return temp;
	}	
	
	int getx()
	{

		return this->x;

	}
	int gety()
	{

		return this->y;

	}
	
	void setx(float x){
		this->x = x;
		
	}
	void sety(float y)
	{
		this->y = y;
	}
	Point operator=(Point b)
	{
		Point result;
		this->x = b.x;
		this->y = b.y;
		
		return result;
	}
	

	int operator>(Point a)
	{
		if (this->x > a.x&&this->y > a.y)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bool operator()()
	{
		if (this->x == x&&this->y ==y)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	friend ostream& operator<<(ostream&,Point);
	
private:
	float x, y;
};
ostream& operator<<(ostream &dout,Point C)
{
	dout << "The x co-ordinate is " << C.x << endl << "The y co-ordinate is " << C.y << endl;
	return(dout);
}