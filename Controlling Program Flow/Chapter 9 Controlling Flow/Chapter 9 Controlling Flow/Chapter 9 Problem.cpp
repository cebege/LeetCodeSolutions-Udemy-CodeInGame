// Your program should display a menu of options to the user as follows:
// P - Print Numbers
// A - Add a number
// M - Dispay a mean of numbers
// S - Display the smallest number
// L - Display the largest number
// Q - Quit

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

	vector <int> numbers{};
	char selection;


	do
	{
		// Display menu
		cout << "\nP - Print" << endl;
		cout << "A - Add" << endl;
		cout << "Q - quit" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Smallest Number" << endl;
		cout << "L - Largest Number" << endl;
		cout << "Q - Quit" << endl;
		cout << "\nEnter your choice: " << endl;
		cin >> selection;

		if (selection == 'P' || selection == 'p')
		{
			if (numbers.size() == 0)
			{
				cout << "[] - list is empty." << endl;
			}
			else
			{
				cout << "[ ";
				for (auto num : numbers)
					cout << num << " ";
				cout << "] ";
			}
		}
		else if (selection == 'A' || selection == 'a')
		{
			int added_number;
			cout << "Enter a number you would like to add: ";
			cin >> added_number;
			numbers.push_back(added_number);
			cout << added_number << " has been added to the numbers.";
		}
		else if (selection == 'M' || selection == 'm')
		{
			int total{};
			for (auto num : numbers)
				total += num;
			cout << "The mean is: " << static_cast <double> (total) / numbers.size() << endl;
		}



	} while (selection != 'q' && selection != 'Q');
}