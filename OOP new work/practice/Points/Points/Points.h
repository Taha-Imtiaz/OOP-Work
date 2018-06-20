#include<iostream>
using namespace std;
class Points {

private:
	double x;
	double y;

public:
	Points()
	{}
	Points(double x, double y)
	{
		this->x = x;
		this->y = y;

	}

	// jisko clone kia jata hai woh parameter main aata hai copy constructor wale k.....

  	Points (Points& p1)
	{
		cout << "out" << endl;
		this->x = p1.x;
		this->y = p1.y;
	}

	void setter(double x, double y)
	{
	this->x=x;
	this->y=y;
	}

	 Points operator=( Points a)
	{
		cout << "Show" << endl;
	    Points result;
		double x = a.x;
		double y = a.y;
		result.setter(x,y);
		cout<<"check kr  "<<result.x<<endl;
		return result;
	
	}

	 friend void operator <<(ostream &test,Points z1)
	 {
	   test<<"z: "<<z1.x<<endl<<"y: "<<z1.y<<endl;
	 }
	
	Points operator+(Points &a)
	{
		Points result; 
		double x = a.x + this->x;
	    double y = a.y + this->y;
		result.setadd(x, y);
		return result;
		
	}

	Points operator+(double clone)
	{
		Points result;
		double x = this->x + clone;
		double y = this->y + clone;
		result.setadd(x, y);
		return result;
		
	}
	friend Points operator+(double a,Points b)
	{
		Points result;
		double x = a + b.x;
		double y = a + b.y;
		result.setadd(x, y);
		return result;


	}

	

	void setadd(double x, double y)
	{
		this -> x = x;
		this->y = y;
	}

	void operator>(Points clone)
	{
		if (this->x > clone.x && this->y > clone.y)
			cout << "p2>p1" << endl;
		else
			cout << "p1<=p2" << endl;
	}



	void display()
	{
	    cout << "x:" << x << endl;
        cout << "y:" << y << endl<<endl;

	}



 };