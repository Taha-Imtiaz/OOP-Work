#include <iostream>
using namespace std;

class Complexnumber
{

public:
	//Constructors
	//Parametrized Constructor
	Complexnumber(float real, float imaginary)
	{
		this->Realpart = real;
		this->ImaginaryPart = imaginary;
	}
	Complexnumber(Point  p1)
	{
		this->Realpart =p1.getx();
		this->ImaginaryPart = p1.gety();
	}
	//Copy Constructor
	Complexnumber(Complexnumber &Z1)
	{
		this->Realpart = Z1.Realpart;
		this->ImaginaryPart = Z1.ImaginaryPart;
	}
	//Null Constructor
	Complexnumber()
	{
		this->Realpart = 2;
		this->ImaginaryPart = 5;
	}
	//getters
	float getRealpart()
	{
		return this->Realpart;
	}
	float getImaginaryPart()
	{
		return this->ImaginaryPart;
	}
	//setters
	void setRealpart(float real)
	{
		cout << "Enter the value that you want to modify" << endl;
		cin >> real;
		this->Realpart = real;
	}
	void setImagpart(float img)
	{
		cout << "Enter the value that you want to modify" << endl;
		cin >> img;
		this->ImaginaryPart = img;
	}
	//different versions of add functions
	//Parametrized addition
	Complexnumber add(Complexnumber Z1, Complexnumber Z2)
	{
		Complexnumber Z3;
		Z3.Realpart = Z1.Realpart + Z2.Realpart;
		Z3.ImaginaryPart = Z1.ImaginaryPart + Z2.ImaginaryPart;
		return Z3;
	}

	//Single Argument Addition
	Complexnumber add(Complexnumber Z2)
	{
		Complexnumber Z3;
		Z3.Realpart = this->Realpart + Z2.Realpart;
		Z3.ImaginaryPart = this->ImaginaryPart + Z2.ImaginaryPart;
		return Z3;
	}
	//Operator overloading
	Complexnumber operator +(Complexnumber Z2)
	{
		Complexnumber Z3;
		Z3.Realpart = this->Realpart + Z2.Realpart;
		Z3.ImaginaryPart = this->ImaginaryPart + Z2.ImaginaryPart;
		return Z3;
	}
	Complexnumber operator -(Complexnumber Z2)
	{
		Complexnumber Z3;
		Z3.Realpart = this->Realpart - Z2.Realpart;
		Z3.ImaginaryPart = this->ImaginaryPart - Z2.ImaginaryPart;
		return Z3;
	}
	Complexnumber operator *(Complexnumber Z2)
	{
		Complexnumber Z3;
		Z3.Realpart = this->Realpart* Z2.Realpart - this->ImaginaryPart*Z2.ImaginaryPart;
		Z3.ImaginaryPart = this->Realpart*Z2.ImaginaryPart + Z2.Realpart*this->ImaginaryPart;
		return Z3;
	}
	Complexnumber operator /(Complexnumber Z2)
	{
		Complexnumber Z3;
		Z3.Realpart = ((this->Realpart* Z2.Realpart) + (this->ImaginaryPart*Z2.ImaginaryPart)) / ((Z2.Realpart*Z2.Realpart) + (Z2.ImaginaryPart*Z2.ImaginaryPart));
		Z3.ImaginaryPart = ((this->ImaginaryPart*Z2.Realpart) - (this->Realpart*Z2.ImaginaryPart)) / ((Z2.Realpart*Z2.Realpart) + (Z2.ImaginaryPart*Z2.ImaginaryPart));
		return Z3;
	}

	void display()
	{

		cout << "Result:" << endl << this->Realpart;
		cout << "+" << this->ImaginaryPart << "i" << endl;
	}


private:
	float Realpart;
	float ImaginaryPart;
};
