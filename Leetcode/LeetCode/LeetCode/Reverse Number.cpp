#include <iostream>
#include <limits>
using namespace std;

class ReverseNumber
{
public: 
	int reverse(int x)
	{
		int rev = 0;

		while (x != 0)
		{
			int pop = x % 10;

			x /= 10;

			if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0; // why 7? 7 is the last digit of the maximum value an integer can be.
			if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0; // why 8? 8 is the last digit of the lowest value an integer can be.

			rev = rev * 10 + pop; // appends zero to number and add the pop (last digit of the x) to the new number.
		}
		return rev;
	}
};

int main() {

	ReverseNumber Test;

	int x = 1234;

	cout << "Output before: " << x << endl;

	x = Test.reverse(x);

	cout << "Output after: " << x << endl;

}