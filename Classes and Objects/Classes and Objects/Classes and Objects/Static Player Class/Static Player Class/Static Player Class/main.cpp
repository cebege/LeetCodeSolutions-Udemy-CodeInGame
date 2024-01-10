#include <iostream>
#include "Player.h"
#include <string>

using namespace std;

void display_active_players() {
	cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {

	display_active_players();
	Player hero{ "Hero" };
	display_active_players();

	{
		Player frank{ "Frank" };
		display_active_players();
	}
	display_active_players();

	Player* Enemy = new Player{ "Enemy", 100, 100 };
	display_active_players();
	delete Enemy;
	display_active_players();

	return 0;
}