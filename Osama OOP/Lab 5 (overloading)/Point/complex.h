#include <iostream>
#include <string>
#include "header.h"
using namespace std;


class ComplexNumber{

public:

//friend class Point;

	ComplexNumber(float realNo ,float img)
	{
		this->real = realNo;
		this->imaginary = img;
	}

	ComplexNumber()
	{
		this->real = 6;
		this->imaginary = 5;
    
	}

	ComplexNumber(ComplexNumber &z1)
	{
		this->real = z1.real;
		this->imaginary = z1.imaginary;
	}

	ComplexNumber(Point& p)
	{
		this->real=p.getx();
		this->imaginary=p.gety();
	}

	float getreal()
	{
		return this->real;
	}

	float getimaginary()
	{
		return this->imaginary;
	}


	void set(float real, float imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
	}

	void setreal(float real)
	{
		cout << "\nEnter the value that you want update:" << endl;
		cin >> real;
		this->real = real;
	
	}

	void setimaginary(float img)
	{
		cout << "\nEnter the value that you want to update:" << endl;
		cin >> img;
		this->imaginary = img;
	}



//Add function for one parameter with operator over-loading.
	 /* ComplexNumber operator +(ComplexNumber z2)                                          
	{
		ComplexNumber z3;
		//cout << "hello";
		//return z3.set(this->real + z2.real, this->imaginary + z2.imaginary);
		z3.real = this->real + z2.real;
		z3.imaginary = this->imaginary + z2.imaginary;
		return z3;
	}*/


//Add function for one parameter without operator over-loading.
	/*ComplexNumber add( ComplexNumber z2)
	{
		ComplexNumber z3;
		z3.real = this->real + z2.real;
		z3.imaginary = this->imaginary + z2.imaginary;
		return z3;
	}*/

	//Add function for two parameters without operator over-loading
	ComplexNumber add(ComplexNumber z1, ComplexNumber z2)
	{
		ComplexNumber z3;
    z3.real= z1.real+z2.real;
		z3.imaginary= z1.imaginary+z2.imaginary;
		return z3;
	} 

	//Add function for two parameters with operator over-loading.
	friend ComplexNumber operator +(ComplexNumber z2, ComplexNumber z1)
{
	ComplexNumber z3;
    z3.real= z1.real+z2.real;
		z3.imaginary= z1.imaginary+z2.imaginary;
		return z3;
		}


		//Add function with one parameter call by reference.
	  /*ComplexNumber add( ComplexNumber &z2)
	{
		ComplexNumber z3;
		z3.real = this->real + z2.real;
		z3.imaginary = this->imaginary + z2.imaginary;
		return z3;
	}*/

	 ComplexNumber add( ComplexNumber* z2)
	{
		ComplexNumber z3;
		z3.real = this->real + z2->real;
		z3.imaginary = this->imaginary + z2->imaginary;
		return z3;
	}

	ComplexNumber  operator -(ComplexNumber z2)
	{
		ComplexNumber z4;
		z4.real =this->real-z2.real;
		z4.imaginary=this->imaginary-z2.imaginary;
		return z4;

	}

	ComplexNumber Conjugate(ComplexNumber z)
	{
		z.imaginary=z.imaginary*(-1);
		set(z.real,z.imaginary);
	}
	
	void show()
	{
		
		cout << real;
		cout << "+i";
		cout << imaginary;
		cout <<"\n\n";
	}
  
 //Using friend function for insertion operator over-loading.
 friend ostream & operator << (ostream &out, const ComplexNumber& z4);
void convert (Point p);


private:
	float real;
	float imaginary;




};

ostream& operator<<(ostream &out, ComplexNumber& z5)

{
      
     out<< z5.getreal()<<"+i" <<z5.getimaginary()<<endl;
  
    return out;

 }
 