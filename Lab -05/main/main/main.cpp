#include <iostream>
#include "Rationalnumber.cpp"
using namespace std;
int main()
{
Rationalnumber Q1(2,3);
Rationalnumber Q2(5,6);
Rationalnumber Q3;
Q3=Q1+Q2;
Q3.display();
Q3=Q1-Q2;
Q3.display();
Q3=Q1*Q2;
Q3.display();
Q3=Q1/Q2;
Q3.display();
system("pause");
}