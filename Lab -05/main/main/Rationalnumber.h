#include<iostream>
using namespace std;
class Rationalnumber
{
public:
	Rationalnumber();
	Rationalnumber(int num,int dem);
	int getnumerator();
	int getdenominator();
	void setnumerator(int x);
	void setdenominator(int y);
	Rationalnumber operator+(Rationalnumber z);
	Rationalnumber operator-(Rationalnumber z);
	Rationalnumber operator*(Rationalnumber z);
	Rationalnumber operator/(Rationalnumber z);
	void display();

private:
	int numerator;
	int denominator;
};