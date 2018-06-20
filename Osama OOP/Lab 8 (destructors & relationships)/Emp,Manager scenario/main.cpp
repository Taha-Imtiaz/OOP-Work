#include <iostream>
#include "manager.h"
using namespace std;

int main()
{
manager m(5,"Osama");
employee e("Ahmed",10000);
cout<<e<<endl;
cout<<m<<endl;
/* To print derived object using a new overloaded operator &&
cout&&m;
*/

cout<<endl;
system("pause");


}
