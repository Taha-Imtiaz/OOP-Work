#include <iostream>
#include <string>
using namespace std;
#include "vector.h"
 
int main()
{
Vector A(4.0,5.0,7.0);
Vector Z(A);
Vector B,D,E;
Vector C;
float magnitude, Dot_product;
C= A+B;
C.show();
C= A-B;
C.show();
magnitude= C.Magnitude();
Dot_product = A*B;
C= A.Vectormultiplication(B);
C.show();
D= C.Unitvector(C);
D.show();
cout<<"\nThe Magnitude of Vector C is: "<<magnitude<<"\n\nThe dot product of A and B is: "<<Dot_product<<endl<<endl;
system("pause");
}