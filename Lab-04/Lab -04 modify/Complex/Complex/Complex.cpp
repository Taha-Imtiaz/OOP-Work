#include <iostream>
using namespace std;
#include "Complex.h"
int main()
{
Complexnumber Z1(4,-3);
Complexnumber Z2(-8,2);
Complexnumber Z3;
Z3=Z1+Z2;//Operator Overloading
cout<<"The sum of two numbers is"<<endl;
Z3.display();


Z3=Z3.add(Z1,Z2);//Parametrized Overloading
cout<<"The sum of two numbers is"<<endl;
Z3.display();

Z3=Z1.add(Z2);
cout<<"The sum of two numbers is"<<endl;
Z3.display();
Z3=Z1-Z2;
cout<<"The difference of two numbers is"<<endl;
Z3.display();

Z3=Z1*Z2;
cout<<"The Product of two numbers is"<<endl;
Z3.display();

Z3=Z1/Z2;
cout<<"The quotient of two numbers is"<<endl;
Z3.display();
system("pause");


}