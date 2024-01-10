// Functions and Pointers

#include <iostream>
#include <vector>

using namespace std;

void swap(int* ptr, int* ptr1);

int main() {

	int x{ 20 };
	int y{ 40 };

	swap(&x, &y);

	cout << x << endl;
	cout << y << endl;

}

void swap(int* ptr, int* ptr1)
{
	int ptr2 = *ptr;
	*ptr = *ptr1;
	*ptr1 = ptr2;
	return;

}