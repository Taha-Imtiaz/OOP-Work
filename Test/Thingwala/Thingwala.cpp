#include<stdafx.h>
#include<iostream>
#include"Thing.h"

int main()
{
Thing t(1,2,3);

cout<<"Values of T:"<<endl<<endl;

t.display();

Thing a=t;

cout<<"Values of A:"<<endl<<endl;

a.display();

Thing b(2,3,4);

b=t;

cout<<"Values of B:"<<endl<<endl;

b.display();

t.set(4,5,6);

cout<<"Values of T:"<<endl<<endl;
t.display();
cout<<"Values of A:"<<endl<<endl;
a.display();
cout<<"Values of B:"<<endl<<endl;
b.display();

system("pause>nul");


}