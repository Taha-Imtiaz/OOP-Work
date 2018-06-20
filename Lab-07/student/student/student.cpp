


#include"student.h"
#include<iostream>
#include<string.h> 
#include <string>
using namespace std;
int main()
{
	Student x;
	
	x.addcourse("BSCS-302");
	x.addcourse("BSCS-304");
	x.addcourse("BSCS-306");
	x.addcourse("BSCS-308");
	x.addcourse("BSCS-310");
	x.addcourse("BSCS-312");
	

	Student y(x);
	
	
	cout<<x;
	cout<<y;

	system("pause");

	
	


}