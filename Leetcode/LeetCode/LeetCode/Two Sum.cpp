#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:

	vector<int> twoSum(vector<int>& nums, int target)
	{
		unordered_map<int, int> map; // 1. Create an unordered map as a way to track numbers efficiently.

		for (int i = 0; i < nums.size(); i++) // 2. Loop through the vector to access the data.
		{
			int complement = target - nums[i]; // 3. initialise complement against target and vector.
			if (map.count(complement)) // 4. count the index where the complement appears against i.
			{
				return { map[complement], i }; // 5. return the pair.
			}
			map[nums[i]] = i; // if no pair is found, the values of i are mapped for future loops.
		}
		return {};
	}

};