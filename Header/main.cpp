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
#include "EGR125.h"		// This is the header used in the "DefaultArgument" folder
						// First copy the header and function files into this folder
						// Then right click on the shield and click "Add to project"

using namespace std; //introduces namespace std

int main ( void )
{
 double x=180;
 cout << DEG2RAD(x);
 
    return 0;
}
