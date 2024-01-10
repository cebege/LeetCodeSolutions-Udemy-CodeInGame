// Pointer Arithmetic

#include <iostream>

using namespace std;

int main() {

	int scores[]{ 100, 95, 89,68, -1 };
	int* score_ptr{ scores };

	while (*score_ptr != -1)
	{
		cout << *score_ptr << endl;
		score_ptr++;
	}

	cout << " ---------------------------";

	score_ptr = scores;
	while (*score_ptr != -1)
	{
		cout << *score_ptr++ << endl; // TWO OPERATORS, SAME PRECEDENT, LOOK AT ASSOIATIVITY, FROM RIGHT TO LEFT
	}

	cout << " ---------------------------" << endl;

	cout << boolalpha;
	string s1{ "Conor" };
	string s2{ "Conor" };
	string s3{"Joanna"};
	string s4{ "Calvin" };

	string* p1{ &s2 };
	string* p2{ &s1 };
	string* p3{ &s1 };
	string* p4{ &s3 };

	cout << "\np1 is equal to p3 " << (p1 == p2); // false, brackets are important.
	cout << "\np2 is equal to p3 " << (p2 == p2); // true
	cout << "\n*p1 is equal to *p2 " << (*p1 == *p2) << endl; // true

}