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
#include <iomanip>

using namespace std; //introduces namespace std

int main ( void )
{
 double V, SA, r;
 
 cout << "Radius(m)" << setw(20) << "Surface Area(m^2)" << setw(14) << "Volume(m^3)" << endl;
 
 for (r=0; r<=9.5; r+=0.5)		//seperated by semicolons
 {
 	SA=4*M_PI*pow(r,2);
 	V=4.0/3*M_PI*pow(r,3);
 	
 	cout << right << setw(9) << r << setw(20) << SA << setw(14) << V << endl;
 }
 
    return 0;
}
