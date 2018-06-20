#include <iostream>
#include <string>
using namespace std;

class Point

{

public:

	Point()
	{
		this->x = 0;
		this->y = 0;
	}

	Point(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	Point(Point& a)
	{
		this->x = a.x;
		this->y = a.y;
	}


	Point(float value)
	{
		this->x = value;
		this->y = value;
	}

	float getx()
	{
		return this->x;
	}


	float gety()
	{
		return this->y;
	}


	void setx(float x){
		this->x = x;
	}


	void sety(float y){
		this->y = y;
	}

	Point operator +(Point b)
	{
		Point result;
		result.x = this->x + b.x;
		result.y = this->y + b.y;
		return result;
	}

	void show()
	{
		cout << this->x << endl;
		cout << this->y << endl;
	}

	float operator >(Point b)
	{
		if (this->x > b.x && this->y > b.y)
			return 1;
		else
			return 0;
	}

	/*void operator=(Point b)
	{
	this->x = b.x;
	this->y = b.y;

	}*/
	friend Point operator+ (double caster, Point p)
	{
		Point result;
		result.x = caster + p.x;
		result.y = caster + p.y;
		return result;
	}

	Point  operator +(double caster)
	{
		Point result;
		result.x = this->x + caster;
		result.y = this->y + caster;
		return result;
	}


	bool operator ()()
	{
		if (this->x == x&&this->y == y)
			return true;
		else
			return false;
	}


	Point operator[](int a)
	{
		if (a == 1)
		{
			return this->x;
		}
		else
			return this->y;

	}

	friend ostream& operator <<(ostream& o, Point p)
	{
		o << "\nThe x co-ordinate is: " << p.x << "\nThe y co-ordinate is: " << p.y << endl;
		return o;
	}

private:
	float x;
	float y;

};
