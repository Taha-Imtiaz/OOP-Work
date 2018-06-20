#include<iostream>
#include"DVDD.h"
using namespace std;

class DVDCollection
{
	
private:
	   string name;
	   int cost;
	   int size;
	   int count;
	   DVDD *dvdlist;
	   DVDD *newarray;
	
public:
	DVDCollection()
	{
		dvdlist = new DVDD[this->size];
	    this->size=0;
	    this->count=0;
	}

	void add(DVDD &z1)
	{
		if(this->count<=this->size)
		{
		dvdlist[this->count]=z1;
		this->count++;
		}

	else
	{
	this->increase();
	}
	}

	DVDD increase()
	{
		this->size=size*2;
	newarray=new DVDD[this->size];
	memcpy(newarray,dvdlist,sizeof(newarray));
		
		return *newarray;
	}

	void display()
	{
	cout<<dvdlist<<endl;
	}
};

	

	