#include<iostream>
#include<string.h>
using namespace std;

enum status {enough,full,empty};

class Car{
private:
	double cost;
	const char* make;
	double kmperlitre;
	int maxfuelcapacity;
	status fuellevel;
	          
public:
	Car()
	{
		this->make="foxy";
		this->kmperlitre = 10;
		this->maxfuelcapacity = 15;
		this->fuellevel = enough;
		this->cost=0;
		
	
	}
	

	double getcost()
	{
		return this->cost;
	}
	void setcost(double price)
	{
		this->cost = price;
	
	}

	string getmake()
	{
		return this->make;
	}

	void setmake(const char* brand)
	{
		this->make= brand;

    }

	double getkmperlitre()
	{
    	return this->kmperlitre;

	}

	void setkmperlitre(double litre)

	{
		this->kmperlitre = litre;
	}

	status setfuellevel()
	{
		return this->fuellevel;
	}

	void getfuellevel(status s)

	{
		this->fuellevel = s;
	}

	void display()
	{
		cout << "This is a car" << endl;
		cout << "This is a great car" << endl;
		cout << this->cost << endl;
		cout << this->kmperlitre << endl;
		cout << this->make << endl <<endl;
	
	}

};
    


