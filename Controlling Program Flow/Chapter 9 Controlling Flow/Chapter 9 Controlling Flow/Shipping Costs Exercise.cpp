// Section 9 
// Shipping Costs
/*

Shipping cost calculator

Ask the user for package dimension in inches
length, width, height - these should be integers

All dimension must be 10 inches or less or we cannot ship it

Base cost $2.50
if package volume is greater than 100 cubic inches there is a 10% surcharge
if package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double length;
	double width;
	double height;
	double base_cost{ 2.5 };
	double surcharge_percentage1{ 0.1 };
	double surcharge_percentage2{ 0.25 };
	double surcharge1;
	double surcharge2;
	double total1;
	double total2;

	cout << fixed << setprecision(2);

	// NEXT TIME : DEFINE MAXIMUMS AND MINIMUMS AS CONSTANTS

	cout << "Please enter the dimensions of your package in inches: " << endl;
	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "height: ";
	cin >> height;

	if (length < 10 || length > 0 || width < 10 || width > 0 || height < 10 || height > 0)
	{
		cout << "Thank you, we are able to process this order." << endl;

		if ((length * width * height) > 100 && (length * width * height) <= 500)
		{
			cout << "The package volume is greater than 100 cubic inches, there will be a 10% surcharge on this order." << endl;
			surcharge1 = base_cost * surcharge_percentage1;
			total1 = base_cost + surcharge1;
			cout << "The surcharge cost for this order will be: $" << surcharge1 << endl;
			cout << "The total cost for this order will be: $" << total1 << endl;
		}
		else if ((length * width * height) > 500)
		{
			cout << "The package volume is greater than 500 cubic inches, there will be a 25% surcharge on this order." << endl;
			surcharge2 = base_cost * surcharge_percentage2;
			total2 = base_cost + surcharge2;
			cout << "The surcharge cost for this order will be: $" << surcharge2 << endl;
			cout << "The total cost for this order will be: $" << total2 << endl;
		}
		else
		{
			cout << "The total cost for this order will be: $" << base_cost << endl;
		}
	}
	else
	{
		cout << "The dimensions entered are too large to process a shipping order." << endl;
	}

}