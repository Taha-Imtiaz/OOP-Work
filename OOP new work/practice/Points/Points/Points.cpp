#include"stdafx.h"
/*#include<iostream>
using namespace std;
#include"Points.h"

Points::Points()
	{
	this->x = 0;
	this->y = 0;
}
//Points ::	Points(double x, double y)
	//{
	//	this->x = x;
	//	this->y = y;

	//}

	// jisko clone kia jata hai woh parameter main aata hai copy contructor wale k.....

	Points :: Points(Points& p1)
	{
		this->x = p1.x;
		this->y = p1.y;
	}




  Points Points ::  operator=(Points a)
	{
		Points result;
		this->x = a.x;
		this->y = a.y;
		return result;
	}


	Points Points ::  *operator+(Points a)
	{
		Points result;
		double x = a.x + this->x;
		double y = a.y + this->y;
		result.setadd(x, y);
		return result;

	}

	Points Points :: *operator+(double clone)
	{
		Points result;
		double x = this->x + clone;
		double y = this->y + clone;
		result.setadd(x, y);
		return result;

	}
	Points Points  :: *operator+(double a, Points b)
	{
		Points result;
		double x = a + b.x;
		double y = a + b.y;
		result.setadd(x, y);
		return result;

	}



	Points :: void setadd(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	Points :: void operator>(Points clone)
	{
		if (this->x > clone.x && this->y > clone.y)
			cout << "p2>p1" << endl;
		else
			cout << "p1<=p2" << endl;
	}



	Points :: void display()
	{
		cout << "x:" << x << endl;
		cout << "y:" << y << endl << endl;

	}








}*/