//       ____   __     __
//        /   /   \  /   \
//       /   /      /
//      /    \___/  \___/
//
// Date:
// Name: Ramon Veal
// Project Description:
// Inputs: Length and width in meters
// Outputs: Area in meters squared and perimeter in meters
//*************************************************************

#include <iostream>
#include <string>

using namespace std; //introduces namespace std

int main ( void )
{
 int Length, Width, Area=Length*Width, Perimeter=(Length*2)+(Width*2) ;		// Reserves space for measurements
 
 cout << "Enter the length of the rectangle, in meters" << endl;			// Prompts user
 cin >> Length;																// Allows user to input measurement
 
 cout << "Enter the width of the rectangle, in meters" << endl;
 cin >> Width;
 
 cout << "Area = " << Area << " square meters, and perimeter = " << Perimeter << " meters.";	// Displays results
    return 0;
}
