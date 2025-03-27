//       ____   __     __
//        /   /   \  /   \
//       /   /      /
//      /    \___/  \___/
//
// Date:
// Name:
// Project Description: Calculates the distance between 2 points in 3d space
// Inputs:
// Outputs:
//*************************************************************

#include <iostream>
#include <string>
#include <cmath>

using namespace std; //introduces namespace std

double DIST(int, int, int, int, int=0, int=0);		// The last 2 ints are already initialized to 0

int main ( void )
{
 	double distance=DIST(30,60,-15,25);		// Declare a variable to allow the function to be used, 
	 cout << distance << endl;				// unless return type is void.
 
    return 0;
}

double DIST(int x1, int x2, int y1, int y2, int z1, int z2)
{
	double distance=pow(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2),1.0/2);
	
	return distance;		// Always return the local variable being used in the function definition
}

