# include <iostream>
# include <string>
using namespace std;

class Person {

public:
Person()
{
   this->Name= "Osama";
   this->YearofBirth= 1998;
   this->height=70;
}
void show()
{
  cout<<Name<<endl;
  cout<<YearofBirth<<endl;
  cout<<height<<endl;;
}

string getName()
{
  return this->Name;
}
int getYearofBirth()
{
  return this->YearofBirth;  
}

int getheight()
{
  return this->height;
}

int Age (int year)
{
  int age;
  age=year-this->YearofBirth;
  cout<<"\n\n";
  cout<<age;

  
}

int Heightinmeters()
{ 
  int heightincm;
  heightincm=this->height*100;
  cout<<"\n\n";
  cout<<heightincm;
  cout<<"\n\n";
  
}



private:

std::string Name;
int YearofBirth;
int height;

};