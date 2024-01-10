#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main() {

	map <string, list<string>> pokedex;

	list <string> pickachu_attacks{ "attack", "defend" };
	list <string> conor_attacks{ "defend", "attack" };

	pokedex.insert(pair<string, list<string>>("Pickachu", pickachu_attacks));
	pokedex.insert(pair<string, list<string>>("Conor", conor_attacks));

	for (auto pair : pokedex)
	{
		cout << pair.first << " ";

		for (auto attack : pair.second)
		{
			cout << attack;
		}

		cout << endl;
	}



}
