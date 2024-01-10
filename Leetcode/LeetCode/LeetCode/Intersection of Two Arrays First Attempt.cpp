// Intersection of two arrays i.e. finding everything in common between two arrays.

#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void intersection(int array1[], size_t size1, int array2[], size_t size2);

int main() {

	size_t size1{6};
	size_t size2{3};

	int array1[]{ 20, 20, 40, 50, 60, 70 };
	int array2[]{ 20, 20, 50 };

	intersection(array1, size1, array2, size2);
}

void intersection(int array1[], size_t size1, int array2[], size_t size2)
{
	unordered_map <int, int> hash_map{};

	for (int i{ 0 }; i < size1; ++i)
	{
		int a{};
		a = array1[i];
		if (hash_map.count(a) == 0) 
		{
			hash_map[a] = 1;
		}
		else
		{
			int count = hash_map[a];
			hash_map[a] = count + 1;
		}
	}
	for (int i{ 0 }; i < size2; ++i)
	{
		int b{};
		b = array2[i];
		if (hash_map.count(b) > 0)
		{
			int count = hash_map[b];
			if (count != 0)
			{
				hash_map[b] = count - 1;
				cout << b << endl;
			}
		}
	}
}