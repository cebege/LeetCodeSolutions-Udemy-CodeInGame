#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

using namespace std;

class Account
{
private:
	double balance{};
	string name;

public:
	void set_balance(double bal);
	double get_balance();
	void set_name(string n);
	string get_name();
	bool deposit(double amount);
	bool withdraw(double amount);
};

#endif
