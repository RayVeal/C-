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
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std; //introduces namespace std

int main ( void )
{
 vector<double> x(10);		// "x" is the vector name, 10 is the number of elements
 double y;					// "y" will be the values within the vector
 
 cout << "Enter 10 values: ";
 
 for(int i=0;i<10;i++)
 {
 	cin >> y;
 	x[i]=y;		// Allocates the inputs to the vector at increasing positions
 }
 
 for (int j=0;j<x.size();j++)
 {
 	cout << "\nVector[" << j << "] = " << x[j] << endl;		// Displays vector values at specified values
 }
 
    return 0;
}
