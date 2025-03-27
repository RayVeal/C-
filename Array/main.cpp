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

double max_value(const double [], int);

int main ( void )
{
	const int size=8;		// ALWAYS use const int for array size!
 	double array[8]={1,2,3,4,5,6,7,8};
 	double max=max_value(array,size);
 	cout << max;
 
    return 0;
}

double max_value(const double array[], int size)
{
	double max=0;
	
	for (int i=0; i<size; i++)
	{
		if (array[i]>max);
		max=array[i];
	}
	
	return max;
}
