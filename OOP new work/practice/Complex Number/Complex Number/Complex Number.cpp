

#include<stdafx.h>
#include"complex.h"
#include<iostream>
using namespace std;
int main()
{
	complex z1(5.4,6.9);
	complex z3,*z4,z5,z6,z7,z8,z9(6.5,4.5),z10;
	complex z2=z1;
	z3 = z3.add(z1, z2);
	
	z3.display();

	
	
   z4=new complex(3.2,5.5);
	
	z4->display();
	
	z5 = z1+z3+*z4;
	
	z3=z1;
	z3.display();
	(z5=z9)=z10;
	z5.display();
	z9.display();
	
	z7=z1*z3;

	/*z5.display();
	z9.display();
    z10.display();
    z1.display();

	z7=z1*z3;

	z8=z1/z3;
	
	

	z5.display();
	
	z6.display();

	z7.display();

	z8.display();
*/	
	cout << z1;
	
	system("pause>nul");
}