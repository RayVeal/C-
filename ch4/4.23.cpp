 //		______	   ___		  ___
//		  /		  /	  \		 /   \
//		 /		 /			/
//		/		 \___/		\___/
//		
// Date: 
// Name: Ramon Veal
// Project:
// Inputs: 
// Outputs: 
// Program Description: 
//
//
//***************************************************

#include <iostream>		//header containing cout and cin
#include <iomanip>		//header containing string and modifiers

using namespace std;	// introduces namespace std needed to use cout and cin

int main ()
{
string ssn;

cout << "Enter a social security number: \n";
cin >> ssn; 

if (ssn.length()==11 && ssn.at(3)=='-' && ssn.at(6)=='-')
cout << ssn << " is a valid social security number.";

else
cout << ssn << " is an invalid social security number.";
	
		return 0;	 
}
