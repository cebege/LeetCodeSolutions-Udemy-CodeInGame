#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void display_menu();
char get_selection();
void add_numbers(vector<int>& v);
void print_numbers(const vector<int>& v);
void mean_numbers(vector<int>& v);
void find_numbers(vector<int>& v);

int main() {

	vector <int> numbers{10, 20, 30};
	char selection{};

	do
	{
		display_menu();
		selection = get_selection();

		switch (selection)
		{
		case 'A':
		{
			add_numbers(numbers);
			break;
		}
		case 'P':
		{
			print_numbers(numbers);
			break;
		}
		case 'M':
		{
			mean_numbers(numbers);
			break;
		}
		case 'F':
		{
			find_numbers(numbers);
			break;

		}


		}




	} while ('Q' != selection);

		cout << "Thank you." << endl;
}

void display_menu()
{
	cout << "Print" << endl;
	cout << "Add" << endl;
	cout << "Mean" << endl;
	cout << "Largest" << endl;
}

char get_selection()
{
	char selection{};
	cin >> selection;
	return toupper(selection);
}

void add_numbers(vector<int>& v)
{
	int added_number{};
	cout << "Enter an integer to add: ";
	cin >> added_number;
	v.push_back(added_number);
	cout << added_number << " has been included in the array" << endl;
}

void print_numbers(const vector<int>& v)
{
	if (v.size() == 0)
	{
		cout << "There are no numbers in the vector." << endl;
	}
	else
	{
		for (auto num : v)
		{
			cout << "The numbers are: [" << num << "]." << endl;
		}
	}
}

void mean_numbers(vector<int>& v)
{
	int total{};
	double mean{};
	for (auto num : v)
	{
		total += num;
	}
	mean = static_cast<double> (total) / v.size();
	cout << "The mean is " << mean << "." << endl;
	}

void find_numbers(const vector<int>& v)
{
	int number_to_find{};
	cin >> number_to_find;
	auto it_found = find(v.begin(), v.end(), number_to_find);
	int index = it_found - v.begin();
	cout << index;

}

