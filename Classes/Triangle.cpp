#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Triangle.h"

using namespace std;
	
	// Constructors only run ONCE. To change values, use another function (like Read_Sides)
	
		Triangle::Triangle(double NewSide1, double NewSide2, double NewSide3)		// Constructor implementation for assigning values within the main program
	{
		Side1=NewSide1;
		Side2=NewSide2;
		Side3=NewSide3;
	}
	
	// This constructer is used if variables aren't initialized in the main function
	Triangle::Triangle()		// Constructor implementation for no arguments
	{
		Side1=3;
		Side2=4;
		Side3=5;
	}
	
	double Triangle::Find_Perimeter()
	{
		double perimeter;
		perimeter=Side1+Side2+Side3;
		return perimeter;
	}
	
	double Triangle::Find_Area()
	{
		double area,s;
		s=(Side1+Side2+Side3)/2;
		area=pow(s*(s-Side1)*(s-Side2)*(s-Side3),1.0/2);
		return area;
	}
	
	bool Triangle::Test_if_Valid()
	{
		bool validity;
		if (Side1+Side2<Side3 || Side1+Side3<Side2 || Side2+Side3<Side1)
		{
			validity=1;
		}
		else
		{
			validity=0;
		}
		
		return validity;
	}
	
	void Triangle::Find_Angles()		// Angles in radians
	{
		Angle1=acos((Side2*Side2+Side3*Side3-Side1*Side1)/(2*Side2*Side3));
		Angle2=acos((Side1*Side1+Side3*Side3-Side2*Side2)/(2*Side1*Side3));
		Angle3=acos((Side1*Side1+Side2*Side2-Side3*Side3)/(2*Side2*Side1));
	}
	
	void Triangle::Print_Angles()
	{
		cout << fixed << setprecision(2) << Angle1*180/M_PI << " " << Angle2*180/M_PI << " " << Angle3*180/M_PI << endl;
	}
	
	void Triangle::Print_Sides()
	{
		cout << Side1 << " " << Side2 << " " << Side3 << endl;
	}
	
	void Triangle::Read_Sides()
	{
		cout << "Enter the dimensions for the triangle's sides: \n";
		cin >> Side1 >> Side2 >> Side3;
	}
