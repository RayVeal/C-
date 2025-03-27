//       ____   __     __
//        /   /   \  /   \
//       /   /      /
//      /    \___/  \___/
//
// Date: 8/27/18
// Name: Ramon Veal
// Project Description: Given 2 sides and the opposite angle, calculates remaining side and other 2 angles
// Inputs: Sides a, b, and angle A (in degrees)
// Outputs: Angles B, C, and side c
//*************************************************************

#include <iostream>
#include <string>
#include <cmath>

using namespace std; //introduces namespace std

int main ()
{
	double a, b, c, A, B, C;
	
	cout << "Enter sides a, b, and the angle opposite of side a (in degrees): ";
	cin >> a >> b >> A;
	
	B=asin(b*sin(A)/a);
	C=180-A-B;
	c=a*sin(C)/sin(A);
	
	cout << "Side c = " << c << ", angle B = " << B << " degrees, and angle C = " << C << " degrees.";
 
    return 0;
}
