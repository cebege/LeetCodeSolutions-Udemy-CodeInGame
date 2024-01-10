#include <iostream>
#include <vector>
#include <string>

using namespace std;

int* largest_int(int* int_ptr1, int* int_ptr2);

int main() {

	int a{ 59 };
	int b{ 20 };

	int* largest_int_ptr{ nullptr };
	largest_int_ptr = largest_int(&a, &b);
	cout << *largest_int_ptr << endl;

}

int* largest_int(int* int_ptr1, int* int_ptr2)
{
	if (*int_ptr1 < *int_ptr2)
	{
		return int_ptr2;
	}
	else
	{
		return int_ptr1;
	}
}