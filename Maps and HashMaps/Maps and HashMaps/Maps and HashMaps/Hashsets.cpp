// Hash sets - one way to group objects together and to analyse this list.


#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {

	unordered_set <int> hashset{};

	hashset.insert(6);
	hashset.insert(8);
	hashset.insert(5);
	hashset.insert(3);
	hashset.insert(3);

	cout << hashset.count(5) << endl; // counting how many 5's are in the hashset


}