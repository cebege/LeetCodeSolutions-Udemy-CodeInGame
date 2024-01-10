#include <iostream>

using namespace std;


int main() {


	int* data = new int[5];

	for (int i{ 0 }; i < 5; ++i)
	{
		*(data + 1) = i * 2;
		cout << data[i];
	}

	for (int i{ 0 }; i <= 4; ++i)
	{
		cout << data[i] << " ";
	}
	cout << endl;

	delete[] data;
}