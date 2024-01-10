#include <iostream>
#include <vector>
#include <string>

using namespace std;

int* create_array(size_t size, int initial_value = 2); // size_t can get as large as the array can get!

void display(const int* const array, size_t size)
{
	for (size_t i{ 0 }; i < size; ++i)
		cout << array[i] << " ";
	cout << endl;
}

int main() {

	int* my_array{ nullptr };
	size_t size;
	int initial_value{};

	cout << "\nHow many integers would you like to allocate? ";
	cin >> size;
	cout << "What value would like them to inialized to? ";
	cin >> initial_value;

	my_array = create_array(size, initial_value);
	cout << "---------------------------------" << endl;

	display(my_array, size);
	delete[] my_array;
	return 0;
}

int* create_array(size_t size, int initial_value)
{
	int* new_storage{ nullptr };
	new_storage = new int[size]; // creating a block of memory on the heap for the new array.
	for (size_t i{ 0 }; i < size; ++i)
		*(new_storage + i) = initial_value;
	return new_storage;


}