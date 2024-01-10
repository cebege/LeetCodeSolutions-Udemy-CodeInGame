#include <vector>
#include <iostream>
using namespace std;

class reverseString
{
public:
	void reverse(vector<char>& s)
	{
		int left = 0;
		int right = s.size() - 1;

		while (left < right)
		{
			char temp = s[left];
			s[left++] = s[right];
			s[right--] = temp;
		}
	}
};

int main() {

	reverseString solution;
	vector<char> s{ 'h', 'e', 'l', 'l', 'o' };

	cout << "Original string: ";

	for (char ch : s)
	{
		cout << ch;
	}
	cout << endl;

	solution.reverse(s);

	cout << "Update string: ";

	for (char ch : s)
	{
		cout << ch;
	}
	cout << endl;

	return 0;

}