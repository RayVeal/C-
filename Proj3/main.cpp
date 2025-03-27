// 		______	   ___		  ___
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

#include <iostream>	
#include <fstream>
#include <iomanip>

using namespace std;

const int size=30;
void VELOCITY(double[], double[], double[], int);
void V_MPH(double[], double[], double[], int);
void ACCEL(double[], double[], double[], int);
double MAX(double[],int);

int main ()
{
	string filename, newfile, vehicle, date, driver;
	double time[size], x[size], velocity[size], mph[size], accel[size], v_avg, a_avg, v_max, a_max;
	int j;
	
	cout << "Which file would you like to open? (ex. CAR1.DAT, CAR2.DAT, etc.): ";
	cin >> filename;
	
	cout << "Name the file that you'd like to send data to (Ending in .DAT): ";
	cin >> newfile;
	
	ofstream outfile(newfile.c_str());
	ifstream infile(filename.c_str());
	
	outfile << endl;
	getline(infile, vehicle);
	getline(infile, date);
	getline(infile, driver);
	
	// Header
	outfile << vehicle << endl << date << endl << driver << endl;
	outfile << left << setw(10) << "Time(s)" << setw(14) << "Distance(ft)" << setw(16) << "Velocity(ft/s)"
	  << setw(15) << "Velocity(mph)" << setw(22) << "Acceleration(ft/s^2)" << endl;
	
	for (j=0; !infile.eof(); j++)
	{
		infile >> time[j] >> x[j];
		outfile << time[j] << "," << x[j] << ",";
		VELOCITY(velocity,time,x,j);
		V_MPH(mph,time,x,j);
		ACCEL(accel,time,x,j);
		
		outfile << fixed << setprecision(1) << velocity[j] << "," << setprecision(1) << mph[j] << "," << setprecision(1) << accel[j] << endl;
	}
	
	v_max=MAX(mph,j);
	a_max=MAX(accel,j);
	
	outfile << endl << v_max << "," << a_max;
	
	infile.close();
	
	return 0;	 
}

void VELOCITY(double velocity[size], double time[size],double x[size], int j)
{
	if (time[j]==0)
	{
		velocity[j]=0;
	}
	else
	velocity[j]=(x[j]-x[j-1])/(time[j]-time[j-1]);	
}

void V_MPH(double mph[size], double time[size],double x[size], int j)
{
	if (time[j]==0)
	{
		mph[j]=0;
	}
	else
	mph[j]=(x[j]-x[j-1])/(time[j]-time[j-1])*3600/5280.0;	
}

void ACCEL(double accel[size], double time[size],double x[size], int j)
{
	if (time[j]==0)
	{
		accel[j]=0;
	}
	else
	accel[j]=(((x[j]-x[j-1])/(time[j]-time[j-1]))-((x[j-1]-x[j-2])/(time[j-1]-time[j-2])))/(time[j]-time[j-1]);
}

double MAX(double array[],int j)
{
	double max=0;
	for (int i=0; i<=j; i++)
	{
		if (array[i]>max)
		max=array[i];
	}
	
	return max;
}
