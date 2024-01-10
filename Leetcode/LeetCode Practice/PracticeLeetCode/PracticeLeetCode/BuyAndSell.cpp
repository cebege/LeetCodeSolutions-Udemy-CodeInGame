//#include <iostream>
//#include <vector>
//
//using namespace std;

////class BuyAndSell
////{
////public:
////
////	int maxProfit(vector<int>& prices) {
////
////		vector<int> nums;
////
////		int profit = 0;
////
////		for (int i = 0; i < nums.size()-1; ++i)
////		{
////			if (nums[i] < nums[i + 1])
////			{
////				profit += nums[i + 1] - nums[i];
////			}
////		}
////		return profit;
////	}
////
////
////	// THINGS TO NOTE: KEEPING A RUNNING TOTAL OF THE PROFIT MARGIN WITH THE += SIGNS;
////}
//
////int main() {
////
////	vector <int> nums1;
////
////	int profit = 0;
////
////	for (int i = 0; i < nums1.size(); ++i)
////	{
////		if (nums1[i + 1] > nums1[i])
////		{
////			profit += nums1[i + 1] - nums1[i];
////		}
////	}
////	return profit;
////
////}

//int maxProfit(vector<int>& prices);
//
//int main() {
//
//	vector<int> prices{ 20,34,2,4,6 };
//
//
//}
//
//int maxProfit(vector<int>& prices)
//{
//	int profit = 0;
//
//	for (int i = 0; i < prices.size(); ++i)
//	{
//		if (prices[i + 1] > prices[i])
//		{
//			profit += prices[i + 1] - prices[i];
//		}
//
//	}
//	return profit;
//
//}