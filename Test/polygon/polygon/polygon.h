#include <iostream>
#include <string>
#include <string.h>
using namespace std;
#include "vertex.h"
class polygon
{
public:
	polygon()
	{

		this->size=5;
		this->count=0;
		vertexlist=new vertex[this->size];
		
	}
	void add(vertex &v)
	{
		if(this->count==this->size-1)
		{
			increasesize();
		}
		vertexlist[this->count]=v;
		this->count=this->count+1;
	}
	void increasesize()
	{
		this->size= this->size*2;
		vertex *vertextemp=nullptr;
		vertextemp=new vertex[this->size];
		for(int i=0;i<=count;i++)
		{
			vertextemp[i]=vertexlist[i];

		}
		delete [] vertexlist;
		vertexlist=vertextemp;
	}
	void display()
	{
		for(int i=0;i<=this->count;i++)
		{
			cout <<vertexlist[i]<<endl;
		}
	}

	private:
	vertex *vertexlist;
	int size;
	int count;
};