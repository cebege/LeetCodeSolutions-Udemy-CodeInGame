#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

// MLI - MAP LIST INSERT

int main() {

	map<string, list<string>> pokedex; // creating the complex map.

	list <string> pikachu_attacks{ "Thunder Shock", "Tail Whip", "Quick Attack" }; // creating a list of strings i.e. multiple words.
	list <string> charmander_attacks{ "Flame Thrower", "Scary Face", "Quick Attack" };
	list <string> chikorita_attacks{ "Razor Leaf", "Poison Powder", "Quick Attack" };

	pokedex.insert(pair<string, list<string>>("Pikachu", pikachu_attacks)); // inserting strings into pokedex.
	pokedex.insert(pair<string, list<string>>("Charmander", charmander_attacks));
	pokedex.insert(pair<string, list<string>>("Chikorita", chikorita_attacks));

	for (auto pair : pokedex)
	{
		cout << pair.first << " - ";

		for (auto attack : pair.second)
		{
			cout << attack << ", ";
		}
		cout << endl;
	}





	system("pause>0");
}