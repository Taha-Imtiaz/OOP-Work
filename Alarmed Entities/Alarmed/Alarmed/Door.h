#include<iostream>
using namespace std;
#include "Alarm.h"

#include <string>
class Door:public Alarm
{
private:
	int code;
public:
	
	Door(int code):Alarm(),code(code)
	{
		
	}
	void typecode(int c)
	{
	if (c==code)
	{
	a_switch();
	}
	else
		cout<<"nice try"<<endl; 

	}
	void pushhandle()
	{
	if(!is_active())
	{
	Open();
	}
	else
		cout<<"Call POLICE"<<endl;
	}
	void Open()
	{
	cout<<"Opened"<<endl;
	}
};