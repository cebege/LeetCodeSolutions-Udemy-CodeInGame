//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
////class Solution {
////public:
////    int reverse(int x) {
////
////        int rev = 0;
////
////        while (x != 0)
////        {
////            int pop = x % 10;
////            x /= 10;
////
////            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
////            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
////
////            rev = rev * 10 + pop;
////        }
////        return rev;
////    }
////};
////
////class SolutionPractice
////{
////
////    int reverseInteger(int x)
////    {
////        int rev = 0;
////
////        while (x != 0)
////        {
////            int pop = x % 10;
////            x /= 10;
////
////            if (rev == INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
////            if (rev == INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
////
////            rev = rev * 10 + pop;
////        }
////        return rev;
////    }
////
//
//int reverse(int& number);
//
//int main()
//{
//	int number = 1235;
//
//	number = reverse(number);
//
//	cout << number;
//}
//
//int reverse(int& number)
//{
//	int rev = 0;
//
//	while (number != 0)
//	{
//
//		int pop = number % 10;
//
//		number /= 10;
//
//		if (rev == INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
//		if (rev == INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
//
//		rev = rev * 10 + pop;
//	}
//	return rev;
//}