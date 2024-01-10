#include <iostream>

using namespace std;

class Player
{
private:
	int* health;

public:
	void set_health(int health_value) { *health = health_value; }
	int get_health() { return *health; }
	Player(int health_value = 100);
	Player(const Player& source);
	~Player() { delete health; }
	void display_health(Player source);

};

Player::Player(int health_value)
{
	health = new int;
	*health = health_value;
}

Player::Player(const Player& source)
	: Player(*source.health) {}; // REMEBER THIS *

void display_health(Player source)
{
	cout << "Health: " << source.get_health();
}

int main() {
	Player Conor{ 100 };
	display_health(Conor);
	Conor.set_health(50);
	Player Shahak(Conor);

	return 0;
}