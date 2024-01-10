#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};

	//cout << "Please enter your first name: ";
	//cin >> first_name;

	//cout << "\nPlease enter your last name: ";
	//cin >> last_name;

	//cout << "\nHello " << first_name << ", your first name has " << strlen(first_name) << " characters" << endl;
	//cout << "\nYour last name is " << last_name << ", your last name has " << strlen(last_name) << " characters" << endl;

	//strcpy_s(full_name, first_name);
	//strcat_s(full_name, " ");
	//strcat_s(full_name, last_name);

	//cout << "\nYour full name is " << full_name << endl;

	cout << "Please enter you full name: ";
	cin.getline(full_name, 50);
	cout << "Your full name is " << full_name << endl;

	strcpy_s(temp, full_name);
	if (strcpy_s(temp, full_name) == 0)
	{
		cout << temp << " and " << full_name << " are the same." << endl;
	}
	else
	{
		cout << temp << " and " << full_name << " are not the same." << endl;
	}

	for (size_t i{ 0 }; i < strlen(full_name); ++i)
		if (isalpha(full_name[i]))
			full_name[i] = toupper(full_name[i]);
	cout << "your full name is: " << full_name;



}