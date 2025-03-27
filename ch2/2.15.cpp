/*     ____   __     __
        /   /   \  /   \
       /   /      /
      /    \___/  \___/

 Date: 9/4/18
 Name: Ramon Veal
 Project Description: Given 2 points, displays the distance between them
 Inputs: x1, y1, x2, and y2
 Outputs: Distance
*/
//*************************************************************

#include <iostream>
#include <string>
#include <cmath>	//Allows usage of pow

using namespace std; //introduces namespace std

int main ( void )
{
 float x1, y1, x2, y2, distance;		//Allocate space for variables
 
 cout << "Enter x1, y1, x2, and then y2" << endl;		//Prompt user to enter points
 
 cin >> x1 >> y1 >> x2 >> y2;		//Accept values
 
 distance=pow(pow(x2-x1,2)+pow(y2-y1,2),0.5);		//Define distance
 
 cout << "The distance between the two points = " << distance;		//Display results
 
    return 0;
}
