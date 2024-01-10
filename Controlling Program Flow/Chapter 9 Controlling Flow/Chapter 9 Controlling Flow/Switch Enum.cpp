#include <iostream>

using namespace std;

int main() {

	enum colour
	{
		red, blue, green, yellow
	};

	colour selection{red};

	switch (selection)
	{
	case red:
	{
		cout << "You have selected red." << endl;
		break;
	}
	case blue: 
	{
		cout << "You have selected blue." << endl;
		break;
	}
	case green:
	{
		cout << "You have selected green." << endl;
		break;
	}
	case yellow:
	{
		cout << "You have selected yellow." << endl;
		break;
	}
	}


}