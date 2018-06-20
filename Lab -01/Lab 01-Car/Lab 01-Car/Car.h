#include<iostream>
using namespace std;
class Car
{
public:
	float getprice()
	{
		return this->price;
	}
	void setprice(float price)
	{
		this->price= price;
	}
	void show()
	{
		cout<<"This is my favorite car"<<endl;
		cout<<"The price of car is 70000$"<<endl;
	}
private:
	float price;
};