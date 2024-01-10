#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account
{
private:
	string name;
	int balance;

public:
	void set_name(string input_name);
	string get_name();
	void set_balance(int bal);
	int get_balance();
	bool deposit(int bal);
	bool withdrawal(int bal);
};
#endif