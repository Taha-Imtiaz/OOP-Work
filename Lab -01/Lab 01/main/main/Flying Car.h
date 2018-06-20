#include<iostream>
using namespace std;
#include<string>
class FlyingCar
{
public:
	string getcolor()
	{
		return this->color;
	}
	float getprice()
	{
		return this->price;
	}
	float getspeed()
	{
		return this->speed;
	}
	void setcolor(string color)
	{
	
		this->color="color";
	}
	void setspeed(float speed)
	{
		this->speed=speed;
	}
	void setprice(float price)
	{
		this->price=price;
	}
	void display()
	{
	cout<<"The color of my flying Car is blue"<<endl;
	cout<<"Flying Car Price is 70000000"<<endl;
	cout<<"Flying Car travels with the speed of light"<<endl;
	}
private:
	 
	string color;
	float price;
	float speed;
};