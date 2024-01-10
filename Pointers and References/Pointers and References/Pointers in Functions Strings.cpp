#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(vector<string>* ptr);

int main() {

	vector <string> username{"Conor", "Sally"};

	display(&username);
}

void display(vector<string>* ptr)
{
	cout << "User names enter are: ";
	for (auto i : *ptr)
	{
		cout << i << " ";
	}
	(*ptr)[0] = "Calvin";
	for (auto i : *ptr)
	{
		cout << i << " ";
	}
}