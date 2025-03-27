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
 float b,h,a,p;
	
	cout << "Enter the base and height of a right triangle: \n";
	cin >> b >> h;
	
	a=.5*b*h;
	p=b+h+pow(b*b+h*h,1.0/2);
	
	cout << right << setw(8) << setprecision(3) << "The area is " << a << ", and the perimeter is " << p;
 
    return 0;
}
