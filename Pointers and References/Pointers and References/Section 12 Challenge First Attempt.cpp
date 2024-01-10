// Section 12 Challenge

#include <iostream>

using namespace std;

void print(int* array, size_t size);
int* apply_all(int* array1, size_t size1, int* array2, size_t size2);

int main() {

	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1,2,3,4,5 };
	int array2[]{ 10,20,30 };

	cout << "Array 1: ";
	print(array1, array1_size);

	cout << "Array 2: ";
	print(array2, array2_size);

	int* results = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t results_size{ array1_size * array2_size };

	cout << "Result: ";
	print(results, results_size);

	cout << endl;

	return 0;
}

void print(int* array, size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
}

int* apply_all(int* array1, size_t size1, int* array2, size_t size2)
{
	int* new_storage1{ nullptr };

	new_storage1 = new int [size1];
	for (int i = 0; i < size1; ++i)
	{
		new_storage1[i] = array1[size1];
	}

	int* new_storage2{ nullptr };

	new_storage2 = new int[size2];
	for (int i = 0; i < size2; ++i)
	{
		new_storage2[i] = array2[size2];
	}



	return new_storage3;

}