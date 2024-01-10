// Allocate an entire array of integers on the heap at run time.

// 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int* int_ptr{ nullptr }; // 1) Declare ptr

	int_ptr = new int; // stores the location of the integer in memory on the HEAP.

	cout << int_ptr << endl; // output the memory location where the integer is stored on the heap.

	delete int_ptr; // DELETE RELEASES THE STORAGE.

	// Creates a whole contiguous block of memory on the heap with doubles.

	double size{};
	double* temp_ptr{ nullptr };

	cout << "How many temps?";
	cin >> size;

	temp_ptr = new double[size];

	cout << temp_ptr << endl; // the memory location in the heap of the first of 100 doubles.

	delete[] temp_ptr;

	// IMPORTANT: the integer has no name, if you lose the pointer, a memory leak will occur.

			/*
			The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available,
			a new operator initializes the memory and returns the address of the newly allocated and initialized memory
			 to the pointer variable. Located on the HEAP. When we are done with the memory we should release it.

			*/










}