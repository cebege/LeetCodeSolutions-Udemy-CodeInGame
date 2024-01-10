#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	std::string name; // THIS IS THE ORDER THE OBJECTS WILL GO
	int health;
	int xp;

public:
	string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }
	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
	// Copy constructor:
	Player(const Player& source);
	// Deconstructor
	~Player() { cout << "Deconstructor called for " << name << endl; }
};

	//OVERLOADED CONSTRUCTORS

	//Player() { // INEFFICIENT
	//	name = "none.";
	//	health = 100;
	//	xp = 3;
	//}

	//Player(string name_val) { // INEFFICIENT
	//	name = name_val;
	//	health = 100;
	//	xp = 3;
	//}

	//Player(string name_val, int health_val, int xp_val) { // INEFFICIENT
	//	name = name_val;
	//	health = health_val;
	//	xp = xp_val;
	//}

Player::Player(string name_val, int health_val, int xp_val) // DELEGATING CONSTRUCTORS
	: name{ name_val }, health{ health_val }, xp{ xp_val } { // SINGLE DELEGATION FOR DEFAULT VALUES
	cout << "Three Args Constructor" << endl;
}

Player::Player(const Player& source) 
	: name(source.name), health(source.health), xp(source.xp) {
	cout << "Copy Constructor called, made copy of " << source.name << endl;
}

void display_player(Player p) {
	cout << "Name: " << p.get_name() << endl;
	cout << "Health: " << p.get_health() << endl;
	cout << "xp: " << p.get_xp() << endl;
}

int main() { 

	// Player frank; // compiler error - as a default position has not been set!

	Player hero;

	display_player(hero);

	Player new_hero{ hero };

	Player frank("Frank");
	Player villain("Villain", 100, 55);

	Player* enemy = new Player;
	delete enemy;

	return 0;

}