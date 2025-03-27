 //		______	   ___		  ___
//		  /		  /	  \		 /   \
//		 /		 /			/
//		/		 \___/		\___/
//		
// Date: 10/20/2018
// Name: Ramon Veal
// Project: #2
// Program Description: Calculates inductive reactance, capacitive reactance, total circuit impedance, and current,
//						given resistance, inductance, capacitance, current, voltage, and frequency.
//
//***************************************************

#include <iostream>	
#include <iomanip>
#include <cmath>
using namespace std;

double INDUCTIVE (double, double);
double CAPACITIVE (double, double);
double IMPEDANCE (double, double, double);
double CURRENT (double, double);

int main ()
{
	double R, E, C, L, fINITIAL, fFINAL, XL, XC, Z, I;
	string C_units, L_units, f_units;
	
	cout << "Enter the resistance, in ohms: ";
	cin >> R;
	
	if (R<0)
	{
		cout << "Resistance cannot be negative. Enter the resistance, in ohms: ";
		cin >> R;
	}
	
	cout << "Enter the voltage, in volts: ";
	cin >> E;
	
	if (E<0)
	{ 
		cout << "Voltage cannot be negative. Enter the voltage, in volts: ";
		cin >> E;
	}
	
	cout << "Enter the capacitance in either mF, uF, or nF. Specify which units you're using: ";
	cin >> C >> C_units;
	
	if (C<0)
	{
		cout << "Capacitance cannot be negative. Enter the capacitance: ";
		cin >> C;
	}
	
	if (C_units=="mF")
	{
		C/=1000;
	}
	else if (C_units=="uF")
	{
		C/=1000000;
	}
	else
	{
		C/=1000000000;
	}
	
	cout << "Enter the inductance in either mH or uH. Specify which units you're using: ";
	cin >> L >> L_units;
	
	if (L<0)
	{
		cout << "Inductance cannot be negative. Enter the inductance: ";
		cin >> L;
	}
	
	if (L_units=="mH")
	{
		L/=1000;
	}
	else
	{
		L/=1000000;
	}
	
	cout << "Enter the initial frequency, followed by the final frequency, and then the units. Specify whether you're using Hz, kHz, or MHz: ";
	cin >> fINITIAL >> fFINAL >> f_units;
	
	if (fINITIAL<1)
	{
		cout << "The initial frequency must be at least 1. Enter a new initial frequency: ";
		cin >> fINITIAL;
	}
	
	if (fFINAL>1000000000 || fFINAL<2*fINITIAL)
	{
		cout << "The final frequency must be more than twice the initial frequency, and less than 1 billion. Enter a new final frequency: ";
		cin >> fFINAL;
	}
	
	if (f_units=="kHz")
	{
		fINITIAL*=1000;
		fFINAL*=1000;
	}
	else if (f_units=="MHz")
	{
		fINITIAL*=1000000;
		fFINAL*=1000000;
	}
	
	XL=INDUCTIVE(fINITIAL,L);
	XC=CAPACITIVE(fINITIAL,C);
	Z=IMPEDANCE(R,XL,XC);
	I=CURRENT(E,Z);
	
	// Header
	cout << setw(10) << "Freq(Hz)" << setw(10) << "XC(\352)" << setw(10) << "XL(\352)" << setw(10) << "Z(\352)" << setw(7) << "I(mA)" << endl;
	cout << fixed << setw(10) << static_cast<int>(fINITIAL) << showpoint << setprecision(1) << setw(10) << XC << setw(10) << XL << setw(10) << 
	Z << setprecision(3) << setw(7) << I << endl;

	// Results
	do
	{
		fINITIAL*=2;	
		XL=INDUCTIVE(fINITIAL,L);
		XC=CAPACITIVE(fINITIAL,C);
		Z=IMPEDANCE(R,XL,XC);
		I=CURRENT(E,Z);
	
		cout << fixed << setw(10) << static_cast<int>(fINITIAL) << showpoint << setprecision(1) << setw(10) << XC << setw(10) << XL << setw(10) << 
		Z << setprecision(3) << setw(7) << I << endl;
	}
	while (fINITIAL<=fFINAL);

	return 0;	 
}

double INDUCTIVE (double frequency, double inductance)
{
	double XL=2*M_PI*frequency*inductance;
	return XL;
}

double CAPACITIVE (double frequency, double capacitance)
{
	double XC=-1/(2*M_PI*frequency*capacitance);
	return XC;
}

double IMPEDANCE (double resistance, double iReactance, double cReactance)
{
	double Z=pow(resistance*resistance+pow(iReactance+cReactance,2),1.0/2);
	return Z;
}

double CURRENT (double voltage, double impedance)
{
	double I=voltage/impedance*1000;
	return I;
}
