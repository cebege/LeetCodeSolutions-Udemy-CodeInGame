#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<int> nums1{2, 3, 4, 5};
    vector<int> nums2{2, 3,5 };

    unordered_map<int, int> m;
    for (auto n : nums1) { // looping through nums1
        ++m[n]; // including numbers held in nums1 into hashmap m
    }

    int k = 0;
    for (auto n : nums2) { // looping through nums2, objective is to iterate through nums2 and look for duplicates.
        auto it = m.find(n); // through hash map (which includes nums1) and look for duplicates between nums 1 and nums2, it counts number
        if (it != end(m) && --it->second >= 0) { // pointing to the end of map saying I found somehting . 
            //then then second part is counting all the instances of the duplicate being found in the map.
            nums1[k++] = n; // duplicates are put in k at first instance and then incrementing k along, n being the found element, inserting it back into nums1.
        }
    }
    
    vector<int> nums3(begin(nums1), begin(nums1) + k); // overwriting nums up to k.
    for (auto i : nums3)
    {
        cout << i;
    }
    return 0;
}

// Questions:
// are you creating a new vector of nums1 to include k?
// what is it != end(m)?
// --it->second is the same as --(*it).second? , going to memory address before the iterator 
// why >=0? 

// it = iterator - poinbter to the element in the container, this is a pointer, the address of memory in the map, one at a time i.e. showing the duplicate memory addresses