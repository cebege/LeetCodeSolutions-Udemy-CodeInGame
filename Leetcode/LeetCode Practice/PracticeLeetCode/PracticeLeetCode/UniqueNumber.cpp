//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;

//int main() {
//
//    vector<int> nums{ 1, 2, 3, 2, 1, 4, 5 };
//
//    unordered_map<int, int> map;
//
//    for (int num : nums) {  // Loop through vector elements, using 'int num' instead of 'char c'
//        map[num]++;  // Use 'num' as the key instead of 'c'
//    }
//
//    int firstUniqueNum = -1;  // Initialize to a placeholder value for numbers
//
//    for (int num : nums) {  // Loop through vector elements, using 'int num' instead of 'char c'
//        if (map[num] == 1) {
//            firstUniqueNum = num;
//            break;  // Found the first unique number, so exit the loop
//        }
//    }
//
//    if (firstUniqueNum != -1) {
//        cout << "The first unique number is: " << firstUniqueNum << endl;
//    }
//    else {
//        cout << "There are no unique numbers in the vector." << endl;
//    }
//
//    return 0;
//}


//int main() {
//
//	vector <int> nums1{ 2,2,3,4 };
//
//	unordered_map<int, int> map;
//
//	int n = nums1.size();
//
//	for (int i = 0; i < n; ++i)
//	{
//		++map[i];
//	}
//
//	int uniqueNumber = 0;
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (map[i] == 1)
//		{
//			uniqueNumber = i;
//		}
//	}
//
//	cout << uniqueNumber;
//	}