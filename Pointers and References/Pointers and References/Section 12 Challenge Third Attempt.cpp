#include <iostream>
#include <string>

using namespace std;

void print(int* array, size_t size);
int* apply_all(const int* const array1, size_t size1, const int* const array2, size_t size2);

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
}

void print(int* array, size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
}


int* apply_all(const int* const array1, size_t size1, const int* const array2, size_t size2)
{
	int* new_array{ nullptr };
	new_array = new int[size1 * size2];

	int position{0};
	for (size_t i{ 0 }; i < size1; ++i)
	{
		for (size_t j{ 0 }; j < size2; ++j)
		{
			new_array[position] = array1[i] * array2[j];
			++position;
		}
	}
	return new_array;

}