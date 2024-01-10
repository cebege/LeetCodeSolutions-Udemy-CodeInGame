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
	string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }
	void display_stats(Player p);
	Player(string name_val = "None", int health_val = 100, int xp_val = 10);
	Player(const Player& source);
	~Player() { cout << "Destructor has been called." << endl; }
};

Player::Player(string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, xp{ xp_val } {};

Player::Player(const Player& source)
	: name(source.name), health(source.health), xp(source.xp) {};

void display_stats(Player p)
{
	cout << "Name: " << p.get_name() << endl;
	cout << "health: " << p.get_health() << endl;
	cout << "Name: " << p.get_xp() << endl;
}

int main() {
	Player conor("Conor");
	display_stats(conor);


}