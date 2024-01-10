#include <iostream>
#include <map> // ORDERED MAP - OTHERWISE UNORDERED MAP
#include <string>

using namespace std;

int main() {

	map<string, string> myDictionary; // setting up the map.... change to unordered_map
	myDictionary.insert(pair<string, string>("Apple", "Der Apfel")); // inserting values into map.
	myDictionary.insert(pair<string, string>("Orange", "Die Orange, Die Apfelsine")); // insrting values into map.
	myDictionary.insert(pair<string, string>("Banana", "Die Banane")); // insrting values into map.

	myDictionary["Apple"] = "Apple Bum"; // Accessing an element and amending what is written.

	myDictionary.clear(); // Clearing all elements.
	myDictionary.erase("Apple"); // Clearing one specific element.

	for (auto pair : myDictionary)
	{
		cout << pair.first << " and " << pair.second << endl;
	}

	system("pause>0");
}