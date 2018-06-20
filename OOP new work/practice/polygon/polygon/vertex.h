#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class vertex
{
private:
	int x;
	int y;
public:
	vertex()
	{
	 this->x=0;
	 this->y=0;
	}
	vertex(int xx,int yy)
	{
	 this->x=xx;
	 this->y=yy;
	}
	vertex(vertex& clone)
	{
		this->x=clone.x;
		this->y=clone.y;
	}
	int getx()
	{
	 return this->x;
	}
	void set(int X)
	{
	 this->x=X;
	}
	int gety()
	{
		return this->y;
	}
	void sety(int Y)
	{
	 this->y=Y;
	}
	void display()
	{
	 cout<<x<<endl;
	 cout<<y<<endl;
	}
	friend ostream& operator <<(ostream& out,vertex &z1)
	{
	 return out<<"x:"<<z1.x<<"y:"<<z1.y<<endl;
	}
};