// Array Transformation
// The 2 requirements of the question are:
// Move all the 0's to the end of array.
//All the non - zero elements must retain their original order.
        // 1. Count the zeroes
        // 2. Make all the non-zero elements retain their original order.
        // 3. Move all zeroes to the end
        // 4. Combine the result

#include <vector>
using namespace std;

class Solution
{
    void moveZeroes(vector<int>& nums)
    {
        int n = nums.size();

        // 1. Count the zeroes
        int numZeroes = 0;
        for (int i = 0; i < n; i++) {
            numZeroes += (nums[i] == 0);
        }

        // 2. Make all the non-zero elements retain their original order.
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                ans.push_back(nums[i]);
            }
        }

        // 3. Move all zeroes to the end
        while (numZeroes--) {
            ans.push_back(0);
        }

        // 4. Combine the result
        for (int i = 0; i < n; i++) {
            nums[i] = ans[i];
        }
    }
};

class Solution1
{
    void zeroMove(vector <int>& nums)
    {
        int n = nums.size();

        int zeroCount = 0;
        for (int i = 0; i < n; ++i)
        {
            zeroCount += (nums[i] == 0);
        }

        vector <int> nums2;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] != 0)
            {
                nums2.push_back(nums[i]);
            }
        }

        while (zeroCount--)
            nums2.push_back(0);

        for (int i = 0; i < n; ++i)
            nums[i] = nums2[i];




    }

};