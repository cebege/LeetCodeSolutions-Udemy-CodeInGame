#include "Header Practice.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	Account conor_account;
	int account_balance = 10'000;
	string account_name{ "Conor's Account" };
	conor_account.set_name(account_name);
	conor_account.get_name();
	conor_account.set_balance(account_balance);
	conor_account.get_balance();
	conor_account.deposit(500);
	conor_account.withdrawal(15'000);

	if (account_balance > 0)
	{
		cout << "This transaction is ok";
	}

	if (account_balance <= 0)
	{
		cout << "Insufficient funds.";
	}
}