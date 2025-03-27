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

using namespace std; //introduces namespace std

// Prototype
void SOLVE2(double, double, double, double, double, double, double&, double&);		// The "&" after the data type classifies it as an output

int main ( void )
{
	double A,B,C,D,E,F,X,Y;
	
	cout << "Enter A, B, C, D, E, and F \n";
	cin >> A >> B >> C >> D >> E >> F;
	
	SOLVE2(A,B,C,D,E,F,X,Y);
	
	cout << X << endl << Y;
 
    return 0;
}

void SOLVE2(double a, double b, double c, double d, double e, double f, double& x, double& y)
{
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
}
