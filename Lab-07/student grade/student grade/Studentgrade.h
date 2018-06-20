
#include<iostream>
using namespace std;

class Studentgrade
{
	
private:
	int maths;
	int eng; 

public:
	Studentgrade()
	{
	this->maths=0;
	this->eng=0;
	}

	int getmaths()
	{
	return (this->maths);
	}

	int geteng()
	{
	return(this->eng);
	}

	void setmaths(int grade)
	{
	this->maths=grade;
	}

	void seteng(int grade)
	{
	this->eng=grade;
	}

    int gettotalmarks()
	{
	return(this->maths+this->eng);
	}

   bool operator>(Studentgrade s2)
	{
		if(this->gettotalmarks() > s2.gettotalmarks() ) //&& (this->eng > s2.eng))
		
		return 1;
		

		else
			return 0;
	}
	



};
