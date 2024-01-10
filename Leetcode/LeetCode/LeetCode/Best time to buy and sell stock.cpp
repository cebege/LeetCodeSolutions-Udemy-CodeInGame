// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
//On each day, you may decide to buyand /or sell the stock.You can only hold at most one share of the stock at any time.However, you can buy it then immediately sell it on the same day.
//Findand return the maximum profit you can achieve.

#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> prices{ 2, 5, 6, 7, 8, 10, 50, 20};
	int profit{};

	if (prices.size() == 0)
	{
		return 0;
	}

	for (int i = 0; i < prices.size() - 1; ++i)
	{
		if (prices.at(i) < prices.at(i + 1))
		{
			profit += (prices.at(i + 1) - prices.at(i));
		}
	}
	cout << profit;
}