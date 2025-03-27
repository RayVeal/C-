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
#include <iomanip>
#include <cmath>		//using for pi

using namespace std;	// introduces namespace std needed to use cout and cin

int main ()
{
float r1, d1, c1, a1, r2, d2, c2, a2;

cout << "Enter the radii for two separate circles in centimeters: \n";
cin >> r1 >> r2;

a1=M_PI*pow(r1,2);
a2=M_PI*pow(r2,2);

c1=2*M_PI*r1;
c2=2*M_PI*r2;

d1=2*r1;
d2=2*r2;

cout << "\nTable 1: \n";
cout << left << setw(13) << "Radius(cm)" << setw(15) << "Diameter(cm)" << setw(20) << "Circumference(cm)" << setw(13) << "Area(cm^2)" << endl;
cout << left << fixed << setprecision(3) << showpoint << setw(13) << r1 << setw(15) << d1 << setw(20) << c1 << setw(13) << a1 << endl;
cout << left << fixed << setprecision(3) << showpoint << setw(13) << r2 << setw(15) << d2 << setw(20) << c2 << setw(13) << a2 << endl;

cout << "\nTable 2: \n";
cout << left << setw(13) << "Radius(cm)" << setw(15) << "Diameter(cm)" << setw(20) << "Circumference(cm)" << setw(13) << "Area(cm^2)" << endl;
cout << right << fixed << setprecision(5) << showpoint << setw(10) << r1 << setw(15) << d1 << setw(20) << c1 << setw(13) << a1 << endl;
cout << right << fixed << setprecision(5) << showpoint << setw(10) << r2 << setw(15) << d2 << setw(20) << c2 << setw(13) << a2 << endl;

cout << "\nTable 3: \n";
cout << left << setw(13) << "Radius(cm)" << setw(15) << "Diameter(cm)" << setw(20) << "Circumference(cm)" << setw(13) << "Area(cm^2)" << endl;
cout << left << scientific << setprecision(2) << showpoint << setw(13) << r1 << setw(15) << d1 << setw(20) << c1 << setw(13) << a1 << endl;
cout << left << scientific << setprecision(2) << showpoint << setw(13) << r2 << setw(15) << d2 << setw(20) << c2 << setw(13) << a2 << endl;
	
		return 0;	 
}
