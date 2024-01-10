#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

int Player::num_players{ 0 };


Player::Player(string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, xp{ xp_val }
{
	++num_players;
	cout << "Constructor Called." << endl; }


Player::Player(const Player& source)
	: name(source.name), health(source.health), xp(source.xp) {
	cout << "Copy Constructor Called." << endl;
}

Player::~Player() {
	--num_players;
}

int Player::get_num_players() {
	return num_players;
}