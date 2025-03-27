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

double MatrixAvg(const double[3][4]);

int main ( void )
{
	const int RowSize=3, ColSize=4;
	
	double A[RowSize][ColSize]={1,2,3,4
								,5,6,7,8
								,9,10,11,12};
							
	cout << MatrixAvg(A);
 
    return 0;
}

double MatrixAvg(const double A[3][4])
{
	double total=0, i=0, avg;
	
	for (int row=0; row<3; row++)
	{
		for (int col=0; col<4; col++)
		{
			total+=A[row][col];
			i++;
		}
	}
	avg=total/i;		// row*col also works instead of i
	
	return avg;
}
