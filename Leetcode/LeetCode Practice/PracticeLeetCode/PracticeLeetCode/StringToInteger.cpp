#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
//
//int main() {

//    class solution {
//    public:
//        int myatoi(string input) {
//            int sign = 1; // sign of the integer
//            int result = 0; // storing the resulting integer
//            int index = 0; // tracking position of string
//            int n = input.size(); // length of string
//
//            // discard all spaces from the beginning of the input string.
//            while (index < n && input[index] == ' ') {
//                index++;
//            }
//
//            // sign = +1, if it's positive number, otherwise sign = -1. 
//            if (index < n && input[index] == '+') {
//                sign = 1;
//                index++;
//            }
//            else if (index < n && input[index] == '-') {
//                sign = -1;
//                index++;
//            }
//
//            // traverse next digits of input and stop if it is not a digit. 
//            // end of string is also non-digit character.
//            while (index < n && isdigit(input[index])) {
//                int digit = input[index] - '0';
//
//                // check overflow and underflow conditions. 
//                if ((result > int_max / 10) || (result == int_max / 10 && digit > int_max % 10)) {
//                    // if integer overflowed return 2^31-1, otherwise if underflowed return -2^31.    
//                    return sign == 1 ? int_max : int_min;
//                }
//
//                // append current digit to the result.
//                result = 10 * result + digit;
//                index++;
//            }
//
//            // we have formed a valid number without any overflow/underflow.
//            // return it after multiplying it with its sign.
//            return sign * result;
//        }
//    };
//}

//int stringToInteger(string s);
//
//int main() {
//
//	string s{ "12345" };
//
//	int number = stringToInteger(s);
//
//	cout << number;
//}
//
//int stringToInteger(string s)
//{
//	int sign = 1;
//	int result = 0;
//	int index = 0;
//	int n = s.size();
//
//	while (index < n && s[index] == ' ')
//	{
//		index++;
//	}
//
//	if (index < n && s[index] == '+')
//	{
//		sign = 1;
//		index++;
//	}
//
//	else if (index < n && s[index] == '-')
//	{
//		sign = -1;
//		index++;
//	}
//
//	while (index < n && isdigit(s[index]))
//	{
//		int digit = s[index] - '0';
//
//		if (result == INT_MAX / 10 || result == INT_MAX / 10 && digit > INT_MAX % 10)
//		{
//			return sign == 1 ? INT_MAX : INT_MIN;
//		}
//
//		result = 10 * result + digit;
//		index++;
//	}
//	return sign * result;
//}

//int myAtoi(string s);
//
//int main() {
//
//	string s{ "12345" };
//
//	int n = myAtoi(s);
//
//	cout << n;
//}
//
//int myAtoi(string s)
//{
//	int result = 0;
//	int index = 0;
//	int sign = 1;
//	int n = s.size();
//
//	while (index < n && s[index] == ' ')
//	{
//		index++;
//	}
//
//	if (index < n && s[index] == '+')
//	{
//		sign = 1;
//		index++;
//	}
//
//	else if (index < n && s[index] == '-')
//	{
//		sign = -1;
//		index++;
//	}
//
//	while (index < n && isdigit(s[index]))
//	{
//		int digit = s[index] - '0';
//
//		if (result == INT_MAX / 10 || result == INT_MAX / 10 && digit > INT_MAX % 10)
//		{
//			return result = 1 ? INT_MAX : INT_MIN;
//		}
//
//		result = result * 10 + digit;
//		index++;
//	}
//	return sign * result;
//}

//int atoi(string s);
//
//int main() {
//
//	string s{ "123445" };
//
//	int myInt = atoi(s);
//
//	cout << myInt;
//
//}
//
//int atoi(string s)
//{
//	int result = 0;
//	int sign = 1;
//	int n = s.length();
//	int index = 0;
//
//	while (index < n && s[index] == ' ')
//	{
//		index++;
//	}
//
//	if (index < n && s[index] == '+')
//	{
//		index++;
//		sign = 1;
//	}
//
//	else if (index < n && s[index] == '-')
//	{
//		index++;
//		sign = -1;
//	}
//
//	while (index < n && isdigit(s[index]))
//	{
//		int digit = s[index] - '0';
//
//		if (result == INT_MAX / 10 || result == INT_MAX / 10 && digit > INT_MAX % 10)
//		{
//			return result = 1 ? INT_MAX : INT_MIN;
//		}
//
//		result = result * 10 + digit;
//		index++;
//	}
//	return result * sign;
//}

//int atoi(string s);
//
//int main() {
//
//	string s{ "1234" };
//
//	int myInt = atoi(s);
//
//	cout << myInt;
//	
//}
//
//int atoi(string s)
//{
//	int result = 0;
//	int index = 0;
//	int n = s.length();
//	int sign = 1;
//
//	while (index < n && s[index] == ' ')
//	{
//		index++;
//	}
//
//	if (index < n && s[index] == '+')
//	{
//		index++;
//		sign = 1;
//	}
//
//	else if (index < n && s[index] == '-')
//	{
//		index++;
//		sign = -1;
//	}
//
//	while (index < n && isdigit(s[index]))
//	{
//		int digit = s[index] - '0';
//
//		if (result == INT_MAX / 10 || result == INT_MAX / 10 && digit > INT_MAX % 10)
//		{
//			return result = 1 ? INT_MAX : INT_MIN;
//		}
//
//		result = result * 10 + digit;
//		index++;
//	}
//
//	return sign * result;
//
//}