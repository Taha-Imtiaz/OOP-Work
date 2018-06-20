#include"stdafx.h"
#include <iostream>
using namespace std;
#include "point.h"
int main()
{
	point p1(5.0, 6.0);
	point p2(2.0,3.0);
	point p3;
	p3 = p1.add(p1, p2);
	cout << "ADDING=" << endl;
	p3.display();
	point p4;
	p4 = p1 + p2;
	cout << "ADD OPERATOR=" << endl;
	p4.display();
	point p5;
	p5 = p1 + 10.0;
	cout << "Addition with different types=" << endl;
	p5.display();
	point *c;
	c = new point(3.0, 4.0);
	point d;
	d = p1 + p2 + *c;
	cout << "ADDITION OF 2 numbers and a *c" << endl;
	d.display();
	cout << "CHALGYA" << p1 << endl;
	point a;
	a = (point)2.0;
	cout << "TYPE CASTING" << endl;
	a.display();
	system("pause>nul");



}

