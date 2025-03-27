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

int main ( void )
{
 float grade, sum, qty, avg;
 
 cout << "Please enter a grade: \n";
 cin >> grade;
 
 qty=0;
 sum=0;
 
 while(grade>=0&&grade<=100)
 {
 	++qty;				//increment the count before you ask for next grade
 	sum+=grade;			//if incremented after, then an invalid number will be factored into sum
 	
 	cout << "Please enter another grade : \n";
 	cin >> grade;
 }
 
 cout << "You've entered an invalid grade. Please enter -1: \n";		//sentinel (flag) signals start/end of  data series
 cin >> grade;
 
 avg=sum/qty;
 
 cout << "The average grade is " << avg;
 
    return 0;
}
