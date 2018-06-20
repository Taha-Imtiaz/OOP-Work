#include<iostream>
#include "Rationalnumber.h"
using namespace std;


Rationalnumber::Rationalnumber()
{
	this->numerator=6;
	this->denominator=5;


}
Rationalnumber::Rationalnumber(int x,int y)
{
	this->numerator=x;
	this->denominator=y;
}
int Rationalnumber:: getnumerator()
{
	return this->numerator;
}
int Rationalnumber:: getdenominator()
{
	return this->denominator;
}
void Rationalnumber:: setnumerator(int x)
{
	this->numerator=x;
}
void Rationalnumber::setdenominator(int y)
{
	this->numerator=y;
}
Rationalnumber Rationalnumber:: operator +(Rationalnumber z)
{
Rationalnumber temp;
temp.numerator=this->numerator*z.denominator+z.numerator*this->denominator;
temp.denominator=this->denominator*z.denominator;
return temp;
}
Rationalnumber Rationalnumber:: operator -(Rationalnumber z)
{
Rationalnumber temp;
temp.numerator=this->numerator*z.denominator-z.numerator*this->denominator;
temp.denominator=this->denominator*z.denominator;
return temp;
}
Rationalnumber Rationalnumber:: operator *(Rationalnumber z)
{
Rationalnumber temp;
temp.numerator=this->numerator*z.numerator;
temp.denominator=this->denominator*z.denominator;
return temp;
}
Rationalnumber Rationalnumber:: operator /(Rationalnumber z)
{
Rationalnumber temp;
temp.numerator=this->numerator*z.denominator;
temp.denominator=this->denominator*z.numerator;

return temp;
}
void Rationalnumber:: display()
{
	cout<<"Numerator = " <<this->numerator<<endl;
	cout<<"Denominator ="<<this->denominator<<endl;

}