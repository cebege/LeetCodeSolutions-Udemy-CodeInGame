#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(int* array, int sentinel);

int main() {

	int numbers[]{ 1, 4, 6, 10, 20, 50, 30, -1 };
	display(numbers, -1);
}

void display(int* array, int sentinel)
{
	while (*array != sentinel)
		cout << *array++ << " ";
	cout << endl;
}