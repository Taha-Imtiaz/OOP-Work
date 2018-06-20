#include<iostream>
using namespace std;
#include<string>
class Car
{
public:
	//constructor
	Car()
	{
	
	this->make="foxy";
	this->MaxfuelCapacity=20;
	this->km_litre=15.2;
	this->price=70000000;
	}
	//getters and setters
	float getprice()
	{
		return this->price;
	}
	void setprice(float p)
	{
		this->price=p;
	}
	string getmake()
	{
		return this->make;
	}
	void setmake(string m)
	{
		this->make=m;
	}
	int getMaxfuelCapacity()
	{
		return this->MaxfuelCapacity;
	}
	void setMaxfuelCapacity(int C)
	{
		this->MaxfuelCapacity=C;
	}
	float getkm_litre()
	{
	
	return this->km_litre;
	}
	void setkm_litre(float km)
	{
		this->km_litre=km;
	}
	void show()
	{
	cout<<"The price of my Car is 20000000"<<endl;
	cout<<"Its average speed is 100km/litre;"<<endl;
	cout<<"its maxmimam fuel Capacity is 20"<<endl;
	cout<<this->make<<endl;
	cout<<this->price<<endl;
	cout<<this->MaxfuelCapacity<<endl;
	cout<<this->km_litre<<endl;
	
	}
private:
	float price;
	string make;
	int MaxfuelCapacity;
	float km_litre;
};
