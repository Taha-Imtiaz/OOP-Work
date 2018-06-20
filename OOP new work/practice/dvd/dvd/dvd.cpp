#include"stdafx.h"
#include<iostream>
#include"DVDCollection.h"
using namespace std;

int main()
{
DVDCollection dvdlist;

DVDD myfirstdvd("Pakistan",100);

   dvdlist.add(myfirstdvd);

   dvdlist.display();

}