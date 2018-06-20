
#include<iostream>
using namespace std;

class Extendedgrade : public Studentgrade
{
private:
	int science;
	int lang;
	int tech;

public:
	Extendedgrade()
	{
	this->science=0;
	this->lang=0;
	this->tech=0;
	}

	int getscience()
	{
	return(this->science);
	}

	int getlang()
	{
	return(this->lang);
	}
	
	int gettech()
	{
	return(this->tech);
	}

	void setscience(int grade)
	{
	this->science=grade;
	}

	void setlang(int grade)
	{
	this->lang=grade;
	}

	void settech(int grade)
	{
	this->tech=grade;
	}

	Extendedgrade operator+(Extendedgrade grade)
	{
		int tot_maths= this->getmaths() +  grade.getmaths();
		

	Extendedgrade temp_grade;
	temp_grade.setmaths(tot_maths);
	return temp_grade;
	}





};