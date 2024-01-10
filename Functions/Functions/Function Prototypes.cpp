#include <iostream>
#include <iomanip>

using namespace std;

double calc_area_cricle(double radius);
double calc_volume_cylinder(double height, double radius);
void area_circle();
void volume_cylinder();

const double pi{ 3.142 };

int main() {

	area_circle(); // no need for cout << 
	volume_cylinder();

	return 0;
}

double calc_area_cricle(double radius) { // specify type that goes into function.
	return pi * radius * radius;
}

double calc_volume_cylinder(double height, double radius) {
	return calc_area_cricle(radius) * height;
}

void area_circle() { // not returning a value so is a void function
	double radius{};
	cout << "\nEnter radius of circle: ";
	cin >> radius;
	cout << "The area of circle is " << calc_area_cricle(radius);
}


void volume_cylinder() {
	double radius{};
	double height{};
	cout << "Enter height of cylinder: ";
	cin >> height;
	cout << "Enter radius of cylinder: ";
	cin >> radius;
	cout << "The volume of a circle is " << calc_volume_cylinder(radius, height);
}