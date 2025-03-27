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
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std; //introduces namespace std

int main ( void )
{
	ifstream infile("sides.txt");		// File that info comes from
	
	int x,y,z;
	
	// Notepad file
	
	/*
	ofstream outfile("hypotenuse.dat");		// File the info goes to
	
	outfile << left << setw(6) << "Base" << setw(8) << "Height" << "Hypotenuse" << endl;		// Outputs header
	
	for (int i=0; i<5; i++)
	{
		infile >> x >> y;		// Accept 2 new values each time the loop is executed
		
		z=pow(x*x+y*y,1.0/2);
		
		outfile << left << setw(6) << x << setw(8) << y << z << endl;
	}
	*/
	
	// Excel file. After running, must open from excel (See powerpoint)
	
	ofstream outdata("OutToExcel.dat");
	
	outdata << "Base" << "," << "Height" << "," << "Hypotenuse" << endl;
	
		for (int i=0; i<5; i++)
	{
		infile >> x >> y;		// Accept 2 new values each time the loop is executed
		
		z=pow(x*x+y*y,1.0/2);
		
		outdata << x << "," << y << "," << z << endl;
	}
 
    return 0;
}
