#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string name;
	int health;
	int xp;

public:
	void set_name(string name_val)
	{
		name = name_val;
	}

	//Overloaded Constructors

	Player() {
		name = "None";
		cout << "No args constructor called" << endl;
	}

	// Best practice to make your own constructor

	Player(string name)
	{
		cout << "String arg constructor called" << endl;
	}

	Player(string name, int health, int xp)
	{
		cout << "Three arg constructor called" << endl;
	}

	~Player() {
		cout << "Deconstructor called for" << name << endl;
	}

	int main() {

		{
			Player slayer;
			slayer.set_name("Slayer");
		} // Deconstructor called automatically.

		{
			Player frank; // No args constructor
			frank.set_name("Frank");
			Player hero("Hero"); // string args constructor called.
			hero.set_name("Hero");
			Player villain("Villain", 100, 12); // three args constructor called.
			villain.set_name("Villain");
			// Deconstructor is called for Villain, then Hero, then Frank, OPPOSITE DIRECTION.

		}

		Player* enemy = new Player; // no args constructor called.
		enemy->set_name("Enemy");

		Player* level_boss = new Player("Level Boss", 1000, 300); // three args constructor called
		level_boss->set_name("Level Boss");

		delete enemy; // deleting objects that were created dynamically on the heap.
		delete level_boss;



	}













};