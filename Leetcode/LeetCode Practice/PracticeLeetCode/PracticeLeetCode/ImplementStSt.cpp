//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int strStr(string haystack, string needle);
//
//int main() {
//
//	string haystack{ "Hello" };
//	string needle{ "ll" };
//
//}
//
//int strStr(string haystack, string needle)
//{
//	int m = haystack.length();
//	int n = needle.length();
//
//	for (int windowStart = 0; windowStart <= n - m; windowStart++)
//	{
//		for (int i = 0; i < n; ++i)
//		{
//			if (needle[i] != haystack[windowStart + i])
//			{
//				break;
//			}
//			if (i == m - 1)
//			{
//				return m;
//			}
//		}
//	}
//	return -1;
//}