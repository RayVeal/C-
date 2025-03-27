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

using namespace std;	// introduces namespace std needed to use cout and cin

int main ()
{
char grade;

cout << "Enter a letter grade: \n";
cin >> grade;

if (grade=='A'||grade=='a')
{
	cout << "The numerical value for grade " << grade << " is 4";
}
else if (grade=='B'||grade=='b')
{
	cout << "The numerical value for grade " << grade << " is 3";
}
else if (grade=='C'||grade=='c')
{
	cout << "The numerical value for grade " << grade << " is 2";
}
else if (grade=='D'||grade=='d')
{
	cout << "The numerical value for grade " << grade << " is 1";
}
else if (grade=='F'||grade=='f')
{
	cout << "The numerical value for grade " << grade << " is 0";
}
else
{
	cout << grade << " is and invalid grade.";
}
	
		return 0;	 
}
