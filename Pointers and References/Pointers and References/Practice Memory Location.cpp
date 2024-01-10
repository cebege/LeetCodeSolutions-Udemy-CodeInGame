#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int* int_ptr{nullptr};

	int_ptr = new int{ 50 };

	cout << *int_ptr << endl;

	delete int_ptr;

	size_t size{};

	cout << "How big is your array? ";

	cin >> size;

	double* dbl_ptr{nullptr};

	dbl_ptr = new double[size];

	cout << dbl_ptr << endl; // pointing to the first position on the heap!

	delete [] dbl_ptr;

	


}