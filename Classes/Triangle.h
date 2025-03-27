class Triangle
{
	private:
		double Side1, Side2, Side3, Angle1, Angle2, Angle3;
		
	public:
		Triangle();		// Constructor for initializing variables with predetermined values
		Triangle(double, double, double);		// Constructor for input values. Replace the "doubles" with values.
		void Read_Sides();
		void Print_Sides();
		void Print_Angles();
		void Find_Angles();
		bool Test_if_Valid();
		double Find_Area();
		double Find_Perimeter();
};
