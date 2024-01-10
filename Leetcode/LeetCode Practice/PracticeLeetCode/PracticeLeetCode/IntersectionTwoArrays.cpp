//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
////
////int main() {
////
////	vector<int> nums1{ 2, 3, 4, 5 };
////	vector<int> nums2{ 2, 3,5 };
////
////	unordered_map<int, int> map;
////
////	for (auto n : nums1)
////	{
////		++map[n];
////	}
////
////	int k = 0;
////	for (auto n : nums2)
////	{
////		auto it = map.find(n);
////
////		if (it != end(map) && --it->second >= 0)
////		{
////			nums1[k++] = n;
////		}
////	}
////
////	vector <int> nums3(begin(nums1), begin(nums1) + k);
////
////	for (auto i : nums3)
////	{
////		cout << i;
////	}
////
////
////
////
////}
