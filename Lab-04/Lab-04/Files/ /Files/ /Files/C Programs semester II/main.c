#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/*
================================================================================
FORMULA FOR PROJETILE MOTION
================================================================================
	y
	|			H
	|		   = =
	|        =  |  =
	|     =     |     =
	^   =       |       =
  Vy| =         |         =
	|=  )th     |           =
-x--|----->--------------------------------> x
	|----Vx
	|========== R ===========
	|
	-y

=====     TIME TO REACH MAX HEIGHT     =========================================
=> t = Vo sin(th) / g										-- 1
================================================================================

=====     TOTAL TIME OF FLIGHT     =============================================
=> T = 2 Vo sin(th) / g										-- 2
================================================================================

=====     MAX HEIGHT     =======================================================
=> H = [Vo sin(th)]^2 / 2g									-- 3
================================================================================

=====     RANGE     ============================================================
=> R = Vo^2 sin(2 th) / g									-- 4
================================================================================

=====     MAX RANGE     ========================================================
=> Ro = Vo^2 / g											-- 5
================================================================================

=====     PROJECTILE TREJETORY     =============================================
=> y = [tan(th) * x] -  1/2 [ g / {Vo cos(th)}^2 ] * x^2	-- 6
================================================================================
*/
//=====     GLOBAL VARIABLE DECLARATIONS     ===================================
const float g = 9.8;
float H = 0, R = 0, Ro = 0, T = 0, Vo = 0, t = 0, th = 0;
float Vo_x = 0, Vo_y = 0;

//==============================================================================

//=====     FUNCTION DECLARATIONS     ==========================================
void runProjectileMotion(void);
void getInputs(void);
void getMaxHeight(void);
void getRange(void);
void getMaxRange(void);
void getFlightTime(void);
void getVelocity(void);
void getHeightTime(void);
void getLaunchAngle(void);
void printProjectile(void);

//==============================================================================

//=====     INTRODUCTION     ===================================================
void printintro(void) {
	int a, b, c=1, d, e=2 , f=2 , g, h, i;
	
	for(a=0; a<=70; a++) {
		for(b=0; b<=c; b++) {
			for(d=0; d<=e; d++)
				printf("/");
				
			printf("\n");
			e--;
		}
		if(a<=19) {
			c++;
		}
		f++;
		e=f;
		Sleep(50);
		
		if(a<=69)
		system("cls");
	}
	Sleep(500);
	system("cls");

	for(g=5; g>=0 ;g--) {
		printf("\t\tLOADING: wait %d s", g);
		Sleep(1000);
		system("cls");
	}
	for(h=10; h>=0; h--) {
		char j[] = "\tSIMULATOR:\n\t\tPROJECTILE MOTION IN TWO DIMENSIONS\
		\n\n\tDESIGNED BY:\n\t\tMM-003\tUSMAN OMER\
		\n\t\tMM-026\t\SYED MOHSIN AMIN\
		\n\n\t\tMATERIALS ENGINEERING DEPARTMENT\
		\n\t\tBATCH: 2015-16";
		
		printf("%s", j);
		printf("\n\t%d",h);
		
		Sleep(1000);
		system("cls");
	}
	for(i=5; i>=0; i--) {
		char k[] = "\t\tSUBJECT: COMPUTER PROGRAMMING AND DRAFTING\n\t\t\
		\n\t\tSEPTEMBER 2017\n\n\t\tSUBMITTED TO: Ms. NUZHAT";
		
		printf("%s", k);
		printf("\n\t%d",i);
		Sleep(1000);
		
		system("cls");
	}
}

//==============================================================================

//=====     INSTRUCTIONS     ===================================================
void printInstructions(void) {
	printf("=====     INSTRUCTIONS     ==================================\r\n");
	printf("=============================================================\r\n");
	
	char i[] = "The program is used to calculate the ideal projectile motion.\
	\r\n1 - User will be asked to input the variables for projectile motion.\
	\r\n2 - User can input value of any variable (atleast 2).\
	\r\n3 - User can terminate input anytime by typing 'Terminate'\
	\r\n4 - The standard way of input data is like type\
	'Vo = (corresponding value here)'.\
	\r\n\tExample: Vo = 30.00\
	\r\n\tNote: Follow exactly as shown in example!\
	\r\n5 - Note that all values are in S.I unit.\
	\r\n6 - Press 'C' to access the calculator.\
	\r\n7 - Press 'E' to exit the program.\
	\r\n\r\nChoose from the above option: ";
	
	printf("%s", i);
}

//==============================================================================

void main(void) {
	int op;

	printintro();
	printInstructions();
	
	while(1) {
		op = getche();
		op = toupper(op);
		
		switch(op) {
			case 'C':
				system("cls");
				runProjectileMotion();
				printf("\r\nPress 'E' to exit or 'C' to continue: ");
				break;
				
			case 'E':
				exit(0);
		}
	}
}

void runProjectileMotion(void) {
	char i[] = "'H' = Max Height \t,\t 'R' = Range\
	\r\n'Ro' = Max Range \t,\t 'T' = Total time of flight\
	\r\n'Vo' = Firing Velocity \t,\t 't' = Time to Reach Max Height\
	\r\n\'th' = Angle of Launch (in degrees).\r\n\r\n";
	
	printf("%s", i);
	
	getInputs();
	H = 0, R = 0, Ro = 0, T = 0, Vo = 0, t = 0, th = 0;
	Vo_x = 0, Vo_y = 0;
}

void getInputs(void) {
	printf("======     CALCULATOR     ===================================\r\n");
	printf("=============================================================\r\n");
	
	char varName[10][10], toFind[10][10];
	float varValue[10];
	int i, temp;
	
	printf("Name the perimeter and corresponding values you want to enter:\r\n");
	for(i=0; i<7; i++) {
		scanf("%s", varName[i] );
		
		if( ! strcmp(varName[i], "Terminate") )
			break;
			
		scanf(" = %f", &varValue[i] );
	}
	temp = i;
	
	for(i=0; i<temp; i++) {
		if( ! strcmp(varName[i], "H") ) {
			H = varValue[i];
		}
		else if( ! strcmp(varName[i], "R") ) {
			R = varValue[i];
		}
		else if( ! strcmp(varName[i], "Ro") ) {
			Ro = varValue[i];
		}
		else if( ! strcmp(varName[i], "T") ) {
			T = varValue[i];
		}
		else if( ! strcmp(varName[i], "Vo") ) {
			Vo = varValue[i];
		}
		else if( ! strcmp(varName[i], "t") ) {
			t = varValue[i];
		}
		else if( ! strcmp(varName[i], "th") ) {
			th = varValue[i];
		}
	}
	th *= M_PI / 180;
	
	printf("\r\nWhat do you want to find the result of? :\r\n");
	for(i=0; i<7; i++) {
		scanf("%s", toFind[i] );
	
		if( ! strcmp(toFind[i], "Terminate") )
			break;
	}
	temp = i;
	
	printf("=======     RESULTS      ====================================\r\n");
	printf("=============================================================\r\n");
	
	for(i=0; i<temp; i++) {
		if(th==0) {
			getLaunchAngle();
		}
		if(Vo==0) {
			getVelocity();
			
			if( R>0 && T>0 ) {
				getLaunchAngle();
			}
		}
		if( Vo >= 0 && th >= 0 ) {
			if( ! strcmp(toFind[i], "H") )
				getMaxHeight();
			
			else if( ! strcmp(toFind[i], "R") )
				getRange();
		
			else if( ! strcmp(toFind[i], "Ro") )
				getMaxRange();
		
			else if( ! strcmp(toFind[i], "T") )
				getFlightTime();
			
			else if( ! strcmp(toFind[i], "Vo") )
				getVelocity();
			
			else if( ! strcmp(toFind[i], "t") )
				getHeightTime();
			
			else if( ! strcmp(toFind[i], "th") ) 
				getLaunchAngle();
		}
	}
}

void getMaxHeight(void) {
	H = ( Vo * Vo * sin(th) * sin(th) ) / ( 2 * g );
	printf("Maximum Height\t\t\t: H = %0.3f (m)\r\n", H);
}

void getRange(void) {
	R = ( Vo * Vo * sin(2 * th) ) / g;
	printf("Range\t\t\t\t: R = %0.3f (m)\r\n", R);
}

void getMaxRange(void) {
	Ro = ( Vo * Vo ) / g;
	printf("Maximum Range\t\t\t: Ro = %0.3f (m)\r\n", Ro);
}

void getFlightTime(void) {
	if(t==0) {
		T = ( 2 * Vo * sin(th) ) / g;
	}
	else {
		T = 2 * t;
	}
	printf("Total Time of Flight\t\t: T = %0.3f (s)\r\n", T);
}

void getVelocity(void) {
	if(Vo==0) {
		if( R>0 && T>0 ) {
			Vo_x = R / T;
			Vo_y = ( g * T ) / 2;
			Vo = sqrt( ( Vo_x * Vo_x ) + ( Vo_y * Vo_y ) );
		}
		else if(H) {
			Vo = sqrt( ( 2 * g * H ) / ( sin(th) * sin(th) ) );
		}	
		else if(R) {
			Vo = sqrt( ( g * R ) / sin( 2 * th ) );
		}
		else if(Ro) {
			Vo = sqrt( g * Ro );
		}
		else if(T) {
			Vo = ( g * T ) / ( 2 * sin(th) );
		}
		else if(t) {
			Vo = ( g * t ) / ( sin(th) );
		}
	}
	else
		printf("Velocity\t\t\t: Vo = %0.3f (m/s)\r\n", Vo);
}

void getHeightTime(void) {
	if(T==0) {
		t = ( Vo * sin(th) ) / g;
	}
	else {
		t = T / 2;
	}
	printf("Time to Reach Max Height\t: t = %0.3f (s)\r\n", t);
}

void getLaunchAngle(void) {
	if(th==0) {
		if( H>0 && R>0 ) {
			th = atan( ( 4 * H ) / R );
		}
		else if(Ro) {
			th = (45 * M_PI) / 180;
		}
		else if(H) {
			th = asin( sqrt( ( 2 * g * H ) / ( Vo * Vo ) ) );
		}
		else if(R) {
			th = asin( ( g * R ) / ( Vo * Vo ) ) / 2;
		}
		else if(T) {
			th = asin( ( g * T ) / ( 2 * Vo ) );
		}
		else if(t) {
			th = asin( ( g * t ) / Vo );
		}
	}
	else
		printf("Launch Angle\t\t\t: th = %0.3f (deg)\r\n", (th * 180) / M_PI);
}
