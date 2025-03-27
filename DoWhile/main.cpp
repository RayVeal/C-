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
//OPTION 1
	
	/*
	int N=0, value;
	
	do
	{
		N++;
		value=pow(N,3)-2*pow(N,2);
		cout << N << '\t' << value << endl;
	 } 
	 
	 while (value<100000);
	 
	 cout << "\nResult is " << N-1;
	 */

//OPTION 2 (Better)
	 
	 int N=50, value;
	do
	{
		N--;
		value=pow(N,3)-2*pow(N,2);
		cout << N << '\t' << value << endl;
	 } 
	 
	 while (value>100000);
	 
	 cout << "\nResult is " << N;
 
    return 0;
}
