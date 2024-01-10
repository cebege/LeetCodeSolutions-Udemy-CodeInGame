#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
	// attributes
	string name{ "Player" };
	int health = 100;
	int xp = 15;

public:
	// methods
	void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
	bool is_dead();
};

class Account{
public:
	// attributes
	string name;
	double balance;


	// methods
	void deposit(double bal) 
	{ 
		balance += bal; 
		cout << "In deposit" << endl;
	}

	void withdraw(double bal)
	{ 
		balance -= bal; 
		cout << "In withdraw" << endl;
	}

};

int main() {
	Account conor_account;
	conor_account.name = "Conor's Account";
	conor_account.balance = 5000.00;
	conor_account.deposit(1000.00);
	conor_account.withdraw(500.00);
	
	Player Frank;                       
	Frank.talk("hi there");

	//Player* enemy = new Player;
	//(*enemy).name = "Enemy";
	//(*enemy).health = 100;
	//enemy->xp = 15;
	//enemy->talk("I will destroy you!");

	return 0;
}