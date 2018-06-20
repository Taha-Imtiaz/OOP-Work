#include <iostream>
#include <string>
using namespace std;
#include "point.h"

class Polygon{

 private:
	 Point *area;
	 int size;
	 int count;

public:
	Polygon()
	{
	this->size=100;
	this->count=0;

    area=new Point[this->size];
	
	}


	void add_vertex(Point &p)
	{
	if(this->size==this->count)
	{
	    incsize();
	}
	area[this->count]=p;
	this->count=this->count+1;
	}

	
	void incsize()
	{
	this->size=this->size*2;
	Point *temp=nullptr;
	temp=new Point[this->size];
	int i=0;
	for(i=0;i<count;i++)
	{
	temp[i]=area[i];
	}
	delete [] area;

	area=temp;
	}


	

	void show()
    {
     
	 int i=0;
	 cout<<endl;
     for(i=0;i<=this->count;i++)
     {
      cout << area[i] <<endl;
    
     }

   }


	 
};