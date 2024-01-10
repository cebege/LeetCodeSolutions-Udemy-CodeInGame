#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

//bool isPalindrome(string s);
//
//int main() {
//
//    string string{ "A man, a plan, a canal: Panama" };
//
//    bool _isPalindrome = isPalindrome(string);
//
//    cout << boolalpha << _isPalindrome;
//
//}
//
//bool isPalindrome(string s)
//{
//    string filtered_string;
//    string reversed_string;
//
//    for (auto ch : s) {
//        if (isalnum(ch))
//            filtered_string += tolower(ch);
//    }
//
//    reversed_string.resize(filtered_string.size());
//    reverse_copy(filtered_string.begin(), filtered_string.end(), reversed_string.begin());
//
//    return filtered_string == reversed_string;
//}

//bool isPalindome(string s);
//
//int main() {
//
//	string s{ "Hannah" };
//
//	bool _isPalindrome = isPalindome(s);
//
//	cout << boolalpha << _isPalindrome;
//
//
//}
//
//bool isPalindome(string s) {
//
//	string filteredstring;
//	string reversedstring;
//
//	int n = s.length();
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (isalnum(s[i]))
//		{
//			filteredstring += tolower(s[i]);
//		}
//	}
//
//	reversedstring.resize(filteredstring.size());
//	reverse_copy(filteredstring.begin(), filteredstring.end(), reversedstring.begin());
//
//	return filteredstring == reversedstring;
//}

//bool isPalindrome(string& s);
//
//int main() {
//
//	string s{ "Hannah" };
//
//	bool _isPalindrome = isPalindrome(s);
//
//	cout << _isPalindrome;
//
//}
//
//
//bool isPalindrome(string& s)
//{
//	string reversedstring;
//	string filteredstring;
//
//	int n = s.length();
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (isalnum(s[i]))
//		{
//			filteredstring += tolower(s[i]);
//		}
//	}
//
//	reversedstring.resize(filteredstring.size());
//	reverse_copy(filteredstring.begin(), filteredstring.end(), reversedstring.begin());
//
//	return reversedstring == filteredstring;
//}
//

//bool isPalindrome(string s);
//
//int main() {
//
//	string s{ "Hannah" };
//
//	bool isPal = isPalindrome(s);
//
//	cout << isPal;
//}
//
//bool isPalindrome(string s)
//{
//	string filteredString;
//	string reverseString;
//
//	int n = s.length();
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (isalnum(s[i]))
//		{
//			filteredString += tolower(s[i]);
//		}
//	}
//
//	reverseString.resize(filteredString.size());
//	reverse_copy(filteredString.begin(), filteredString.end(), reverseString.begin());
//
//	return reverseString == filteredString;
//}