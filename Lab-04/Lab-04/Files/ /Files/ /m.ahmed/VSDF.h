#include<iostream>
using namespace std;
class iota
{
public:
	iota(float real,float image)
	{
		this->realp = real;
		this->imagep = image;
	}
	iota (iota &z1)
	{
		this->realp = z1.realp;
		this->imagep = z1.imagep;
	}
	iota ()
	{
		this->realp = 2;
		this->imagep =5;
	}
	float getrealp()
	{
		return this->realp; 
	}
	float getimagep()
	{
		return this->imagep; 
	}
	void setRealp(float real)
	{
		cout<<"Kindly enter that you would want to alter"<<endl;
		cin>>real;
		this->realp=real;
	}
	void setImagep(float img)
	{
		cout<<"Kindly enter that you would want to alter"<<endl;
		cin>>img
		this->imagep=img;
	}

	iota operator+(iota z2)
	{
		iota z3;
		z3.real=this->real+z2.real
	}
	void display()
	{
		cout<<"Presenting you the real part";
		cout<<"Real part";
		cout<<"Presenting you the imaginary part";
		cout<<"Imaginary part";
	}
private:
	realp;
	imagep;
};