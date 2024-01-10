#include <iostream>
#include <vector>

using namespace std;

int main() {

	size_t size{};
	cout << "How big do you want your array to be? ";
	cin >> size;

	double* dbl_ptr = new double[size];

	cout << dbl_ptr << endl;

	delete[] dbl_ptr;


}