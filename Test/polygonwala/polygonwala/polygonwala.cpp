// polygonwala.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>

#include <iostream>
#include <string>
#include"polygon.h"
using namespace std;
int main()
{
Polygon poly;

Point p1(2,3);
Point p2(3,9);
Point p3(5,5);
Point p4(7,6);
Point p5(7,1);
Point p6(2,5);

poly.add_vertex(p1);
poly.add_vertex(p2);
poly.add_vertex(p3);
poly.add_vertex(p4);
poly.add_vertex(p5);
poly.add_vertex(p6);

poly.show();

system("pause>nul");


}