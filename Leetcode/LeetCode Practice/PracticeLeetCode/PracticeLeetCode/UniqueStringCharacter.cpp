//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int firstUniqChar(string s);
//
//int main() {
//
//    string s{ "Conor" };
//    unordered_map<char, int> map;
//
//    int n = s.length();
//
//    for (int i = 0; i < n; ++i) {
//        map[s[i]]++;  // Use s[i] as the key instead of i
//    }
//
//    char firstUniqueChar = '\0';  // Initialize to a placeholder value
//
//    for (int i = 0; i < n; ++i) {
//        if (map[s[i]] == 1) {
//            firstUniqueChar = s[i];
//            break;  // Found the first unique character, so exit the loop
//        }
//    }
//
//    if (firstUniqueChar != '\0') {
//        cout << "The first unique character is: " << firstUniqueChar << endl;
//    }
//    else {
//        cout << "There are no unique characters in the string." << endl;
//    }
//
//    return 0;
//
//}

//int main() {
//
//	string s{ "Conor" };
//
//	unordered_map<char, int> map;
//
//	int n = s.length();
//
//	for (int i = 0; i < n; ++i)
//	{
//		map[s[i]]++;
//	}
//
//	char firstCharacter = '\0';
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (map[s[i]] == 1)
//		{
//			firstCharacter = s[i];
//			break;
//		}
//	}
//
//	cout << firstCharacter;
//}