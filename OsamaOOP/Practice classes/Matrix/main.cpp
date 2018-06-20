#include <iostream>
#include "matrix.h"
using namespace std;

int main()
{
  matrix m1;
  matrix m2;
  matrix m3;
  m1.show();
  cout<<"\n\n";
  m3= m1+m2;
  m3.show();
  cout<<"\nThe determinant of matrix m1 is "<<m1.determinant()<<endl;
  system("pause");
 // delete m1;4
  

}
