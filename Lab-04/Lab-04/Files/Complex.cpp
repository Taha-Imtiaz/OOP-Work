#include <iostream>
using namespace std;
#include "Complex.h"
int main()
{
Complexnumber Z1(5,6);
Complexnumber Z2(Z1);
Complexnumber Z3;
Z3=Z1+Z2;
cout<<"The sum of two numbers is"<<endl;
Z3.display();
system("pause");


}