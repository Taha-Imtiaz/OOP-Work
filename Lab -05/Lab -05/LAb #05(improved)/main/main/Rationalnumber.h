#include<iostream>
using namespace std;
class Rationalnumber
{
public:
	Rationalnumber()
	{
	this->numerator=6;
	this->denominator=5;


	}
	Rationalnumber(int num,int dem)
	{
	this->numerator=num;
	this->denominator=dem;
	}
	int getnumerator()
	{
	return this->numerator;
	}
	int getdenominator()
	{
	return this->denominator;
	}
	void setnumerator(int x)
	{
	this->numerator=x;
	}
	void setdenominator(int y)
	{
	this->numerator=y;
	}
	Rationalnumber operator+(Rationalnumber z)
	{
	Rationalnumber temp;
	temp.numerator=this->numerator*z.denominator+z.numerator*this->denominator;
	temp.denominator=this->denominator*z.denominator;
	return temp;
	}
	Rationalnumber operator-(Rationalnumber z)
	{
	Rationalnumber temp;
	temp.numerator=this->numerator*z.denominator-z.numerator*this->denominator;
	temp.denominator=this->denominator*z.denominator;
	return temp;
	}
	Rationalnumber operator*(Rationalnumber z)
	{
	Rationalnumber temp;
	temp.numerator=this->numerator*z.numerator;
	temp.denominator=this->denominator*z.denominator;
	return temp;
	}
	Rationalnumber operator/(Rationalnumber z)
		{
		Rationalnumber temp;
		temp.numerator=this->numerator*z.denominator;
		temp.denominator=this->denominator*z.numerator;

		return temp;
		}
	void display()
		{
	cout<<"Numerator : " <<this->numerator<<endl;
	cout<<"Denominator: "<<this->denominator<<endl<<endl;

		}

private:
	int numerator;
	int denominator;
};