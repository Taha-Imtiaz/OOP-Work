#include "Point.h"
#include "Complex.h"
#include <iostream>
int main()
{
	Point a;
	Point b;
	Point *c;
	Point d;
	 a= (Point)2.0;
	 b= Point (3.0,4.0);
	

	c = new Point(5.0, 6.0);
	d = Point(6.0, 8.0);
	// Use ofOverloaded Operators
	//a = b;
	//a = b = *c;
	//Use ofOverloaded + operator
	d = a + b;
	
	cout << d << endl;
	d = a + b + *c;
	
	cout << d << endl;
	if (b > a)
	{
		cout << "b>a" << endl;
	}
	else
	{
		cout << "b <= a" << endl;
	}
	d = a + 10.0;
	cout << d << endl;
	d = 10.0 + a;
	cout << d << endl;
	Point p(2, 3);
	Complexnumber d1;
	d1 = (Complexnumber)p;
	d1.display();
	
	if (a() == true)
	{
		cout << "a is a Point number" << endl;
	}
	
	else
	{
		cout << "a is Real number" << endl;
	}
	
	
	
	system("pause");
}