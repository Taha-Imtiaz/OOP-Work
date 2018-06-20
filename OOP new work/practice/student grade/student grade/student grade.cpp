#include"stdafx.h"
#include"Studentgrade.h"
#include"Extendedgrade.h"
#include<iostream>
#include<string.h>
#include <string>
using namespace std;
int main()
{
/*Extendedgrade s1,s2,s3;


s1.setmaths(50);
s1.setscience(70);
s2.setmaths(80);
s1.setscience(60);
*/

Studentgrade s1,s2,s3;

s1.setmaths(20);
s1.seteng(70);
s2.setmaths(80);
s2.seteng(60);


if(s1>s2)
   cout<<"greater"<<endl;

else
	cout<<"less"<<endl;


//cout<<s3.getmaths()<<endl;
//cout<<s3.getscience()<<endl;

system("pause>nul");

}
