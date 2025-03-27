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
#include <iomanip>

using namespace std; //introduces namespace std

int main ( void )
{
 	int start, TotalDays, day, weekend;
	
	cout << "Please enter the month's start day (Sunday is 0, Monday is 1, etc...): ";
	cin >> start;
	cout << "Please enter the number of days in the month: ";
	cin >> TotalDays;
	
	weekend=7-start;
	
	cout << "\n\nSun Mon Tue Wed Thu Fri Sat" << endl;		// Header
	cout << "--- --- --- --- --- --- ---" << endl;
	
	cout << setw(4*start+3) << "1" << " ";			// Start under correct weekday
	
	for (day=2;day<=TotalDays;day++)		// Arrive at corect number of days
	{
		cout << setw(3) << day << " ";
		
		if (!((day+start)%7))		// Starts a new line if the sum of the start and end of week sum is divisible by 7
		{
			cout << endl;
		}
	}
    return 0;
}
