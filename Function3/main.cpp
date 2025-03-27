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

void TIME2(int,int&,int&,int&);

int main ( void )
{
	int seconds, sec, min, hours;
	
 	cout << "Enter time in seconds: \n";
 	cin >> seconds;
 	
 	TIME2(seconds,sec,min,hours);
 	
 	cout << hours << " hours, " << min << " minutes, and " << sec << " seconds.";
 	
    return 0;
}

void TIME2(int SECONDS,int& SEC,int& MIN,int& HOURS)
{
	HOURS=SECONDS/3600.;
	MIN=SECONDS%3600/60;
	SEC=SECONDS%3600%60;
}
