#include <iostream>
#include <string>
using namespace std;
#include "Dvd.h"

class DvdCollection
{
public:

    DvdCollection()
    {
        this->count=0;
        this->size=2;
        this->total_cost=0;
        dvdlist= new Dvd[this->size];
    
    }

    void add_Dvd(Dvd &d)
    {
        if(this->count==this->size-1)
        {
            increasesize();
        }
		

        dvdlist[this->count]= d;
        this->count= this->count+1;


    }

	
    void increasesize()
    {
        this->size= this->size*2;
        Dvd *dvdtemp= nullptr;
        dvdtemp= new Dvd[this->size];
        for(int i=0; i<=this->count;i++)
        {
            dvdtemp[i]= dvdlist[i];

        }
        delete [] dvdlist;
        dvdlist= dvdtemp;


    }


    void show()
    {

          cout <<"\nThe details of the Dvd are:\n";
 
  for(int i=0;i<=this->count;i++)
  {
      cout << this->dvdlist[i];
    
  }

    }


private:
Dvd *dvdlist;
int size;
int total_cost;
int count;

}; 
