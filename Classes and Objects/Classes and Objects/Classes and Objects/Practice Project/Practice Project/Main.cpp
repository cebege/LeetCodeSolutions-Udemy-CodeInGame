#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	Account conor_account;
	string accout_name{ "Conor's Account" };
	double account_balance{10'000.00};
	double deposit_amount{};
	double withdraw_amount{};
	conor_account.set_balance(account_balance);
	conor_account.get_balance();
	conor_account.set_name(accout_name);
	conor_account.get_name();

	cout << "Enter amount you would like to deposit: ";
	cin >> deposit_amount;
	cout << "Enter amount you would like to withdraw: ";
	cin >> withdraw_amount;

	if (conor_account.deposit(deposit_amount))
	{
		cout << "Deposit successful. " << deposit_amount << " has been added to your account." << endl;
	}

	if (conor_account.withdraw(withdraw_amount))
	{
		cout << "Insufficient Funds." << endl;
	}
	else
	{
		cout << "Withdraw Processed. " << withdraw_amount << " has been taken from your account." << endl;
		cout << "Your new balance is " << conor_account.get_balance();
	}






}