// Sorting and Finding Duplicates

#include <iostream>
#include <vector>

using namespace std;

int main() {

	bool is_duplicate = 0;
	vector <int> nums{1,2,3,4,1};

	for (int i = 0; i < nums.size(); ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (nums.at(i) == nums.at(j))
			{
				is_duplicate = true;
				cout << is_duplicate;
			}
		}
	}
	return is_duplicate;
}
