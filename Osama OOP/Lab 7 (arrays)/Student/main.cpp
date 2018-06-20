#include <iostream>
#include <string>
#include "student.h"
using namespace std;


int main()
{
 Student X;
 
 X.addcourse("BSCS 413");
 X.addcourse("BSCS 415");
 X.addcourse("BSCS 417");
 X.addcourse("BSCS 419");
 X.addcourse("BSCS 420");
 X.addcourse("BSCS 421");
 X.addcourse("BSCS 422");
 X.addcourse("BSCS 423");
Student Y(X);
 cout<<Y.getcourses(0);
 X=Y;
 cout<<X;
 cout<<Y;
 system("pause"); 
}