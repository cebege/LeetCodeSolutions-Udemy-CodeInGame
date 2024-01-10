// Function Parameter Structure (PCD)

#include <iostream>

using namespace std;

int add_numbers(int, int); // PROTOTYPE

int main() {
	int result{ 0 }; // CALL
	result = add_numbers(100, 200);
	cout << result;
	return 0;
}

int add_numbers(int a, int b) // DEFINITION
{
	return a + b;
}

