#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution {

public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);

    }

    void reverse(vector<int>& nums, int start, int end) {
        while (start < end)
        {
            int temp{};
            temp = nums.at(start);
            nums.at(start) = nums.at(end);
            nums.at(end) = temp;
            start++;
            end--;
        }




    }


};