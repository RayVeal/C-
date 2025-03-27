//       ____   __     __
//        /   /   \  /   \
//       /   /      /
//      /    \___/  \___/
//
// Date:
// Name:
// Project Description:
// Inputs:
// Outputs:
//*************************************************************

#include <iostream>
#include <string>
#include <cmath>

using namespace std; //introduces namespace std


//_____________________________________________________________________________________________
// Prototype:
double deg2rad(double);		// SEMICOLON!!! on prototype, not function itself

// Prototype 2:
int FACT(int);

// Prototype 3:
void TCClogo();

// Prototype 4:
int TimeInSeconds(int, int, int);

//_____________________________________________________________________________________________
int main ( void )
{
 // Function call 1
 cout << deg2rad(30) << endl;
 
 // Function call 2
 cout << FACT(0) << endl;
 
 // Function call 3
 TCClogo();				// NO cout, because returning nothing (void). Still have to call.
 
 //Function call 4
 cout << endl << TimeInSeconds(3,4,5);
 
    return 0;
}


//_____________________________________________________________________________________________
// Function definition 1
double deg2rad(double deg)		// NO SEMICOLON
{
	double result;
	result=deg*M_PI/180;
	return result;				// ALWAYS return something
}

// Function definition 2
int FACT(int N)
{
	int fact =1;
	
	if (N==0)
	{
		return fact;
	}
	
	else
	{
		for (int i=1; i<=N; i++)
		fact*=i;
	}
	
	return fact;
}

// Function definition 3
void TCClogo()
{
	cout << "      ____  __     __  " << endl;
	cout << "       /   /  \\   /  \\ "<< endl;
	cout << "      /   /      /      " << endl;
	cout << "     /    \\___/  \\___/  " << endl;
	
	// No return, because is void
}

// Function definition 4
int TimeInSeconds(int a, int b, int c)
{
	int Seconds=a*3600+b*60+c;
	
	return Seconds;
}
