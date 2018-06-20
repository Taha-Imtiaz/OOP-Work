#include<iostream>
using namespace std;
class complex
{
 private:
	float real;
	float img;

 public:

	complex()
	{ 
		this->real = 0.0;
		this->img = 0.0;
	}

	complex(float real, float img)
	{
		this->real = real;
		this->img = img;
	}

	complex(complex& z1)
	{
		//cout<<"copy wala"<<endl;
		this->real = z1.real;
		this->img = z1.img;
	}
	float getreal()
	{
		return this->real;
	}
	float getimg()
	{
		return this->img;
	}

	void setreal(float r)
	{
		this->real = r;
	
	}
	void setimg(float i)
	{
		this->img = i;
		
	}


	complex add(complex z1, complex z2)	{
		
 	complex result;
		float real = z1.real + z2.real;
		float img = z1.img + z2.img;
		result.setadd(real, img);
		return result;

    }

	complex add(complex z2)
	{
		complex result;
		float real = this->real + z2.real;
		float image = this->img + z2.img;
		result.setadd(real, image);
		return result;
	}

	complex operator +(complex z2)
	{
		complex result;
		float real = this->real + z2.real;
		float image = this->img + z2.img;
		result.setadd(real, image);
		return result;

	}

	complex operator-(complex z2)
	{
		complex result;
		float real=this->real - z2.real;
        float img=this->img - z2.img;  
		result.setadd(real, img);
		return result;

	}

	complex operator*(complex z2)
	{ 
	  complex result;
	  result.real=(this->real*z2.real)-(this->img*z2.img);
	  result.img=(this->real*z2.img)+(this->img*z2.real);
	 // result.setadd(real,img);
	  return result;
	}

	complex operator/(complex z2)  
  {  
	  complex result;
      float real=((this->real*z2.real)+(this->img*z2.img))/((z2.real*z2.real)+(z2.img*z2.img));  
      float img=((this->img*z2.real)-(this->real*z2.img))/((z2.real*z2.real)+(z2.img*z2.img));  
      result.setadd(real,img);
	  return result;
  }  

	friend ostream& operator<<(ostream& s, complex z1)
	{
		return s << " Real: " << z1.real << endl<<" Image: " << z1.img << endl;
	}

	void setadd(float real, float image)
	{
		
		this->real = real;
		this->img = image;

	}
	void display()
	{
		cout << " real: " << real<<endl;
		cout << " image: " << img << endl;
	}
};
