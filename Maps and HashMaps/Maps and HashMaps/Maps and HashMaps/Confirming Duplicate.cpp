// confirming if there is a duplicate

#include <unordered_map>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	bool contains_duplicate;
	vector <int> nums{10,20, 30,10,40,20,30};

	unordered_map <int, int> map;

	cout << boolalpha;

	for (auto i : nums)
	{
		map[i]++; // counts the frequency into map in the second/ column element of the map.
	}

	for (auto i : map) // traversing into the map
	{
		if (i.second > 1) // 
		{
			cout << true;
			return true;;
		}
		cout << false;
		return false;
	}
}
