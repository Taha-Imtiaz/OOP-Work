#include <iostream>
#include <string.h>
using namespace std;

class Point{
 
 private:
	 int x;
	 int y;

public:
    Point()
    {
        this->x= 0;
        this->y= 0;
	}

	Point(int x, int y)
	{

	this->x=x;
	this->y=y;

	}

	void set_x(int x)
	{
	this->x=x;
	}

	void set_y(int y)
	{
	this->y=y;
	}

	int get_x()
	{
	return this->x;
	}

	int get_y()
	{
	return this->y;
	}

	friend ostream& operator << (ostream& s , Point &p)
	{
		return s<< "Vertices are:\n x:"<<p.get_x()<<"\n y:"<<p.get_y()<<endl;
	}




};