#include "Account.h"
#include <string>

using namespace std;

void Account::set_name(string n)
{
	name = n;
}

string Account::get_name() { // MEMBER METHOD ACCESSING THE PRIVATE CLASS
	return name;
}

bool Account::deposit(double amount)
{
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if (balance - amount >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}