#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()

{
	const int maxage=90;

	const int *a=new int; // it means we cannot modify values of const int pointer
	
	int * const a=new int; // here we have made the address of 'a' constant and it cannot point to anaother address
	
	const int * const a=new int; // here it will keep both value and address constant


	*a=2; //due to line 10 it will give error
	
	//a = &maxage; we cannot do this because int cannot be assigned to const int
	
	std::cout<<*a<<std::endl;

	system("pause>NUL");
}
