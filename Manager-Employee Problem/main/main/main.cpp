#include <iostream>
using namespace std;
#include<string>

#include"Employee.h"
#include "Manager.h"
int main()
{
Manager m(5,"ht");
Employee e("Talib",50000);
cout<<m<<endl;
cout &&m;
cout<<e<<endl;
system("pause");

}