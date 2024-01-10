#include <vector>
#include <string>
#include <iostream>

using namespace std;

//string longestCommonPrefix(const std::vector<std::string>& strs);
//
//int main() {
//    std::vector<std::string> strs = { "flower", "flow", "flight" };
//    std::string result = longestCommonPrefix(strs);
//    std::cout << "The longest common prefix is: " << result << std::endl;
//
//    return 0;
//}
//
//string longestCommonPrefix(const std::vector<std::string>& strs) {
//
    //if (strs.empty()) return "";


    //for (int i = 1; i < strs.size(); ++i) {
    //    // as long as strs[i] doesn't start with 'prefix', remove the last character from 'prefix'
    //    while (strs[i].find(prefix) != 0) {
    //        prefix = prefix.substr(0, prefix.length() - 1);

    //        if (prefix.empty()) return "";
    //    }
    //}
    //return prefix;
//}

//string longestCommonPrefix(vector<string>& strs);
//
//int main() {
//
//
//}
//
//string longestCommonPrefix(vector<string>& strs)
//{
//	if (strs.empty() == 0) return "";
//
//	string prefix = strs[0];
//
//	for (int i = 1; i < strs.size(); i++)
//	{
//		while (strs[i].find(prefix) != 0)
//		{
//			prefix = prefix.substr(0, i - 1);
//			
//			if (strs.empty() == 0) return "";
//		}
//	}
//	return prefix;
//}

//string longestString(vector<string> strs);
//
//int main() {
//
//    vector<string>strs{
//        "Flower",
//        "Flow",
//        "Flock",
//        "Flora"
//    };
//
//    string s = longestString(strs);
//
//    cout << s;
//
//}
//
//string longestString(vector<string> strs)
//{
//    string prefix = strs[0];
//
//    for (int i = 1; i < strs.size(); i++)
//    {
//        while (strs[i].find(prefix) != 0)
//        {
//            prefix = prefix.substr(0, prefix.length() - 1);
//
//            if (strs.empty()) return "";
//        }
//    }
//    return prefix;
//}