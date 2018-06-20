#include <iostream>
#include <string>
#include "header.h"
#include "Complex.h"
using namespace std;

int main()
{
	Point a;
	Point b;
	Point *c;
	Point d;
	a = (Point)2.0;
	b = (3.0, 4.0);
	c = new Point(5.0, 6.0);
	(*c).show();
	cout << *c;
	d = a + b;
	d.show();
	d = a + b + *c;
	d.show();
	if (b >a)
	{
		cout << "\nb>a\n";
	}
	else
	{
		cout << "\nb<=a\n";
	}

	d = a + 10.0;
	cout << d;
	d = 10.0 + a;
	cout << d;
	Point p;
	ComplexNumber Number;
	Number = (ComplexNumber)p;
	Number.show();
	if (a() == true)
	{
		cout << "\n a is a point" << endl;
	}
	else
	{
		cout << "\n a is a real number" << endl;
	}

	//a[1] = 8.0;
	//a.show();
	system("pause");

}