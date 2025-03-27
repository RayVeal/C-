 //		______	   ___		  ___
//		  /		  /	  \		 /   \
//		 /		 /			/
//		/		 \___/		\___/
//		
// Date: 9/5/18 
// Name: Ramon Veal
// Project:
// Inputs: Integer between 0 and 1000
// Outputs: Sum of integer's digits
// Program Description: Reads an integer between 0 and 1000 and adds all the digits in the integer
//
//
//***************************************************

#include <iostream>		//header containing cout and cin

using namespace std;	// introduces namespace std needed to use cout and cin

int main ()
{
int x;		// Allocate space for variables

cout << "Enter an integer between 0 and 1000" << endl;		// Prompt user to enter a value

cin >> x;		// Accept integer value

cout << "The sum of the digits in " << x << " is " << x/100+x%10+x/10%10;		// Output results

		return 0;	 
}
