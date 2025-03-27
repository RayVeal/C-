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

int main ( void )
{
	string first, middle, last, full_name, MI;
	
	cout << "Please enter first, middle, and last \n";
	cin >> first >> middle >> last;
	
	MI=middle[0];
	
	full_name= last+ ", " +first+ " " +MI+ ".";
	
	cout << full_name;
 		
    return 0;
}
