// Intersection of two arrays i.e. finding everything in unqiue between two arrays.

#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> nums1{ 20, 20, 40, 50, 60, 70 };
	vector <int> nums2{ 20, 20, 50 };

    vector<int> table(1001, 0);
    for (int i = 0; i < nums1.size(); i++) {
        table[nums1[i]]++;
    }
    vector<int> result;
    for (int i = 0; i < nums2.size(); i++) {
        if (table[nums2[i]] != 0) {
            result.push_back(nums2[i]);
            table[nums2[i]]--;
        }
    }
    return result;
};
