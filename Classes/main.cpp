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
#include "Triangle.h"

using namespace std; //introduces namespace std

int main ( void )
{
	bool b;
	double p, a;
	Triangle T1;		// Similar to int T1, or string T1, etc...
	
	T1.Read_Sides();
	T1.Print_Sides();
	b=T1.Test_if_Valid();
	cout << b << endl;		// All functions w/ return values must have outputs in the main program
	p=T1.Find_Perimeter();
	a=T1.Find_Area();
	T1.Find_Angles();
	T1.Print_Angles();
	cout << "Perimeter is " << p << " and area is " << a;
 
    return 0;
}
