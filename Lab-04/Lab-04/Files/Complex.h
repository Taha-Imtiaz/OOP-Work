#include<iostream>

using namespace std;
class Complexnumber
{

public:
	Complexnumber(float real,float imaginary)
	{
	this->Realpart= real;
	this->ImaginaryPart=imaginary;
	}
	Complexnumber(Complexnumber &Z1)
	{
	this->Realpart=Z1.Realpart;
	this->ImaginaryPart=Z1.ImaginaryPart;
	}
	Complexnumber()
	{
	this->Realpart= 2;
	this->ImaginaryPart=5;
	}
	float getRealpart()
	{
	return this->Realpart;
	}
	float getImaginaryPart()
	{
	return this->ImaginaryPart;
	}
	void setRealpart(float real)
	{
		cout<<"Enter the value that you want to modify"<<endl;
		cin>>real;
		this->Realpart=real;
	}
	void setImagpart(float img)
	{
		cout<<"Enter the value that you want to modify"<<endl;
		cin>>img;
		this->ImaginaryPart=img;
	}
	Complexnumber operator +(Complexnumber Z2)
	{
	Complexnumber Z3;
	Z3.Realpart=this->Realpart+ Z2.Realpart;
	Z3.ImaginaryPart=this->ImaginaryPart+Z2.ImaginaryPart;
	return Z3;
	}
	void display() 
	{
	cout<<"The real Part is ";
	cout<< Realpart<<endl;
	cout<<"The imaginary  Part is ";
	cout<< ImaginaryPart<<endl;
	}


private:	
	int Realpart;
	int ImaginaryPart;
};
