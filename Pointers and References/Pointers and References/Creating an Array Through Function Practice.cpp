// Write a program that asks the user how large they would like their array to be and what should be displayed.

// STEP 1: CREATE AND INITIALISE VARIABLES IN THE MAIN.


#include <iostream>

using namespace std;

int* create_array(size_t size, int initial_value = 0);
void display_array(const int* const my_array, size_t size);


int main() {

	int* my_array{ nullptr };
	size_t size{};
	int initial_value{};

	cout << "How big? ";
	cin >> size;

	cout << "What value? ";
	cin >> initial_value;

	my_array = create_array(size, initial_value);
	cout << "-----------------------------------" << endl;

	display_array(my_array, size);

	delete[] my_array;
}


int* create_array(size_t size, int initial_value)
{
	int* new_storage_ptr{ nullptr };
	new_storage_ptr = new int[size];
	for (int i = 0; i < size; ++i)
	{
		new_storage_ptr[i] = initial_value;
	}
	return new_storage_ptr;

}

void display_array(const int* const my_array, size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << my_array[i];
	}

}

