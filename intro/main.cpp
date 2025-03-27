//       ____   __     __
//        /   /   \  /   \
//       /   /      /
//      /    \___/  \___/
//
// Date:
// Name:
// Project Description:
// Inputs: Degrees farenhiet
// Outputs: Degrees celcius
//*************************************************************

#include <iostream>
#include <string>

using namespace std; //introduces namespace std

int main ( void )
{
	double F, C;
	
	cout << "Enter the degrees is farenheit: ";
	cin >> F;
	
	C=5.0/9*(F-32);
	
	cout << F << " degrees in farenheit is " << C << " degrees in celcius.";
 
    return 0;
}
