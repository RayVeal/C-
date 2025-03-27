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
	float x;
	
	do
	{
		cout << "Enter an x value. Must be between -1 and 1: \n";
	    cin >> x;
	    
		if (x>1 || x<-1)		//Must include pre-test for do-while loops
		{
		cout << "Invalid entry, please enter another x value: \n";
		cin >> x;
		}
	}
	while(x>1 || x<-1);

	cout << "The angle is " << acos(x)*180/M_PI;	
 
    return 0;
}
