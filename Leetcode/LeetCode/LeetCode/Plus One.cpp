#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

class Solution
{

public:

	vector<int>plusOne(vector<int>& digits)
	{
		int n = digits.size();

		for (int i = (n - 1); i >= 0; --i)
		{
			if (digits[i] == 9)
			{
				digits[i] = 0;
			}
			else
			{
				digits[i]++;
				return digits;
			}
		}

		digits = vector <int>(n + 1, 0);
		digits[0] = 1;
		return digits;

	}
};