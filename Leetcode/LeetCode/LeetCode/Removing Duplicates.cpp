#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> numbers{ 0,0,1,1,1,2,2,3,3,3,4,5,6 };
	int index = 1;

	for (int i = 1; i < numbers.size() - 1; ++i)
	{
		if (numbers.size() == 0)
		{
			return 0;
		}
		if (numbers.at(i) != numbers.at(i + 1))
		{
			numbers.at(index++) = numbers.at(i + 1);
		}
	}
	cout << index;








}