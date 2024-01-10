// Remeber that the valaue of an array name is the location or the address of the first element of the array.
// and value of pointer is an address, so if a pointer points to the same type of data as the array elements
// Then the pointer and the array name are the same.

#include <iostream>

using namespace std;

int main() {

	int scores[]{ 100, 95, 89 };

	cout << "Memory location of the scores is: ";
	cout << scores << endl;

	int* score_ptr{ scores };

	cout << "Memory location of the scores is: ";
	cout << score_ptr << endl;

	// Array Subscript Notation
	cout << "The second value in the array is ";
	cout << scores[2] << endl;

	// Pointer Subscript Notation
	cout << "The second value in the array is ";
	cout << score_ptr[1] << endl;

	// Pointer Offset Notation
	cout << "The second value in the pointer is ";
	cout << *(score_ptr+1) << endl;

	// Array Offset Notation
	cout << "The second value in the pointer is ";
	cout << *(scores + 1) << endl;


	int array_name[]{ 1,2,3,4,5 }; // THE SAME
	int* pointer_nname{ array_name }; // THE SAME

}