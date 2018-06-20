
#include"stdafx.h"
#include"Car.h"
#include<iostream>

using namespace std;

int main()
{
	Car bucarti,vigo;
	//vigo=new Car();
	bucarti.setcost(500.0);
	bucarti.setmake("bucarti");
	 
	//vigo.setcost(600);
    vigo.setmake("vigo");

	
	bucarti.display();
	vigo.display();
	system("pause>nul");
}