// Fundamental Concepts

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int* p{};
	double* p2{};
	unsigned long long* p3{};
	vector <int> *p4{};
	string *p5{};

	int score{ 10 };
	//double high_temp{ 100.7 };
	int* score_ptr{ &score };


	cout << "The value of p is: " << p << endl; // garbage data - the pointer is pointing "anywhere".
	cout << "The size of p is " << &p << endl; // points to the location in memory
	cout << "The value of p is " << sizeof p << endl; // 4 bytes
	p = nullptr;
	cout << "The value of p is " << p << endl; // 0 - the pointer is pointing no where.

	cout << "The value of p2 is " << p2 << endl;
	cout << "The size of p is " << sizeof p2 << endl; // 8 bytes without pointer
	cout << "The size of p is " << sizeof p3 << endl; // 8 bytes without pointer
	cout << "The size of p is " << sizeof p4 << endl; // 16 bytes without pointer
	cout << "The size of p is " << sizeof p5 << endl; // 32 bytes without pointer

	cout << "The size of score is " << *score_ptr << endl; // dereferences score pointer to the value of score as it is assigned.
	cout << "The size of score is " << sizeof score_ptr << endl;

	*score_ptr = 200; // goes to the address where score is stored and changes its value, both score and pointer change their value.
	cout << score << endl;
	cout << *score_ptr << endl;

	double high_temp{ 100.7 };
	double low_temp{ 23.4 };
	double* temp_ptr{ &high_temp };

	cout << *temp_ptr << endl; // 100.7
	
	temp_ptr = &low_temp;
	cout << *temp_ptr << endl; // 23.4

	vector <string> username{ "Frank", "Conor", "Bob"};
	vector <string>* username_ptr{ nullptr };

	username_ptr = &username;

	cout << (*username_ptr).at(0) << endl; // first name in the vector.

	for (auto stooge : *username_ptr)
		cout << stooge << " ";





}