#include <iostream>
#include "vector.h"
using namespace std;
int main()
{
Vector Q1(2,3,4);
Vector Q2(5,6,7);
Vector Q3;
Q3=Q1+Q2;
Q3.display();
Q3=Q1-Q2;
Q3.display();
Q3=Q1*Q2;
Q3.display();

system("pause");
}