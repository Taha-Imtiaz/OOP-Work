#include <iostream>
#include <string>
#include <string.h>
using namespace std;
#include "polygon.h"
//#include "vertex.h"
int main()
{
 polygon p1;
 vertex v1;
 vertex v2(3,4);
 vertex v3(2,6);
 p1.add(v1);
 p1.add(v2);
 p1.add(v3);
 p1.display();
 system("pause>nul");
}
