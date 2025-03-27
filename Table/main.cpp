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
#include <iomanip>

using namespace std; //introduces namespace std

int main ( void )
{
 float r1, r2, r3, SA1, SA2, SA3, V1, V2, V3;
 
 cout << "Please enter 3 different radius values: \n";
 cin >> r1 >> r2 >> r3;
 
SA1=4*M_PI*pow(r1,2);
SA2=4*M_PI*pow(r2,2);
SA3=4*M_PI*pow(r3,2);

V1=4/3*M_PI*pow(r1,3);
V2=4/3*M_PI*pow(r2,3);
V3=4/3*M_PI*pow(r3,3);

cout << "Radius(m)" << setw(19) << "Surface Area(m^2)" << setw(13) << "Volume(m^3)" << endl;
cout << setw(41) << setfill('*') << "*" << setfill(' ') << endl;		//after setfill, set another fill w/ empty space to stop filling

cout << setw(9) << fixed << setprecision(1) << r1 << setw(19) << setprecision(2) << SA1 << setw(13) << V1 << endl;		//precision and fixed will be set for everything after
cout << setw(9) << fixed << setprecision(1) << r2 << setw(19) << setprecision(2) << SA2 << setw(13) << V2 << endl;		//set new perameters to remove
cout << setw(9) << fixed << setprecision(1) << r3 << setw(19) << setprecision(2) << SA3 << setw(13) << V3 << endl;
 
 
    return 0;
}
