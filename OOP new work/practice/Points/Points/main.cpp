

#include"stdafx.h"
#include"Points.h"
//#include"Pointo.cpp"
#include<iostream>
using namespace std;

int main()
{ 
	  Points p1(2.0 , 5.0);
	// Points p2=p1;
	 
	  Points p2(4.0,5.0),p3;
	   Points p4(2.0,2.0);
	     Points p6, p7, p8;
		 	 // p4 = new Points(3.0,2.0);
	  p6 = p1+p2+p4;

	  p6.display();

	  cout<<p1;
	system("pause>nul");
	

	
	 /* Points *p4;
	  Points p5;
	  Points p6, p7, p8;
		  
	  p4 = new Points(3.0,2.0);
	  p6 = p1 + p2 + *p4;
	 /* 
		  

     p3 = p1 + p2;
	 
     p5 =  p1 + 10.0;
	
	p7 = p1 ;
	//p2 > p1;

   //p1 = (Point) 2.0;
	

	p8 = 10.0 + p1;
	cout << "GREATER WALA" << endl;

	cout << "PRINT KRWAYA" << endl;
	p1.display();
	//p2.display();


	
	//for derefence we use ->
	p4->display();
	p5.display();
	p6.display();
	p7.display();
	p8.display();
	//(*p4).display();
	*/


	system("pause>nul");
	
  
}

