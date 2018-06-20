

#include"stdafx.h"
#include"student.h"
#include<iostream>
#include<string.h> 
#include <string>
using namespace std;
int main()
{
	Student x;
	Student y;
	x.addcourse("maths",1);
	string a=x.getcourse(0);
	//cout<<a<<endl;
	x.addcourse("physics",2);
	string b=x.getcourse(2);
	//cout<<b<<endl;
	x.addcourse("islamiat",3);
	x.getcourse(3);
	x.addcourse("ICS",4);
	x.getcourse(4);
	 
	y=x;
	cout<<x;
	y.display();
	system("pause");

	//Student y(x);
	


}