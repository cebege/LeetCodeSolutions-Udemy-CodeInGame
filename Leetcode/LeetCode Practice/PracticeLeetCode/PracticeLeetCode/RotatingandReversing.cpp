#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

////class rotatingandreversing
////{
////public:
////
////	void reverse(vector<int>&nums, int start, int end)
////	{
////		while (start < end)
////		{
////			int temp = nums[start];
////			nums[start] = nums[end];
////			nums[end] = nums[start];
////			start++;
////			end--;
////		}
////	}
////
////	void rotate(vector<int>&nums, int k)
////	{
////		int i = nums.size();
////		k &= i;
////
////		reverse(nums, 0, nums.size() - 1);
////		reverse(nums, 0, nums[k - 1]);
////		reverse(nums, nums[k], nums.size() - 1);
////	}
////};
//

void rotate(vector<int>& nums, int k);

void reverse(vector<int>& nums, int start, int end);

int main() {

	vector<int> nums{ 1,2,3,4 };
	int k = 2;

	rotate(nums, k);

	for (int i = 0; i < nums.size(); ++i)
	{
		cout << nums[i];
	}

}



void reverse(vector<int>& nums, int start, int end)
{
	while (start < end)
	{
		int temp = nums[start];
		nums[start] = nums[end];
		nums[end] = temp;
		start++;
		end--;
	}
}

void rotate(vector<int>& nums, int k) 
{
	int n = nums.size();
	k %= n;
	reverse(nums, 0, n - 1);
	reverse(nums, 0, n - k - 1);
	reverse(nums, n - 1, n-1);
}