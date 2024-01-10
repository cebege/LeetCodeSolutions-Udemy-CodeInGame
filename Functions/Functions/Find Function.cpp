#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void find_number(const vector <int>& v);

int main() {

	vector <int> numbers{10,20,30};

	find_number(numbers);
}

void find_number(const vector <int>& v)
{
	int target_number{};
	cin >> target_number;
	auto found = find(v.begin(), v.end(), target_number);
	if (found == v.end())
	{
		cout << target_number << " not found in range." << endl;
	}
	else
	{
		cout << "Found" << endl;
	}
}