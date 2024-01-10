#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

using namespace std;

class Player
{
private:
	string name;
	int health;
	int xp;
	static int num_players; // STATIC ONLY BELONGS TO THE CLASS

public:
	string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }
	Player(string name_val = "None", int health_val = 100, int xp_val = 100);
	Player(const Player& source);
	~Player();
	static int get_num_players();
};


#endif