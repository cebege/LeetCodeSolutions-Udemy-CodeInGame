//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//	bool containsDuplicate(vector<int>& nums) {
//
//		unordered_map <int, int> map;
//
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			map[i]++;
//		}
//
//		for (auto i : map)
//		{
//			if (i.second > 1)
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//
//};

//using namespace std;

//int main() {
//
//	unordered_map<int, int> map;
//
//	vector <int> nums1;
//
//	for (auto n : nums1)
//	{
//		++map[n];
//	}
//
//	for (auto n : map)
//	{
//		if (n.second > 1)
//		{
//			return true;
//		}
//	}
//	return false;
//
//}