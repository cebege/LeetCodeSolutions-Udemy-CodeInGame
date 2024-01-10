//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//int main() {
//
//    string anagram1 = "nagaram";
//    string anagram2 = "anagram";
//
//    unordered_map<char, int> map1;
//    unordered_map<char, int> map2;
//
//    int n = anagram1.length();
//    int m = anagram2.length();
//
//    // Build frequency map for the first string
//    for (int i = 0; i < n; ++i) {
//        map1[anagram1[i]]++;
//    }
//
//    // Build frequency map for the second string
//    for (int i = 0; i < m; ++i) {
//        map2[anagram2[i]]++;
//    }
//
//    // Check if both maps are equal
//    if (map1 == map2) {
//        cout << "The strings are anagrams." << endl;
//    }
//    else {
//        cout << "The strings are not anagrams." << endl;
//    }
//
//    return 0;
//}