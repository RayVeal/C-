 //		______	   ___		  ___
//		  /		  /	  \		 /   \
//		 /		 /			/
//		/		 \___/		\___/
//		
// Date: 9/17/17
// Name: Ramon Veal
// Project:
// Inputs: weight
// Outputs: shipping cost
// Program Description: displays the shipping cost, given the weight of the package
//
//
//***************************************************

#include <iostream>		//header containing cout and cin

using namespace std;	// introduces namespace std needed to use cout and cin

int main ()
{
int w;		// allocate space for variables

cout << "Enter the weight of the package in pounds: \n";		// prompt user to enter values for weight

cin >> w;		// accept input

// create parameters and display cost
if (w>0&&w<=1)
cout << "The shipping cost is $3.50";

else if (w>1&&w<=3)
cout << "The shipping cost is $5.50";

else if (w>3&&w<=10)
cout << "The shipping cost is $8.50";

else if (w>10&&w<=20)
cout << "The shipping cost is $10.50";

else
cout << "The package cannot be shipped.";

		return 0;	 
}
