//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int strStr(string haystack, string needle);
//
//int main() {
//
//
//}

//int strStr(string haystack, string needle)
//{
//	int m = haystack.length();
//	int n = needle.length();
//
//	for (int windowStart = 0; windowStart <= m - n; windowStart++)
//	{
//		for (int i = 0; i < n; ++i)
//		{
//			if (needle[i] != haystack[windowStart + i])
//			{
//				return;
//			}
//			if (i == m - 1)
//			{
//				return windowStart;
//			}
//
//		}
//	}
//	return -1;
//
//}

//int strStr(string haystack, string needle)
//{
//	int n = haystack.length();
//	int m = needle.length();
//
//	for (int windowStart = 0; windowStart < n - m; ++windowStart)
//	{
//		for (int i = 0; i < m; ++i)
//		{
//			if (needle[i] != haystack[windowStart + i])
//			{
//				break;
//			}
//
//			if (i == m - 1)
//			{
//				return windowStart;
//			}
//		}
//	}
//	return -1;
//}
