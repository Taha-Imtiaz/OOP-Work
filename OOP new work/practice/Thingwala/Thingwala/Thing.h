#include<iostream>
using namespace std;

class Thing
{
private: 
	int *x;
	int y,z;

public:
	~Thing(){

		delete x;
		x=nullptr;
	} 
   Thing()
   {
   x=new int;
   *x=0;
  this->y=0;
  this->z=0;
   }

   Thing(int a, int b , int c)
   {
	   x=new int;
	   *x=a;
	   this->y=b;
	   this->z=c;
   }


   Thing (Thing &var)
   {
    x=new int;   
   *x=var.setpointer();
   this->y=var.y;
   this->z=var.z;

   }

   int setpointer()
   {
   return *x;
   }
   
   Thing operator =(Thing &t1)
   {
   x=new int;
    *x=*(t1.x);
	this->y=t1.y;
	this->z=t1.z;

	return *this;
   }
   void set(int a, int b , int c)
   {
	*x=a;
	this->y=b;
	this->z=c;
	
   }


   void display()
   {
   cout<<*x<<endl;
   cout<<this->y<<endl;
   cout<<this->z<<endl<<endl;
   }

};