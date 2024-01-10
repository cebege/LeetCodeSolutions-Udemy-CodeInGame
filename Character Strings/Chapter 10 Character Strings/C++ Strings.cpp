#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	string s1{ "Conor is 28 years old." };
	string s2{ "Shahak" };
	string s3{ "Joanna" };
	string fullname{};
	string word{};

	for (size_t i{}; i < s1.length(); ++i)
		cout << s1.at(i);
	cout << endl;

	for (char c : s2)
		cout << c;
	cout << endl;

	cout << s1.substr(0, 5);
	cout << endl;

	s1.erase(4, 1);
	cout << s1;
	cout << endl;


	cout << "Enter you full name: ";
	getline(cin, fullname);
	cout << fullname << endl;


	cout << "Enter a word to find: ";
	cin >> word;
	size_t position = s1.find(word);
	if (position != string::npos)
		cout << "Found " << word << " at position " << position << endl;
	else
	{
		cout << "Sorry, " << word << "was not found." << endl;
	}

	// Alphabetical transfer

	string journal_entry_1{ "Isaac Newton" };
	string journal_entry_2{ "Leibniz" };

	journal_entry_1.erase(0, 6);

	if (journal_entry_2 < journal_entry_1)
		journal_entry_2.swap(journal_entry_1);


	if (journal_entry_1 > journal_entry_2)
		journal_entry_1.swap(journal_entry_2);
}