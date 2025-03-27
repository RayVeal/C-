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
	const int RowSize=2, ColSize=3;
	int A[RowSize][ColSize]={1,2,3
							,4,5,6};
							
	int B[RowSize][ColSize]={7,8,9
							,10,11,12};
							
	int C[RowSize][ColSize];
		
	cout << "Matrix C: \n";
	
	for (int row=0; row<RowSize; row++)
	{
		for (int col=0; col<ColSize; col++)
		{
			C[row][col]=A[row][col]+B[row][col];
			
			cout << setw(3) << C[row][col];
		}
		cout << endl;
	}
 
    return 0;
}
