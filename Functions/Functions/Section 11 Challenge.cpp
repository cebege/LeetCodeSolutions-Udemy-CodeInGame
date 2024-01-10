#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void get_display();
char get_selection(); // returning a char, input is nothing as the input is handled within the function and wont require anything from the main.
void handle_display(const vector <int>& v);
void display_numbers(const vector <int>& v);
void add_numbers(vector <int>& v);
void mean_number(vector <int>& v);
void largest_number(vector <int>& v);

int main() {

	vector <int> numbers{};
	char selection{};

	do
	{
		get_display();
		selection = get_selection();

		switch (selection) {
		case 'P':
		{
			handle_display(numbers);
			break;
		}
		case 'A':
		{
			add_numbers(numbers);
			break;
		}
		case 'M':
		{
			mean_number(numbers);
			break;
		}
		case 'L':
		{
			largest_number(numbers);
			break;
		}
		}
	} while (selection != 'Q' && selection != 'q');

	cout << "Thank you." << endl;
}

void get_display()
{
	cout << "P - Print" << endl;
	cout << "A - Add" << endl;
	cout << "M - Mean" << endl;
	cout << "L - Largest" << endl;
	cout << "S - Smallest" << endl;
	cout << "Q - Quit" << endl;
	cout << "Enter your selection: " << endl;
}

char get_selection()
{
	char selection{};
	cin >> selection;
	return toupper(selection);
}

void handle_display(const vector <int>& v)
{
	if (v.size() == 0)
	{
		cout << "There are no numbers in the vector." << endl;
	}
	else
	{
		display_numbers(v);
	}
}

void display_numbers(const vector <int>& v)
{
	for (auto nums : v)
	{
		cout << "[" << nums << "]" << endl;
	}
}

void add_numbers(vector <int>& v)
{
	int number_add{};
	cout << "Enter the number you would like to add: ";
	cin >> number_add;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input " << endl;
		cout << "Try again" << endl;
	}
	else
	{
		v.push_back(number_add);
		cout << number_add << " has been added to the vector." << endl;
	}
}

void mean_number(vector <int>& v)
{
	int total{};
	double mean{};
	if (v.size() == 0)
	{
		cout << "Divide by zero error." << endl;
	}
	else
	{
		for (auto num : v)
		{
			total += num;
		}
		mean = static_cast <double> (total) / v.size();
	}
	cout << "The mean number is " << mean << endl;
}

void largest_number(vector <int>& v)
{
	int largest{};
	for (auto num : v)
	{
		largest < num;
		largest = num;
	}
	cout << "The largest number is " << largest << endl;
}