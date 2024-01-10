#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	std::string name;
	int health;
	int mana;

public:
	string get_name() { return name; }
	int get_health() { return health; }
	int get_mana() { return mana; }
	Player(string name_value = "None", int health_value = 100, int mana_value = 100);
	Player(const Player& source);
	~Player() { cout << "Deconstructor Called."; }
	void display_stats(Player source);

};

Player::Player(string name_value, int health_value, int mana_value)
	: name{ name_value }, health{ health_value }, mana{ mana_value }{
	cout << "Constructor Called. " << endl; }

Player::Player(const Player& source)
	: name(source.name), health(source.health), mana(source.mana) {
	cout << "Copy Constructor Called. " << endl;
}

void display_stats(Player source)
{
	cout << "Name: " << source.get_name() << endl;
	cout << "Health: " << source.get_health() << endl;
	cout << "Name: " << source.get_mana() << endl;
}

int main() {
	Player Conor{ "Conor" };
	display_stats(Conor);
	

	
}
