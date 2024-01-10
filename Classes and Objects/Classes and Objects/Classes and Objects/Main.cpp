#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
	Account conor_account;
	conor_account.set_name("Conor's Account");
	conor_account.set_balance(1000.0);

	if (conor_account.deposit(200))
		cout << "Deposit OK" << endl;
	else
		cout << "Deposit Not Allowed" << endl;

	if (conor_account.withdraw(500))
		cout << "Withdrawal OK" << endl;
	else
		cout << "Insufficient Funds" << endl;

	if (conor_account.withdraw(1500))
	{
		cout << "Withdrawal OK" << endl;
	}
	else
	{
		cout << "Insufficient Funds" << endl;
	}
	return 0;
}