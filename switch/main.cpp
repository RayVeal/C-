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

int main ( void )
{
	int choice;		// allocate space for choice and variables
	float ft, in, cm, m, mi;
	
	cout << "Enter the distance in feet \n";		// prompt user to enter value in inches
	
	cin >> ft;		// accept value
	
	cout << "Enter the number beside the unit that you are converting feet into: \n";		// display options
	cout << "1) Inches \n" << "2) Centimeters \n" << "3) Meters \n" << "4) Miles \n" ;
	
	cin >> choice;		// accept choice 
	
	switch(choice)		// initialize switch
	{
	// write different cases, end in break
		case 1: 
			in=12*ft;
			cout << ft << " feet is " << in << " inches.";
			break;
		
		case 2:
			cm=ft*12*2.54;
			cout << ft << " feet is " << cm << " centimeters.";
			break;
			
		case 3:
			m=ft*12*0.0254;
			cout << ft << " feet is " << m << " meters.";
			break;
			
		case 4:
			mi=ft/5280;
			cout << ft << " feet is " << mi << " miles.";
			break;
			
		// default case	
		default:
			cout << "Invalid response";
	}
	
    return 0;
}
