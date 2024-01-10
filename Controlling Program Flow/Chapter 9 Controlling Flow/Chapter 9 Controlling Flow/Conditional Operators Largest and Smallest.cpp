#include <iostream>

using namespace std;

int main() {

	int num1;
	int num2;
	cin >> num1;
	cin >> num2;

	if (num1 != num2)
	{
		cout << "The largest number is " << ((num1 > num2) ? num1 : num2) << endl;
		cout << "The smallest number is " << ((num1 < num2) ? num1 : num2) << endl;
	}

	else
	{
		cout << "The numbers are the same." << endl;
	}
}