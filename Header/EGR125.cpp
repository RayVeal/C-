// FUNCTION FILE

#include <iostream>
#include <cmath>

using namespace std;

double DIST(int x1, int x2, int y1, int y2, int z1, int z2)
{
	double distance=pow(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2),1.0/2);
	
	return distance;		// Always return the local variable being used in the function definition
}

double DEG2RAD(double deg) 
{
	return deg*M_PI/180;
}
