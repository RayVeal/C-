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
#include <fstream>

using namespace std; //introduces namespace std

int main ( void )
{
	int beginwith[26]={0};
	int count=0, lettercount=0, fourletters=0, ecount=0;
	string filein, dummystring;
 	
 	cout << "Please enter a file name: ";
 	cin >> filein;
 	ifstream infile(filein.c_str());
 	
 	while(infile.fail())
 	{
 		infile.clear();
 		cout << "The file did not open correctly. Verify that the file is in the project folder and you entered the correct name, with the extension. Reenter file name: ";
 		cin >> filein;
 		infile.open(filein.c_str());
	}
 	
 	while (!infile.eof())		// Continues loops below until file ends
 	{
 		infile >> dummystring;		// A string for each word in the file
		count++;
		lettercount+=dummystring.length();		// counts non-whitespace characters
		
		if(dummystring.length()==4)			
		{
			fourletters++;
		}
		
		for (int j=0; j<26; j++)		// Checks how many words start with each letter
		{
			if (dummystring[0]==97+j || dummystring[0]==65+j)
			{
				beginwith[j]++;
			}
		}
		
		for(int i=0; i<dummystring.length(); i++)		// Checks if a word contains the letter 'e'
		{
			if (dummystring[i]=='e')
			ecount++;
		}
	}
	
	infile.close();
	
	cout << "File has " << count << " words." << endl;
	cout << "File has " << lettercount << " letters." << endl;
	cout << "File has " << fourletters << " 4-letter words." << endl;
	
	for (int j=0; j<26; j++)
	{
		if (beginwith[j]!=0)
		{
			cout << beginwith[j] << " word(s) start with " << static_cast<char>(65+j) << endl;
		}
	}
 
    return 0;
}
