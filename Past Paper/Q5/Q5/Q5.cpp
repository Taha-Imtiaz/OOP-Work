#include<iostream>
using namespace std;
#include "Class A.h"
#include "Class Z.h"
int main()
{
ClassZ *ZPointer=new ClassZ();
ClassA *APointer=new ClassA();
ClassA Avariable;
ZPointer->Print();
APointer->Print();
APointer=ZPointer;
Avariable=*ZPointer;
APointer->Print();
Avariable.Print();
system("pause");

}